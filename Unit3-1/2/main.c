//Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your
//program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.

//Here are the conversion rules to use:
//1 meter = 3.2808 feet;
//1 gram = 0.002205 pounds;
//temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.On the first input line you are given
//the number of conversions to be made. Each of the following lines contains a value to be converted as well as its
//unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You
//should print your output value for each input line immediately after calculating it (ie, you do not have to wait
//until you have read all inputs).

//Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f
//(for feet, pounds or degrees Fahrenheit). Each conversion result should be printed on its own line, and you should
//store and display all decimal values as doubles.


#include <stdio.h>
double meter(double);
double gram(double);
double degree_Celsius(double);
int main(void){
    int number;
    scanf("%d", & number);
    double numbers_should_converted[number],numbers_converted[number];
    char number_type[number];
    int i;
    for (i=0; i<number; i++){
        scanf("%lf %c", & numbers_should_converted[i], & number_type[i]);
    }
    for (i=0; i<number; i++){
        if (number_type[i] == 'm'){

            numbers_converted[i] = meter(numbers_should_converted[i]);
            printf("%.6lf ft\n", numbers_converted[i]);

        } else if(number_type[i] == 'g'){

            numbers_converted[i] = gram(numbers_should_converted[i]);
            printf("%.6lf lbs\n", numbers_converted[i]);

        } else if(number_type[i] == 'c'){

            numbers_converted[i] = degree_Celsius(numbers_should_converted[i]);
            printf("%.6lf f\n", numbers_converted[i]);

        }
    }
    return 0;
}

double meter(double m){
    double meter_converted;
    meter_converted = m * 3.2808;
    return meter_converted;
}

double gram(double g){
    double gram_converted;
    gram_converted = g * 0.002205;
    return gram_converted;
}

double degree_Celsius(double d){
    double degree_Celsius_converted;
    degree_Celsius_converted = 32 + 1.8 * d;
    return degree_Celsius_converted;
}
