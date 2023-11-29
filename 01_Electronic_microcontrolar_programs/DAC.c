#include <REG51.h>

void delay_ramp(unsigned int time)
{
  unsigned int i,j; 
  for(i=time;i>0;i--)
  {
  	for(j=0;j<10;j++);
  }
    
}


void send_dac(unsigned int dat)
{
	P2 = dat;
}

void main(void)
{
  unsigned int a,state=0xff;

   while(1)
   {
  	// rising ramp edge
	 for(a=0x0;a<0xFF;a++)
	 {
	 	send_dac(a);
		delay_ramp(1);
	 }
  	// falling ramp edge
	 for(a=0xFF;a>0;a--)
	 {
	 	send_dac(a);
		delay_ramp(1);
	 }
  	}
}




//                                     PROGRAM FOR SINE WAVEFORM



#include <REG51.h>

unsigned int lut[20]={0,10,17,25,35,42,50,57,65,71,77,82,87,91,95,97,99,100,100};

void delay_time(unsigned int time)
{
  unsigned int i,j; 
  for(i=time;i>0;i--)
  {
  	for(j=0;j<50;j++);
  }
    
}


void send_dac(unsigned int dat)
{
  P1 = dat;
}

void main(void)
{
  signed char ang=0;

   while(1)
   {
   				
       for(ang = 0;ang < 90; ang+=5)
	  {
	   	send_dac(lut[ang/5]+0x7F);
	    delay_time(0);
	  }
				//90-180 deg
	   for(ang = 90;ang > 0; ang-=5)
	  {
	  	  	send_dac(lut[ang/5]+0x7F);
		   delay_time(0);
	  }
				//180-270 deg
	   for(ang = 0;ang < 90; ang+=5)
	  {
	  	  	send_dac(-lut[ang/5]-0x7F);
		   delay_time(0);
	  }

				 //270-360 deg
	   for(ang = 90;ang > 0; ang-=5)
	  {
	  	  	send_dac(-lut[ang/5]-0x7F);
		   delay_time(0);
	  }
	  
	}
}  


void main(void)
{
  signed char ang=0;

   while(1)
   {
   				//0-90 deg
     	  for(ang = 0;ang < 90; ang+=5)
	  {
	  	  	send_dac(lut[ang/5]);
		   delay_time(0);
	  }
				//90-180 deg
	   for(ang = 90;ang > 0; ang-=5)
	  {
	  	  	send_dac(lut[ang/5]);
		   delay_time(0);
	  }
				//180-270 deg
	   for(ang = 0;ang < 90; ang+=5)
	  {
	  	  	send_dac(-lut[ang/5]);
		   delay_time(0);
	  }

				 //270-360 deg
	   for(ang = 90;ang > 0; ang-=5)
	  {
	  	  	send_dac(-lut[ang/5]);
		   delay_time(0);
	  }
	}
}  



//                                          PROGRAM FOR SQUARE WAVEFORM



#include<REG51.h>

void delay_time(unsigned int time)
{
  unsigned int i,j; 
  for(i=time;i>0;i--)
  {
  	for(j=0;j<20;j++);
  }
 
    
}

void send_dac(unsigned int dat)
{
	P1 = dat;
}


void main(void)
{
 unsigned int delay=0x0F;
 unsigned char state=0xFF;
 send_dac(0x7F);
 while(1)
 {
	send_dac(state);
	delay_time(delay);
    send_dac(~state);
	delay_time(delay); 
 }
}



  