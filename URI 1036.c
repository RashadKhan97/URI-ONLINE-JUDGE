#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,r1,r2,x1;
    scanf("%lf %lf %lf", &a,&b,&c);
    x1=((b*b)-4.0*a*c);
    if(x1<0||a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
        {
            d=sqrt(x1);
            r1=((-b+d)/(2.0*a));
            r2=((-b-d)/(2.0*a));
            printf("R1 = %0.5lf\n",r1);
            printf("R2 = %0.5lf\n",r2);
        }
      return 0;
}
