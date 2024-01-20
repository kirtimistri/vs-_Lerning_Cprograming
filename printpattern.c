//code to print a pattern
#include<stdio.h>
#include<conio.h>
int main(pattern){
    int i,j,count=1;
    for(i=0;i<=10;i++)//for rows 
    {
        for(j=0;j<=i;j++)//for columns
         {
            printf("%2d",count);
            ++count;
        }printf("\n");
    }
}
