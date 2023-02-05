#include <stdio.h>
int main(void){
    int number_code;
    scanf("%d", &number_code);
    int length_code[number_code];
    char type_code[number_code];
    int i, amount_space=0, print_outout = 1;
    for (i=0; i<number_code; i++){
        scanf("%d %c", &length_code[i], &type_code[i]);
        if (type_code[i] == 'c'){
            amount_space = length_code[i] * sizeof(char) + amount_space;
        }else if (type_code[i] == 'i'){
            amount_space = length_code[i] * sizeof(int) + amount_space;
        }else if (type_code[i] == 'd'){
            amount_space = length_code[i] * sizeof(double) + amount_space;
        }else{
            print_outout = 0;
        }
    }
    if (print_outout == 1){
        printf("%d bytes", amount_space);
    }else{
        printf("invalid tracking code type");
    }
    return 0;
}
