#include <stdio.h>

//Write your function prototype here

void age_change ( int * );

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here

	age_change (ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here

void age_change ( int * ageAddr){

    if (* ageAddr > 21){
        * ageAddr = * ageAddr - 10;
    }else{
        * ageAddr = * ageAddr * 2;
    }
}
