#include <stdio.h>

int main(void)
{
   int num1,num2,num3,num4,sum;//•Ï”num1,num2,num3,num4,sum‚ğéŒ¾‚·‚éB
   num1 = 0;//num1‚ğ0‚Æ‚·‚éB
   num2 = 0;//num2‚ğ0‚Æ‚·‚éB
   num3 = 0;//num3‚ğ0‚Æ‚·‚éB
   num4 = 100;//num4‚ğ100‚Æ‚·‚éB
   sum = 0;//sum‚ğ0‚Æ‚·‚éB

   printf("50‰~ 10‰~ 5‰~ 1‰~ \n");//(50‰~ 10‰~ 5‰~ 1‰~)‚ğo—Í‚·‚éB

   for(num1 = 0; num1 <= 2; num1++)//ŒJ‚è•Ô‚µBnum1‚ğ50‰~‚Æ‚µ‚Ä2–‡‚Å100‰~‚Æ‚·‚éB
   {
      for(num2 = 0; num2 <= 10; num2++)//ŒJ‚è•Ô‚µBnum2‚ğ10‰~‚Æ‚µ‚Ä10–‡‚Å100‰~‚Æ‚·‚éB
      {
         for(num3 = 0; num3 <= 20; num3++)//ŒJ‚è•Ô‚µBnum3‚ğ5‰~‚Æ‚µ‚Ä20–‡‚Å100‰~‚Æ‚·‚éB
         {
             for(num4 = 100; num4 >= 0; num4--)//ŒJ‚è•Ô‚µBnum4‚ğ1‰~‹Ê‚ğ100‚Æ‚µ‚Ä0–‡‚Æ‚·‚éB
             {
                if(num1*50+num2*10+num3*5+num4*1 == 100)//ğŒ•ªŠòBnum1‚ª50‰~Anum2‚ª10‰~Anum3‚ª5‰~Anum4‚ª1‰~A‡Œv100‰~‚Æ‚·‚éB
                {
                   printf("% d % d % d % d \n",num1,num2,num3,num4);//num1,num2,num3,num4‚ÌŒ‹‰Ê‚ğo—Í‚·‚éB

                   sum = sum + 1;//sum = sum + 1‚Æ‚·‚éBsum++‚Æ‚µ‚Ä‚à‚Å‚«‚éB
                }
             }
          }
       }
   }
   printf("‘g‚İ‡‚í‚¹‚Ì‘”‚Í%d’Ê‚è‚Å‚·.", sum);//sum‚ÌŒ‹‰Ê‚ğo—Í‚·‚éB

return 0;
}
