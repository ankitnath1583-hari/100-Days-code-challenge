#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp, swappedNum, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;

    
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
        digits++;
    }

    firstDigit = temp;

   
    int middlePart = (num % power) / 10;

  
    swappedNum = lastDigit * power + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}