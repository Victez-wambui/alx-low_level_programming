#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - 'prints numbers of base 16'
*Return: Always (0);
*/
int main(void)
{
   char c;

   int d;

   c = 'a';
   while
           (d < 10) {
                   putchar(d + '0');
                   d++
           }
   while
           (c <= 'f') {
                   putchar(c);
                   c++
           }
   return (0);

