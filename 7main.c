//to arrange elements in assending order of an array 
#include<stdio.h>
int main(){
    int a[5],i,j,temp;
    printf("enter array elements: ");
    for(i=0;i<5;i++){
        scanf("%2d",&a[i]);
        }
        for(i=0;i<5;i++){
            for(j=i+1;j<5;j++){if(a[i]>a[j]){temp=a[i];
            a[j]=a[i];
            a[j]=temp;
            }
            }
        }printf("assending order elements: ");
    for(i=0;i<5;i++){
        printf("%2d",a[i]);
        }
}