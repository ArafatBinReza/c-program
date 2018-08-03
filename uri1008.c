#include<stdio.h>

int main()
{
 int NUMBER,W_HOUR;
 float AMOUNT,SALARY=0;
 scanf("%d",&NUMBER);
 scanf("%d",&W_HOUR);
 scanf("%f",&AMOUNT);
 printf("NUMBER = %d\n",NUMBER);
 SALARY = W_HOUR*AMOUNT;
 printf("SALARY = U$ %0.2f\n",SALARY);
    return 0;
}
