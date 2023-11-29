#include<reg51.h>
unsigned char digit[10] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void delay(unsigned int time)
{
unsigned int i,j;
for (i = 0;i<time;i++)
   for(j = 0;j<50;j++);
   }

void main()
{
unsigned int wheel1,wheel2;
p3 = 0x00;
p1 = 0x00;
p2 = 0x00;

while(1)
{
    wheel2 = P2>>4;
    wheel1 = p2&0x0F;
    p1 = ~0x04;
    p3 = digit[wheel 1];
    delay(20);
    p3 = 0x00;
    p1 = ~0x02;
    p3 = digit[wheel2];
    delay(20);
    p3 = 0x00;
}
}
