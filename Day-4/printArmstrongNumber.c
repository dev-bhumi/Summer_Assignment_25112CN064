#include<stdio.h>
int main(){
    int n, num, temp, rem, sum;

    printf("Enter limit: ");
    scanf("%d", &n);
    
    printf("Armstrong numbers are:\n");

    for(num = 1; num <= n; num++){
        temp = num;
        sum = 0;

    while(temp > 0){
        rem = temp % 10; 
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if(sum == num)
      printf("%d ", num); 
}
    return 0;
}