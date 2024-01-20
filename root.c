//square root without using sqrt() librory function
#include<stdio.h> 
 int main(){
    float i,n;
    printf("\nEnter the value :");
    scanf("%f",&n);
    for(i=0.01;i*i<n;i=i+0.01); 
    printf(" \n the square root is :%f",i);
 }
