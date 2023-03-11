// program to calculat the numbers of characters,lines,word,spaces,tab in string;
#include<string.h>
#include<stdio.h>
int main()
{
	char string[500];
	printf("\nenter the string.......\n");
	fgets(string, sizeof(string), stdin); //this is fgets function is get input from youser
	printf("\nsrintg is = %s", string);
	int char_c = 0;
	char_c = char_count(string);
	printf("\nNO OF CHAR IS =  %d", char_c);
	int space_c = 0;
	space_c = space_count(string);
	printf("\nNO OF SPACE  IN = %d", space_c);
	int tab_c = 0;
	tab_c = tab_count(string);
	printf("\nTABS IN STRING = %d", tab_c);
	int line_c = 0;
	line_c = line_count(string);
	printf("\nLINE COUNT = %d", line_c);
	int word_c = 0;
	word_c = word_count(string);
	printf("\nWORDS IN STRING IS = %d", word_c);

	return 0;
}
// character count functios
int char_count(char str[500])
{
	int count = strlen(str);
	return count;
}
// functio for count space 
int space_count(char str[500])
{
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			count++;
	}
	return count;
}
// function for tab count 
int tab_count(char str[500])
{
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '\t')
			count++;
	}
	return count;
}
int line_count(char str[500])
{
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '\n')
			count++;
	}return count;
}
// for yousing the word count in string 
#define out 0
#define in 1
int word_count(char str[500])
{
	int state;
	state = 0;
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (state == out && !isspace(str[i]))
		{
			count++;
			state = in;
		}
		else if (state == in && isspace(str[i]))
		{
			state = out;
		}
	}return count;
}