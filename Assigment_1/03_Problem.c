/*
Problem 3. (Find the number of years) Write a program that prompts the user to enter the
Minutes (e.g., 1 billion), and displays the number of years and days for the minutes.
For simplicity, assume a year has 365 days.
*/
#include<stdio.h>
int main(){
    long int minutes;
    float years;
    printf("Enter Minutes: ");
    scanf("%d", &minutes);

    years = (float)minutes / (365 * 24 * 60);
    printf("%f", years);

    return 0;
}