#include<stdio.h>
int main(){
    int x, n, power = 1;
    printf("Enter base: ");
    scanf("%d", &x);
    printf("Enter power: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        power = power*x;
    }
    printf("%d to the power %d is %d", x ,n, power);
    return 0;
}