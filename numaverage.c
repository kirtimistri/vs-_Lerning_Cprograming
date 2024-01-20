//to find averange of numbers using array 
#include <stdio.h>
int main()
{int marks[10],average,i,n,sum=0;
printf("\nHow many numbers you want  to srtore :");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\nEnetr numbers :",i+1);
scanf("%d",&marks[i]);
sum+=marks[i];
}average=sum/n;
printf("\nAverage :%d",average);
}
