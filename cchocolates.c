#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the no of 5 rrupee coins");
    scanf("%d",&a);
    printf("enter no of 10 rupee coins");
    scanf("%d",&b);
    printf("enter price");
    scanf("%d",&c);


    printf("maximum no of chocolates ids %d",((5*a+b*10)/c));

}
