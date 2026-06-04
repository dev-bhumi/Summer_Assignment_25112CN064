#include<stdio.h>
int main(){
   int n;
   printf("Enter a number ");
   scanf("%d",&n);
   int reverse = 0;
   int last_digit = 0;
   while(n>0){
    last_digit = n%10; 
    reverse = reverse*10 + last_digit;
    n = n/10;
   }
   printf("Reverse of Given number is %d",reverse);
    return 0;
}