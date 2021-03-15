/*
Problem 2: (Compute the volume of a cylinder) Write a program that reads in the radius
and length of a cylinder and computes the base area and volume using the following
Formulas:
Area = radius * radius * pi
Volume = area * length
*/
#include<stdio.h>
int main(){
    float radius, length, base_area, volume;
    printf("Enter Radius and Length: ");
    scanf("%f %f",&radius, &length);

    base_area = radius * radius * ((float)22/7);
    volume = base_area * length;
    printf("Area is: %f \n Volume is: %f",base_area, volume);

    return 0;
}