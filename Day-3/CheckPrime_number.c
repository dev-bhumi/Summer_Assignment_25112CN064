#include<stdio.h>
int main(){
    int x;
    printf("Enter a number = ");
    scanf("%d",&x);
    int a = 0;
    if(x<=1){
        printf("the given number is neither prime nor composite");
    }
    for(int i=2; i<=x-1;i++){
        if(x%i==0){
            a=1;
            break;
        }
    }
    if(a==0) {
        printf("the given number is prime\n");
    }
    else {
        printf("the given number is composite\n");
    }
    return 0;
    }
    