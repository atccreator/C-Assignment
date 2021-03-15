/*
Problem 5.(Geometry: distance of two points) Write a program that prompts the user to enter
two points (x1, y1) and (x2, y2) and displays their distance between them.(Hint: use the formula for compute the distance between the two points)

Refer this link: https://www.mathsisfun.com/algebra/distance-2-points.html
*/
#include<stdio.h>
#include<math.h>
int main(){
double x1, x2, y1, y2;
double distance;
printf("Enter Value of x1 and y1: \n");
scanf("%lf %lf", &x1, &y1);

printf("Enter Value of x2 and y2: \n");
scanf(" %lf %lf",&x2, &y2);

distance = sqrt((pow(x2-x1,2)+pow((y2-y1),2)));
printf("Distance is: %lf",distance);

return 0;
}