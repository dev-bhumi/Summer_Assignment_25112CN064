#include<stdio.h>
int maximum(int a, int b){
    if(a > b) return a;
    else return b;
}
int main(){
  int a;
  printf("Enter 1st Number: ");
  scanf("%d", &a);  
  int b;
  printf("Enter 2nd Number: ");
  scanf("%d", &b);  

  int max = maximum(a,b);

  printf("The maximum number b/w %d and %d is %d", a,b,max);

  return 0;
}