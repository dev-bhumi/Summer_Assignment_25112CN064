#include<stdio.h>
int main(){
    int num, temp, rem, sum  = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;

    while(temp > 0){
        rem = temp % 10; //Last digit
        sum = sum + rem * rem * rem;
        temp = temp / 10; //Remove last digit
    }
    if(sum == num)
      printf("Armstrong Number");
    else
        printf("Not a Armstrong Number");  
    return 0;
}