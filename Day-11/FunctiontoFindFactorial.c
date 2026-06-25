#include<stdio.h>
int fact(int x){
    int temp = 1;
    for(int i = 1; i <= x; i++){
    temp = temp*i;
    }
    return temp;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int factorial = fact(n);

    printf("The Factorial of %d is %d", n,factorial);

    return 0;
}