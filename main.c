//code to find transpose of matrix 
#include<stdio.h>
#include<conio.h>
int main(){
    int mat[2][2],i,j,trans[2][2];
    printf("enter matrix elements:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){scanf("%2d",&mat[i][j]);
        }
    }
    printf("matrix elements are:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){printf("%2d",mat[i][j]);
        }printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){trans[j][i]=mat[i][j];
                }}
    printf("transpose matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){printf("%2d",trans[i][j]);
        }printf("\n");
    }
}


