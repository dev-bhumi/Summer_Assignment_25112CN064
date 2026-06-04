#include<stdio.h>
int main(){
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   int product = 1;
   int last_digit = 0;
   while(n!=0){
   last_digit = n%10;
   product = product * last_digit;
   n=n/10;
   }
   printf("The Product of digits of given number is %d",product);
    return 0;
}