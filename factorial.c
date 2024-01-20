//find factorial of number 
#include<stdio.h>
int main(){
    int fact=1, num ,count;
    printf("\nEnter the value of number :");
    scanf("%d",&num);
     for(count=1;count<=num;count++){
        fact=fact*count;
     } 
     printf("\n the factorial of %d and is %d :",num,fact);
}
