#include <stdio.h>
#include <math.h>

int main(void)
{
   float a,b,c,d,x1,x2;

   scanf("%f",&a);
   scanf("%f",&b);
   scanf("%f",&c);

     d = b*b*-4*a*c;
   if (d < 0){
     x1 = -b/(2*a);
     x2 = sqrt(-b)/(2*a);

   printf("x1=%f+%fi",x1,x2);
   printf("x2=%f-%fi",x1,x2);
   }
   else if(d == 0){
      x1 = -b/(2*a);
   printf("x1 = %f",x1);
   }
   else {
      x1 = -b/(2*a);
      x2 = sqrt(d)/(2*a);
   printf("x1 = %f+%f",x1,x2);
   printf("x2 = %f-%f",x1,x2);
   }
return 0;
}
