#include<stdio.h>

int main(){
int a,b,factorial=0;

printf("enter any num \n");
scanf("%d",&b);

for(a=0;a<=b;a++){
    factorial *=a;

}
printf("factorial  of given natural numbers %d\n",factorial);
    return 0;
}