#include<stdio.h>

int isPrime(int n){
    if(n < 2)
    return 0;

    for(int i = 2; i < n; i++){
        if(n % i == 0)
        return 0;
    }
    return 1;
}
int main(){
    int n, largest = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        if(n % i == 0 && isPrime(i)){
            largest = i;
        }
    }
    printf("Largest prime factors %d\n", largest);
    
    return 0;
}