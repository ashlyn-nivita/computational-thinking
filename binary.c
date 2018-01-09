#include <stdio.h>
int main()
{
    long num, remainder, base = 1, binary = 0;
    scanf("%ld", &num);
    char ch=ch+num;
    while (ch > 0)
    {
        remainder = ch % 2;
        binary = binary + remainder * base;
        ch = ch / 2;
        base = base * 10;
    }
   printf(" %ld\n", binary);
   return 0;
}
