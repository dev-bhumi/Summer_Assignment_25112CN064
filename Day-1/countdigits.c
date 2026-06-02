<<<<<<< HEAD
#include<stdio.h>
int main(){
    int n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
    n=n/10;
    count++;
    }
    printf("total no. of digits:%d",count);
    return 0;
=======
#include<stdio.h>
int main(){
    int n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
    n=n/10;
    count++;
    }
    printf("total no. of digits:%d",count);
    return 0;
>>>>>>> f67b40d0012b619a44f80db9849cf9ad89b02446
}