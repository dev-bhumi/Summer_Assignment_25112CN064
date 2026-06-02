<<<<<<< HEAD
#include<stdio.h>
int main() {
    int n;
    int last_digit = 0;
    int sum = 0;
    printf ("enter first n natural number : ");
    scanf("%d", &n);
    while(n!=0){
        last_digit=n%10;
        sum = sum+last_digit;
        n=n/10;
    }
    printf("sum of first n natural no.=%d", sum);
    return 0;
=======
#include<stdio.h>
int main() {
    int n;
    int last_digit = 0;
    int sum = 0;
    printf ("enter first n natural number : ");
    scanf("%d", &n);
    while(n!=0){
        last_digit=n%10;
        sum = sum+last_digit;
        n=n/10;
    }
    printf("sum of first n natural no.=%d", sum);
    return 0;
>>>>>>> f67b40d0012b619a44f80db9849cf9ad89b02446
}