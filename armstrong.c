//armstrong number
#include<stdio.h>
int main(){
  int arm=0,c,r,n;
  printf("Enter the value :");
  scanf("%d",&n);
  c=n;
  while(n>0){
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
  }
if(c==arm)
    printf("\nit is an Armstrong number :");
else
    printf("\nit is not an Armstrong number:");

}
