#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 0.0;
    float b = 0.0;
    printf("\nIgrasa el Numero para calcualr la raiz cuadrada:");
    scanf("%f",&x);
    b = x;
    while(!(b == (x/b)))//verdare es todo lo que no se 0
    {
        b = 0.5 * ((x/b)+b);
    }
    printf("\nLa raix cuadrada de %f",x,b);
    return 0;

}
