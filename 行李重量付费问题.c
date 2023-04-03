#include <stdio.h>
int main ()
{
       double weight,money;
       printf("请输入你行李的重量kg\n");
       scanf("%lf",&weight);
       if ( weight<=20 )                                     
	   money=0;
       else if (weight>20 && weight<=40)               
	   money=(weight-20)*0.1;
       else                                                               
	    money=(weight-20)*0.08;

       printf("收取行李费%.4lf元\n",money);
return 0;      
}
