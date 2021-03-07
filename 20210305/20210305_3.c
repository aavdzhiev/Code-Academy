/* Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC. */
#include <stdio.h>
#include <stdlib.h>

float tempDiff(float known_temp, int altitude1, int altitude2) {
    int heightDiff = 0;
    float temp = 0.0;

    if (altitude1 == altitude2) {
        temp = known_temp;
    } else if (altitude1 > altitude2) {
        heightDiff = altitude1 - altitude2;
        temp = known_temp + ((float)heightDiff / 100) * 0.5;
    } else if (altitude1 < altitude2) {
        heightDiff = altitude2 - altitude1;
        temp = known_temp - ((float)heightDiff / 100) * 0.5;
    }

    return temp;
}

int main() {
    int known_alt1, unknown_alt1;
    float known_temp = 0.0, unknown_temp = 0.0;

    printf("Enter an altitude with known temperature: \n");
    scanf("%d", &known_alt1);

    printf("Enter the temperature for this altitue: \n");
    scanf("%f", &known_temp);

    printf("Enter an altitude with unknown temperature: \n");
    scanf("%d", &unknown_alt1);

    unknown_temp = tempDiff(known_temp, known_alt1, unknown_alt1);
    printf("The temperature of the peak you are looking for is: %.2f\n", unknown_temp);
    
    return 0;
}
