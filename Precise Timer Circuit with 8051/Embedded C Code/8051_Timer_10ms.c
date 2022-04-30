#include <reg51.h>

sbit led = P2^0;

void Delay(void);

void main(){
	led = 0;
	
	while(1){
		led = 1;
		Delay();
		led = 0;
		Delay();
	}
}
void Delay(){
	TMOD = 0x01;
	TH0 = 0xDC;
	TL0 = 0x00;
	TR0 = 1;
	while(TF0 == 0);
		TR0 = 0;
		TF0 = 0;
	
}
