#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    int ld, sum = 0;
    for(int i = a; i <= b; i++){
        int temp = i;
        int sum = 0;
        while(temp > 0){
        ld = temp % 10;
        sum = sum + ld*ld*ld;
        temp = temp/10;
        }
        if(sum == i) printf("%d ", i);
    }
return 0;
}