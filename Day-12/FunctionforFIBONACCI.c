#include<stdio.h>
void fibonacci(int n){
    int a = 0, b = 1, sum;

    while(n != 0){
        printf("%d ", a);

        sum = a + b;
        a = b;
        b = sum;

        n--;
    }
}
int main(){
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}