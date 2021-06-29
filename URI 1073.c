#include<stdio.h>
#include<math.h>
int main()
{
   int N,i,x=0;
   scanf("%d",&N);
   for(i=2;i<=N;i=i+2)
   {
       printf("%d^2 = %d\n",i,(i*i));
   }

    return 0;
}
