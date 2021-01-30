/* Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r)
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */
#include <stdio.h>
extern float g_PI;

float circleArea(float r);
float area();

int main() {
    printf("The area of a circle is: %.6f", area());

    return 0;
}

float circleArea(float r) {
    return g_PI * r * r;
}

float area() {
    float r;
    printf("Enter a radius: \n");
    scanf("%f", &r);

    return circleArea(r);
}

float g_PI = 3.14;