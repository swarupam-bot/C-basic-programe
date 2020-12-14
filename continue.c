#include<stdio.h>

int main(){
int i=0,skip=5;
do
{
    printf("natural numbers %d\n",i);
    i++;
    if (i==skip)
    {  
        continue;
    }
    else 
    {
        printf("accept 5 %d",i);
    }
    
    
  

} while (i<10);

    return 0;
}