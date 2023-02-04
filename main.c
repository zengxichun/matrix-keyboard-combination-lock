#include <REGX52.H>
#include"delay.h"
#include"LCD1602.h"
#include"matrixkey.h"
void main ()
{
   int passwd=0;
    unsigned char keynumber,count =0;
    int i=0;
    LCD_Init();
    LCD_ShowString(1,1,"Password:");

   while (1)
   {
    keynumber=Matrix();
   if (keynumber)
   {
      if (keynumber<=10)
      {
         if (count==0)
         {
             LCD_ShowString(1,13,"   ");
            /* code */
         }
         
         if (count<4)
         {
               passwd*=10;
         passwd+=keynumber%10;
          count++;
            /* code */
         }  
            /* code */
         }

             if (keynumber==11)
         {
            if (passwd==2345)
            {LCD_ShowString(1,13,"ok ");
            passwd=0;
            count=0;
               /* code */
            }else{
               LCD_ShowString(1,13,"eer");
               passwd=0;
               count=0;
            }
          
            
         /* code */
      }
        if (keynumber==12)
            {
                   passwd=0;
               count=0;
               /* code */
            }
  LCD_ShowNum(2,1,passwd,4);
    /* code */
   }
    /* code */
   }


}