#include<stdio.h>
int main(){
   int n;
   printf("Enter a number ");
   scanf("%d",&n);
   int t=n;
   int reverse = 0;
   int last_digit = 0;
   while(n>0){
    last_digit = n%10; 
    reverse = reverse*10 + last_digit;
    n = n/10;
   }
   if(t == reverse){
    printf("%d is Palindrome",t);
   }
   else{
   printf("%d is NOT Palindrome",t);
   }
    return 0;
}