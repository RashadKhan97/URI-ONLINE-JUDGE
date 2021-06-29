#include<stdio.h>
int main()
{
    float A,B,C,X,Y,Z,P,Q;
    scanf("%f %f %f", &A, &B, &C);
    X = (0.5*A*C);
    Y = (3.14159*C*C);
    Z = (0.5*(A+B)*C);
    P = (B*B);
    Q = (A*B);
    printf("TRIANGULO: %0.3f\n", X);
    printf("CIRCULO: %0.3f\n", Y);
    printf("TRAPEZIO: %0.3f\n", Z);
    printf("QUADRADO: %0.3f\n", P);
    printf("RETANGULO: %0.3f\n", Q);
    return 0;
}
