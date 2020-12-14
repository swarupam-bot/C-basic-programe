#include <stdio.h>

int main()
{
    int i = 0, sum = 0, a = 5;

    do
    {
        ("%d\n", i);
        i++;
        {
            sum += i;
        }

    } while (i <= a);

    printf(" first 4 natural num %d", sum);

    return 0;
}