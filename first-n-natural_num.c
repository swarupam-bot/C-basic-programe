#include <stdio.h>

int main()
{
    int i = 0;
    // printf("enter any number \n");
    // scanf("%d",&i);

    // for ( i; i < 100; i++)
    // {
    //     printf("natural numbers are %d\n",i);
    // }
    do
    {
        if(i>10){
        printf("first 10 natural numbers %d\n", i);
        }
        i++;
    }
    while (i<20);
   
    
    return 0;
}