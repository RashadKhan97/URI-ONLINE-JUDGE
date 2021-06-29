#include<stdio.h>
int main()
{
    int N,time,hr,min,sec;
    scanf("%d", &N);
    hr = (N/3600);
    sec = N%3600;
    min = (sec/60);
    sec = sec%60;
    printf("%d:%d:%d\n", hr, min, sec);
    return 0;
}
