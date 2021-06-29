#include<stdio.h>
int main()
{
    char x[15],y[15],z[15];
    scanf("%s", x);
    scanf("%s", y);
    scanf("%s", z);

    if(x[0]=='v' && y[0]=='a' && z[0]=='c')
    {
        printf("aguia\n");
    }
    if(x[0]=='v' && y[0]=='a' && z[0]=='o')
    {
        printf("pomba\n");
    }
    if(x[0]=='v' && y[1]=='m' && z[2]=='o')
    {
        printf("homem\n");
    }

}
