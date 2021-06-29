#include<stdio.h>
int main()
{
    int A,B,C,X,Y,Z,temp;
    scanf("%d %d %d",&A,&B,&C);
    X=A;
    Y=B;
    Z=C;
    if(X>Y)
    {
        temp=X;
        X=Y;
        Y=temp;
    }
    if(Y>Z)
    {
        temp=Y;
        Y=Z;
        Z=temp;
    }
    if(X>Y)
    {
        temp=X;
        X=Y;
        Y=temp;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",X,Y,Z,A,B,C);
    return 0;
}
