// to identify number is pelindrome or not
#include<stdio.h>
int main(){
int n,r,c,s=0;
printf("\nEnter the number :");
scanf("%d",&n);
c=n;
while(n>0){
    r=n%10;
    s=r+(s*10);
    n=n/10;} 
    if(c==s)
        printf("\nthe number is palindrome :");
    else
        printf("\n the number is not palindrome  :");
    }