#include<stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d%f",&x,&y);
    if((x%5==0)&&(y-x-0.5)>0)
        y = y-x-0.5;
    printf("%f",y);
    return 0;
}