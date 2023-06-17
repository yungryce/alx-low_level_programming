#include <stdio.h>
/**
* Looping through small letters and printing  
* with putchar()
*/

int main(void)
{
       char ch;

       for (ch = 'a' ; ch <= 'z' ; ch++)
       {
       putchar(ch);
       }
       putchar('\n');

       return (0);
}
