//program to print larget of three 
#include <stdio.h>

int main() {
    int a,b,c;
printf("enter first number:\n");
scanf("%d",&a);
printf("enter second number:\n");
scanf("%d",&b);
printf("enter third number:\n");
scanf("%d",&c);
if(a > b && a > c){
 printf("%d is the big number:/n",a);
}else if(b > a && b > c){
 printf("%d is the big number:/n",b);
}else{
printf("%d is the big number:/n",c);
}
    return 0;
}
