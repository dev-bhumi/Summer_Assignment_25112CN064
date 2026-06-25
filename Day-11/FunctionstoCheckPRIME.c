#include<stdio.h>
void check(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) count++;
    }
    if(n <= 1) printf("The Given No. is neither PRIME nor COMPOSITE");
    else if(count == 2) printf("The Given No. is PRIME");
    else printf("The Given No. is COMPOSITE");

    return;
}
int main(){
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);

    check(n);

    return 0;
}