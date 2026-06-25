#include<stdio.h>
int main(){
    int n;
    int ch = 'A';

    printf("Enter rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for( int j =1; j <= i; j++){
            printf("%c", ch);
        }
        ch++; //next alphabet
        printf("\n");
    }
    return 0;
}