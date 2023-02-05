//Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of
//a number. To do so, your main function should first read an integer number as input and then call sumOfDigits(), which
// should in turn call itself until there are no digits left to sum, at which point the final sum should display to the
// user.

//Here is the main idea of how the recursion in sumOfDigits() should work:

//sumOfDigits(6452) = 2 + sumOfDigits(645)

//sumOfDigits(645) = 5 + sumOfDigits(64)

//...

//sumOfDigits(6) = 6

#include <stdio.h>
int sumOfDigits(int);
int main(void){
    //! showMemory(start=65520)
    int number, total_sum;
    scanf("%d", &number);
    total_sum = sumOfDigits(number);
    printf("%d", total_sum);
return 0;
}
int sumOfDigits(int x){
    int digits, next_number, sum_digits;
    sum_digits = 0;
    if (x <10){
        sum_digits =  x;
    } else {
        digits = x%10;
        next_number = (x/10);
        sum_digits = digits + sumOfDigits(next_number);
    }
    return sum_digits;
}
