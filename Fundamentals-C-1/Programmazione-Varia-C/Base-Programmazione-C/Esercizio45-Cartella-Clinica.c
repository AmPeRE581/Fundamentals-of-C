/*Esercizio45: Health Records

Computerization of Health Records
A health care issue that has been in the news lately is the computerization of health records.
This possibility is being approached cautiously because of sensitive privacy and security concerns, among others.

Computerizing health records could make it easier for patients to share their health profiles and histories among their various health care professionals.
This could improve the quality of health care, help avoid drug conflicts and erroneous drug prescriptions, reduce costs and in emergencies, could save lives.

In this exercise, you'll design a "starter" HealthProfile class for a person. The class attributes should include the person's, 
- first name
- last name
- gender
- date of birth (consisting of separate attributes for the month, day and year of birth)
- height (in inches), 
- and weight (in pounds).

Your class should have a constructor that receives this data. For each attribute, provide set and get functions.

The class also should include functions that calculate and return 
- the user's age in years
- maximum heart rate and target-heart-rate range
- and body mass index

Write an applications that prompts for the person's information, instantiates an object of class 
HealthProfile for that person and prints the information from that object - including the person's first name, last name, gender, date of birth, height and weight
then calculates and prints the person's age in years, BMI, maximum heart rate and target-heart-rate range. It should also display the "BMI values" chart.

The formula for calcuting your maximum heart rate in beats per minute is 220 minus your age in years.

maximum heart rate = 220 - age in years

Your target heart rate is a range that is 50-85% of your maximum heart rate.

target heart rate = 50% - 85% of maximum heart rate

The class also should include a function getAge that calculates and returns the person's age (in years), a function getMaximumHeartRate that calculates and returns the person's maximum heart rate and a function getTargetHeartRate

Since you do not yet know how to obtain the current date from the computer, function getAge should 
prompt the user to enter the current month, day and year before calculatin the person's age.

The BMI Formula is:

BMI = weightKilograms/heightMeters * heightInMeters*/

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

typedef struct{
    char firstName[50];
    char lastName[50];
    char gender;
    int birthMonth, birthDay, birthYear;
    int heightInches, weightPounds;
} HealthProfile;

void getHealthProfile(HealthProfile *profile){
    printf("Enter first name: ");
    scanf("%s", profile -> firstName);

    printf("Enter last name: ");
    scanf("%s", profile -> lastName);

    printf("Enter gender (M/F): ");
    scanf("%c", &profile -> gender);

    printf("Enter birth month, day, and year (MM DD YYYY): ");
    scanf("%d %d %d", &profile->birthMonth, &profile->birthDay, &profile->birthYear);

    printf("Enter height in inches: ");
    scanf("%d", &profile->heightInches);

    printf("Enter weight in pounds: ");
    scanf("%d", &profile->weightPounds);
}

int getAge(HealthProfile profile){
    int currentMonth, currentDay, currentYear;

    printf("Enter current month, day, and year (MM DD YYYY): ");
    scanf("%d %d %d", &currentMonth, &currentDay, &currentYear);

    int age = currentYear - profile.birthYear;
    if(currentMonth < profile.birthMonth || (currentMonth == profile.birthMonth && currentDay < profile.birthDay)){
        age--;
    }
    return age;
}

float getBMI(HealthProfile profile){
    float heightInMeters = profile.heightInches * 0.0254;
    float weightKg = profile.weightPounds * 0.453592;
    return weightKg / (heightInMeters * heightInMeters);
}

int getMaximumHeartRate(int age){
    return 220-age;
}

void getTargetHeartRateRange(int getMaximumHeartRate){
    int lowerLimit = getMaximumHeartRate * 0.5;
    int upperLimit = getMaximumHeartRate * 0.85;
    printf("Target Heart Rate Range: %d - %d beats per minute\n", lowerLimit, upperLimit);
}

int main(){
    HealthProfile profile;
    getHealthProfile(&profile);

    int age = getAge(profile);
    float bmi = getBMI(profile);
    int maximumHeartRate = getMaximumHeartRate(age);

    printf("\nHealth Profile:\n");
    printf("Name: %s %s\n", profile.firstName, profile.lastName);
    printf("Gender: %c\n", profile.gender);
    printf("Date of Birth: %d%d%d\n", profile.birthMonth, profile.birthDay, profile.birthYear);
    printf("Height: %d inches\n", profile.heightInches);
    printf("Weight: %d pounds\n", profile.weightPounds);
    printf("Age: %d years\n", age);
    printf("BMI: %.1f\n", bmi);
    printf("Maximum Heart Rate: %d beats per minute\n", maximumHeartRate);
    getTargetHeartRateRange(maximumHeartRate);

    printf("\nBMI Values:\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");


    return 0;
}