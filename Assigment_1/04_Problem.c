// BMI Calculator
#include<stdio.h>
int main(){
    float weight, meter, BMI; 
    float feet, inches;
    char unit_char;
    int flag =0;
    printf("Enter Your weight in kg: \n");
    scanf("%f", &weight);
    printf("What is Your Prefered unit of Height Type 'M' for Meter and 'F' for Feet:");
    scanf(" %c", &unit_char);//Put space before %c to deal with '\n' charcter 
    
    //printf("ERROR: %d \n",unit_char);

    if (unit_char == 'M'){
        printf("Enter Height is Meter: \n");
        scanf(" %f", &meter);
        flag = 1;
    }
    else if(unit_char == 'F'){
        printf("Enter Height in Feet and Inches First Enter Feet: \n");
        scanf(" %f", &feet);
        printf("Now Enter Inches: \n");
        scanf(" %f",&inches);
        meter = (feet + (inches/12)) * 0.3048;
        printf("Hieght in meter is: %f \n", meter);
        flag = 1;
    }
    else{
        printf("[INFO] INVALID VALUE! \n");
        flag = 0;
    }
    
    // Formula to calculate BMI
    BMI = weight / (meter * meter);
    printf("BMI is: %f \n", BMI);

    if(flag){
        if (BMI<18.5){
            printf("UNDERWEIGHT \n");
        }
        else if(BMI<25){
            printf("NORMAL \n");
        }
        else if(BMI<30){
            printf("OVERWEIGHT \n");
        }
        else{
            printf("VERY-OVERWEIGHT \n");
        }
    }
    return 0;
}