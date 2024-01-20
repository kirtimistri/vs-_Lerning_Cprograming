//to find th epower of number without using pow() librory function 
#include<stdio.h>
int power(int b,int p);
int main(){
    int b,p,r;
    printf("\nEnter the value of base: ");
    scanf("%d",&b);
    printf("\nEnter the value of bace: ");
    scanf("%d",&p);
     r=power(b,p);
     printf("/n theh result is:%d",r);
     return 0;}
int power(int b,int p){
if(p==0){return 1;

} else{ return b*power(b,p-1);}
}