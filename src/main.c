#include "stm32f10x.h"                  // Device header
#include "timer2.h"
#include "lcd.h"

int main()
{
	timer2_Init();
	
	while(1)
	{
	  LCD_Init();
	  LCD_Puts(" Hello ");
	  delay_ms(1000);
	  LCD_Clear();
	  LCD_GotoXY(0,0);
	  LCD_Puts(" Tien Dat ");
	  delay_ms(1000);
	  LCD_GotoXY(0,1);
	  LCD_Puts(" 0963638965 ");
		delay_ms(1000);
		LCD_Clear();
	}
}
