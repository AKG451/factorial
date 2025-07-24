#include <stdio.h>

//Factorial of a number 

int main(){
  int n=1;
  printf("Enter the number:");
  scanf("%d", &n);
  int fact=1;
  int i=1;
  while(i<=n){
    fact *=i;
    i++;
  }
  printf("The factorial of %d is %d\n",n, fact);
return(0);
}