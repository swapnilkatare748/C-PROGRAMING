//word count//
#include<stdio.h>
#include<string.h>

#define out 0;
#define in 1;

int main()
{
    // function declearation
    int word_count(char*);
    //local variable decleration
    int count = 0;
    char* s = "  microsoft  is my dream company  becous is the drem of oll candidets in It fild .";
    //code
    count = word_count(s);
    printf("numbers of word count is = %d", count);
    return 0;
}
int word_count(char* str, int *space)
{
    //local variable decleration
    int state, wc, i;
    //code
    state = out;
    wc = 0;
    for (i = 0; i < strlen(str)); i++)
    {
        if (state == out && !isspace(str[i]))
        {
            state = in;
            wc++;
        }
        else if (state = = in && isspace(str[i]))
            state = out;

     }
    return(wc);
}
