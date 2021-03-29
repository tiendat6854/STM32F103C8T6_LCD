#include "timer2.h"

void timer2_Init(void)
{
  RCC->APB1ENR |= (1 << 0);
	TIM2->CR1 = (1 << 7) | (1 << 1);
	TIM2->PSC = 72 - 1;
	TIM2->CR1 &= ~(1 << 1);
	TIM2->EGR = 1;
	TIM2->CR1 |= (1 << 0);
}

void delay_ms(uint32_t t)
{
  while(t)
	{
	  TIM2->CNT = 0; 
		while(TIM2->CNT < 1000) {}
	  --t;
	}
}

void delay_us(uint32_t t)
{
	  TIM2->CNT = 0; 
		while(TIM2->CNT < t) {}
}
