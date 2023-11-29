#include<reg51.h>
const unsigned int states[8] = {0x0E01,0x0E10,0xD02,0xD20,0xB04,0xB40,0x708,0x780};
void delay(unsigned int time)
{
	unsigned int i,j;
	for(i =o;i<time;i++)
	      for(j=0;j<5000;j++);
}
int main()
{
	unsigned int i;
	p1 = 0x00;
	p2 = 0x00;
	while(1)
	{
		 for(i = 0;i<8;i = i+2)
		    {
					p1 = states[i] & 0xFF;
					p2 = (states[i]>> 8)& 0xFF;
					delay(200);
					p1 = states[i+1]&OxFF;
					p2 = (states[i+1]>>8)& 0xFF;
					delay(50);
				}
			}
}