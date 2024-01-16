//to store student data and average, total marks 
#include<stdio.h>
struct stu{
    int sroll;
    char sname[20];
    int smarks[5];
};
int main(){struct stu s ;
int total=0,i;
float avg;
printf("Enter students roll number :\n");
scanf("%d",&s.sroll);
printf("Enter students name :\n");
scanf("%s",&s.sname);
printf("Enter student marks of 5 subject :\n");
scanf("%d",&s.smarks);
for(i=0;i<5;i++){
    scanf("%d",&s.smarks[i]);
    total=total+s.smarks[i];
    avg=(float)total/5;}
printf("students name :%s\n",s.sname);
printf(" students roll no  :%d\n",s.sroll);
printf("students average is :%d\n",avg);
printf("students total is :%f\n",total);
return 0;
};
