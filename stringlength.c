//to find the lendth of string 
#include<stdio.h>
int main(){
    char str[20];
    int i;
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("\nThe length of string is :%d",i);
}
