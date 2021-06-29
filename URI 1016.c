#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d", &X);
    Y = X/((90 / 60.0) - (60 / 60.0));
    printf("%d minutos\n", Y);
    return 0;
}

