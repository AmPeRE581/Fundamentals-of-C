#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>

static void on_download_button_clicked(GtkWidget *widget, gpointer data) {
    const char *url = gtk_entry_get_text(GTK_ENTRY(data));
    if (strlen(url) == 0) {
        GtkWidget *dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_WARNING, GTK_BUTTONS_CLOSE, "Inserisci l'URL del video di YouTube");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
        return;
    }

    // Comando per scaricare l'audio con yt-dlp
    char command1[1024];
    snprintf(command1, sizeof(command1), 
        "yt-dlp -f bestaudio -o \"audio_temp.%%(ext)s\" \"%s\"", url);

    // Esegui il comando
    int result1 = system(command1);

    if (result1 != 0) {
        GtkWidget *dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_ERROR, GTK_BUTTONS_CLOSE, "Errore durante il download dell'audio.");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
        return;
    }

    // Comando per convertire l'audio con ffmpeg
    char command2[1024];
    snprintf(command2, sizeof(command2), 
        "ffmpeg -i audio_temp.webm -b:a 192k -vn output.m4a");

    // Esegui il comando
    int result2 = system(command2);

    // Mostra un messaggio in base al risultato del comando
    GtkWidget *dialog;
    if (result2 == 0) {
        dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_INFO, GTK_BUTTONS_CLOSE, "Download e conversione completati!");
    } else {
        dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_ERROR, GTK_BUTTONS_CLOSE, "Errore durante la conversione dell'audio.");
    }
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "YouTube Audio Downloader");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 200);
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    GtkWidget *url_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(url_entry), "Inserisci l'URL di YouTube");
    gtk_box_pack_start(GTK_BOX(vbox), url_entry, TRUE, TRUE, 0);

    GtkWidget *download_button = gtk_button_new_with_label("Scarica");
    g_signal_connect(download_button, "clicked", G_CALLBACK(on_download_button_clicked), url_entry);
    gtk_box_pack_start(GTK_BOX(vbox), download_button, TRUE, TRUE, 0);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}


//dipendenze: sudo apt-get install libgtk-3-dev yt-dlp
//per compilare: gcc -o youtube_downloader ytdownloader.c $(pkg-config --cflags --libs gtk+-3.0)

