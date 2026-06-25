#include<stdio.h>

int palindrome(int n){
   int t=n;
   int reverse = 0;
   int last_digit = 0;
   while(n>0){
    last_digit = n%10; 
    reverse = reverse*10 + last_digit;
    n = n/10;
   }
   if(t == reverse){
     return 1;
   }
   else{
    return 0;
   }
}
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

     return 0;
}