// program to store the information of students
#include<stdio.h>
#include<conio.h>
struct student{
    char name[50];
    int marks;
    int roll;
};
void main(){
    struct student s[10];
    int i;
    printf("Enter the name of student:\n");
for(i=0;i<10;++i){s[i].roll=i+1;
printf("\nfor roll %d ",s[i].roll);
printf("Enter name:");
scanf("%s",s[i].name);
printf("enter marks:");
scanf("%d",&s[i].marks);
printf("\n");
}
printf("displaying the information of student:\n");
for(i=0;i<10;++i){
    printf("student roll no:%d\n",i+1);
    printf("name :");
    puts(s[i].name);
    printf("marks:%d",s[i].marks);
}}
