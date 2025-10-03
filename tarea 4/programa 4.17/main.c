#include <stdio.h>

/* Llivias.
El programa permite calcular el promedio mensual de las lluvias caidas en tres regiones importantes del pais. Determina tambien cual es la region con mayor promedio de lluvia anual. */

void mayor(float, float, float);                     /* Prototipode funcion. */

void main(void)
{
int I;
float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
for (I =1; I <= 12; I++)
{
    printf("\n\nIngresa las lluvias del mes%d", I);
    printf("\nRegiones Golfo, Pacifico y Caribe: ");
    scanf("%f %f %f", &GOL, &PAC, &CAR);
    AGOL += GOL;
    APAC += PAC;
    ACAR += CAR;
}
printf("\n\nPromedio de lluvias Region Golfo: %6.2f", (AGOL / 12));
printf("\nPromedio de lluvias Region Pacifico: %6.2f ", (APAC / 12));
printf("\nPromedio de lluvias Region Caribe: %6.2f \n", (ACAR / 12));
mayor(AGOL, APAC, ACAR);
/* Se llama a la funcion Mayor. Paso de parametros por valor. */
}

void mayor(float R1, float R2, float R3)
/* Esta funcion obtiene la region con mayor promedio de lluvias anual. */
{
if (R1 > R2)
    if (R1 > R3)
        printf("\nRegion con mayor promedio: Region Golfo. Promedio: %6,2f",
               R1 / 12);
     else
        printf("\nRegion con mayor promedio: Region Caribe. Promedio: 6%.2f",
               R3 / 12);
   else
    if (R2 > R3)
    printf("\nRegion con mayor promedio: Region pacifico. Promedio: 6.2f",
           R3 / 12);
}
