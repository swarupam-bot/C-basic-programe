#include <stdio.h>

int main()
{
    int i;
    printf("enter any num\n");
    scanf("%d",&i);
    int prime = 1;
    for (int n = 2; i > n; i++)

    {
        if (i % n == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 0)
    {
        printf("this not a prime num\n");
    }
    else
    {
        printf("this is a prime num\n");
    }
    return 0;
}