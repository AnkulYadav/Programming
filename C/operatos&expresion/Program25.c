//this program aceepts value and find average percentage
#include<stdio.h>
 
int main(){
    int m1,m2,m3,m4,m5;
    float avg,per;
    printf("Enter the marks in each five subject\n");
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
    per=(((float)m1+m2+m3+m4+m5)/500)*100;
    printf("percentage=%0.3f%% average=%0.3f\n",per,(float)(m1+m2+m3+m4+m5)/5);

return 0;
}
