// Question :-If  the  marks  obtained  by  a  student  in  five  different  subjects  are input  through  the  keyboard, write  a  program  to find  out  the aggregate  marks  and  percentage  marks  obtained  by  the  student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
// Answer:- this is a program that print the percentage of a student in 6 subjet 
#include<stdio.h>


int main(){
    int total_marks,per,mark1,mark2,mark3,mark4,mark5,mark6;
    printf("Enter the no of each subject \n");
    scanf("%d%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5,&mark6);
    total_marks=mark1+mark2+mark3+mark4+mark5+mark6;
    per=total_marks/6;
    printf("the total marks of the student is =%d\n and percentage of the student is %d\n",total_marks,per);

return 0;
}