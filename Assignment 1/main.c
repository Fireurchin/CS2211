/* CS2211b 2020 */
/* Assignment 1 */
/* Mingpei Dou  */
/* 2020/01/21 - 19:01 EST */

#include <stdio.h>
#include <stdlib.h>

  void printBits(size_t const size, void const * const ptr);

int main()
{

float c;
char a;
double d;
int b;

d = 561232019;     /* 8 bytes */
c = 154.6;      /* 4 bytes */
b = -83273;      /* 4 bytes */
a = 42;        /* 1 byte */




printf("\n------------------------------------------\n");

printf("LABEL   -  ADDRESS(hex)   ADDRESS (dec) [S - E]   -     VALUE    -    BINARY\n");

printf("A  -        ");
printf("%p   -    ",&a);
printf("%lu  -  %lu          ",(long)&a,(long)&a + sizeof(a)-1);
printf("%d  -        ",a);
printBits(sizeof(a), &a);
printf("\n------------------------------------------\n");

printf("B  -        ");
printf("%p   -    ",&b);
printf("%lu  -  %lu          ",(long)&b,(long)&b + sizeof(b)-1);
printf("%d  -        ",b);
printBits(sizeof(b), &b);
printf("\n------------------------------------------\n");

printf("C  -        ");
printf("%p   -    ",&c);
printf("%lu  -  %lu          ",(long)&c,(long)&c + sizeof(c)-1);
printf("%f  -        ",c);
printBits(sizeof(c), &c);
printf("\n------------------------------------------\n");

printf("D  -        ");
printf("%p   -    ",&d);
printf("%lu  -  %lu          ",(long)&d,(long)&d + sizeof(d)-1);
printf("%lf  -        ",d);
printBits(sizeof(d), &d);
printf("\n------------------------------------------\n");
    return 0;
}

//assumes little endian
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
        printf(" ");
    }
    puts("");
}
