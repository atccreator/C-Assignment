/*
Problem 1: (Convert Celsius to Fahrenheit) Write a program that reads a Celsius degree in
a double value from the console, then converts it to Fahrenheit and displays the
result. The formula for the conversion is as follows:
Fahrenheit = (9 / 5) * Celsius + 32;
*/

#include<stdio.h>
int main(){
    double celsius;
    double fahrenheit;
    printf("Enter Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * ((double)9/5)) + 32;
    printf("Converted Value in fahrenheit is: %.2lf", fahrenheit);
    
    return 0;
}