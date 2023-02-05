#include <stdio.h>
int min(int , int);
int main(void){
    int total_number;
    scanf("%d", &total_number);
    int numbers[total_number];
    int i;
    int minimum;
    scanf("%d", &numbers[0]);
    minimum = numbers[0];
    for (i=1; i<total_number; i++){
        scanf("%d", &numbers[i]);
        minimum = min(minimum , numbers[i]);
    }
    printf("%d", minimum);
    return 0;
}
int min (int x, int y){
    int min_value;
    if (x<=y) {
        min_value = x;
    } else{
        min_value = y;
    }
    return min_value;
}
