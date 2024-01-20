//program to print prime numbers
#include<stdio.h>
#include<conio.h>
int isprime (int n){int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
   }return 1; 
}
int main(){
int n1,n2,i;
printf("Enter the first number:");
scanf("%d",&n1); 
printf("enter second number");
scanf("%d",&n2);
printf("the prime numbers between %d and %d are :",n1,n2);
for(i=n1;i<=n2;i++){ 
    if(isprime(i)){
    printf("%d\n",i);
}
}return 0;
}
