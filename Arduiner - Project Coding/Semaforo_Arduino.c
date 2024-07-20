#include <Arduino.h>

// Definizione dei pin per i LED del semaforo auto
#define RED_PIN 10
#define YELLOW_PIN 9
#define GREEN_PIN 8

// Definizione dei pin per i LED del semaforo pedonale
#define PED_RED_PIN 7
#define PED_GREEN_PIN 6

// Definizione del pin per il pulsante pedonale
#define BUTTON_PIN 2

// Durata dei vari stati in millisecondi
#define GREEN_DURATION 5000
#define YELLOW_DURATION 2000
#define RED_DURATION 5000
#define PED_GREEN_DURATION 5000
#define PED_RED_DURATION 5000

volatile bool pedButtonPressed = false;

// Funzioni dichiarate per il compilatore
void setup();
void loop();
void handlePedestrianCrossing();
void handlePedButtonPress();

int main(void) {
  // Inizializzazione della libreria Arduino
  init();

  // Configura i pin di input/output
  setup();

  // Loop principale
  while (1) {
    loop();
  }

  return 0;
}

void setup() {
  // Imposta i pin come output
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(PED_RED_PIN, OUTPUT);
  pinMode(PED_GREEN_PIN, OUTPUT);
  
  // Imposta il pin del pulsante come input con pull-up interno
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Configura l'interrupt sul pulsante pedonale
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), handlePedButtonPress, FALLING);

  // Inizializza i semafori
  digitalWrite(PED_RED_PIN, HIGH);
}

void loop() {
  // Semaforo verde per auto
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, LOW);
  delay(GREEN_DURATION);

  // Controllo del pulsante pedonale
  if (pedButtonPressed) {
    handlePedestrianCrossing();
    pedButtonPressed = false;
  }

  // Semaforo giallo per auto
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  digitalWrite(RED_PIN, LOW);
  delay(YELLOW_DURATION);

  // Semaforo rosso per auto
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);
  delay(RED_DURATION);
}

void handlePedestrianCrossing() {
  // Accendi il verde per i pedoni
  digitalWrite(PED_GREEN_PIN, HIGH);
  digitalWrite(PED_RED_PIN, LOW);

  // Rosso per le auto
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);

  // Mantieni il verde per i pedoni per la durata specificata
  delay(PED_GREEN_DURATION);

  // Ripristina il rosso per i pedoni
  digitalWrite(PED_GREEN_PIN, LOW);
  digitalWrite(PED_RED_PIN, HIGH);

  // Mantieni il rosso per i pedoni per la durata specificata
  delay(PED_RED_DURATION);
}

void handlePedButtonPress() {
  pedButtonPressed = true;
}
