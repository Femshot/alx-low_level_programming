#include <stdio.h>

/**
 * main - pointers arithmetic
 *
 * Return: Always 0.
 */

int main(void)
{
   int *p;
   int a[2];
   int n;

   p = &n;
   printf("p = &n;\np: %p\n", p);
   printf("p + 1: %p\n", p + 1);
   printf("p + 3: %p\n", p + 3);
   printf("p + 5: %p\n", p + 5);
   printf("&p = %p\n", &p);
   /* possible since a is evaluated */
   /* as an int * in this context */
   p = a;
   printf("p = a;\np: %p\np + 1: %p\n", p, p + 1);
   return (0);
}
