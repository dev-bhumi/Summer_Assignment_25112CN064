#include<stdio.h>

int sumofDigits(int n){
    if(n == 0)
    return 0;

    return(n % 10)+sumofDigits(n / 10);
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumofDigits(num));

    return 0;
}