#include <stdio.h>
void reverseArray (int *);
int main(void){
    int array[6];
    int i;
    for ( i =0; i<6; i++){
        scanf("%d", &array[i]);
    }
    reverseArray (array);
    for ( i =0; i<6; i++){
        printf("%d ", array[i]);
    }
    return 0;
}

void reverseArray (int * pointer){
    int swap;
    swap = * (pointer + 5);
    * (pointer + 5) = * pointer;
    * pointer = swap;
    swap = * (pointer + 4);
    * (pointer + 4) = * (pointer + 1);
    * (pointer + 1) = swap;
    swap = * (pointer + 3);
    * (pointer + 3) = * (pointer + 2);
    * (pointer + 2) = swap;
}
