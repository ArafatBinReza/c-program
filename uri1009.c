#include<stdio.h>

int main()
{
 char NAME[100];
 double SALARY,M_TOTAL,TOTAL=0,i;
 gets(NAME);
 scanf("%lf",&SALARY);
 scanf("%lf",&M_TOTAL);
 TOTAL = SALARY+((M_TOTAL/100)*15);
 printf("TOTAL = R$ %0.2f\n",TOTAL);
    return 0;
}
