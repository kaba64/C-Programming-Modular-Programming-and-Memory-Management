#include <stdio.h>
int main(void){
    char type;
    int number, amount_storage, amount_storage_mb, amount_storage_kb, amount_storage_byte;
    double number_byte;
    scanf("%c %d", &type, &number);
    if (type == 'i'){
        amount_storage = number * sizeof(int);
    }else if( type == 's'){
        amount_storage = number * sizeof(short);
    }else if( type == 'c'){
        amount_storage = number * sizeof(char);
    }else if(type == 'd'){
        amount_storage = number * sizeof(double);
    }
    if (amount_storage <1000){
        amount_storage_byte = amount_storage;
        printf("%d B", amount_storage_byte);
    }
    else if ( (amount_storage >= 1000 && amount_storage < 1000000) ){
        amount_storage_kb = amount_storage/1000;
        amount_storage_byte = amount_storage - amount_storage_kb * 1000;
        //number_byte = (amount_storage/1000.0) - amount_storage_kb;
        //amount_storage_byte = number_byte * 1000;
        printf("%d KB and %d B", amount_storage_kb, amount_storage_byte);
    }else if ( (amount_storage>= 1000000) ){
        amount_storage_mb = amount_storage/1000000;
        amount_storage = amount_storage - amount_storage_mb * 1000000;
        amount_storage_kb = amount_storage/1000;
        number_byte = (amount_storage/1000.0) - amount_storage_kb;
        amount_storage_byte = number_byte * 1000;
        printf("%d MB and %d KB and %d B", amount_storage_mb, amount_storage_kb, amount_storage_byte);
    }
return 0;
}
