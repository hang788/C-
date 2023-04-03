#include <stdio.h>
#include <math.h>
int main()
{ 
       double money, s;
       printf("请输入你的车程") ;
       scanf("%lf",&s);
       if (s<=3)
       printf("应付车费6元");
       else
       {   s=ceil(s);             
              money=(s-3)*1.5+6;
              printf("应付车费%f元",money);
       }
       return 0;
}
