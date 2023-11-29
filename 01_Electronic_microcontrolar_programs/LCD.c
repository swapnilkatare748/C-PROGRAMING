#include<reg51.h>
#define Lcd port PO
sbit rs = P3^2;
sbit en = PO^0;

void delay(unsigned int count)
{
	int i,j;
	for(i =0;i<count;i++)
	    for (j= 0;j<112;j++)
}

void lcd_command(char cmnd)
{
	Lcd_port = (Lcd_port & 0x0F)| (cmnd & 0xF0);
	rs = 0;
	en = 1;
	delay(1);
	en = 0;
	delay(2);
	Lcd_port = (lcd_port & 0x0F) | (cmnd << 4);
	delay(1);
	en = 0;
	delay(5);
}
void lcd_char(char char_data)
{
	lcd_port = (lcd_port & 0x0F) | (char_data & 0xF0);
	rs =1;
	en = 1;
	delay(1);
	en = 0;
	delay(2);
	lcd_port = (lcd_port & 0x0F) | (char_data << 4);
	en = 1;
	delay(1);
	en = 0;
	delay(5);
}
void lcd_string(char *str)
{
	int i;
	for(i = 0;str[i] != )
	{
		lcd_char(str[i]);
	}
}
void lcd_string_xy(char row,char pos,char *str)
{
	if(row == 0)
		lcd_command((pos & 0x0F) | 0X80);
	else if(row ==1){
		lcd_command((pos & 0x0F) |0xC0);
	   lcd_string(str);}
	 }
void lcd_init(void)
{
	delay(20);
	lcd_command(0x02);
	lcd_command(0x28);
	lcd_command (0x0C);
	lcd_command(0x06);
	lcd_command (0x80);
}
void main()
{
	lcd_init();
	lcd_string("microEmbedded");
	lcd_command(0xC0);
	lcd_string_xy(1,0,"techologies");
	while(1);
}

