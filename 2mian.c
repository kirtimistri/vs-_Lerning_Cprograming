//code to print a pattern 
#include<stdio.h>
#include<conio.h>
int main (){ 
    int i,j,count=0;
    for(i=0;i<=5;i++){count++;
        for(j=0;j<=i;j++){
            printf("%2d",count);
        }printf("\n");
    }
    }