//ptogram to find if matrix is symmetric or not 
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,mat[3][3],trans[3][3],f=0;
    printf("enter the elements of matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }}
    printf("matrix elements are:\n");    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%2d",mat[i][j]);
        }printf("\n");
    }for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            trans[j][i]=mat[i][j];
        }}
        printf(" transpose matrix is:\n");
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%2d",trans[i][j]);
        }printf("\n");}
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(mat[i][j]!=trans[i][j]){
                f=1;
                break;
            }
        }}
if (f==0){
    printf("matrix is symmetric!!");
}
else{
    printf("matrix is not symmetric!!");
}
}
