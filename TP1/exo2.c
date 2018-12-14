#include <stdio.h>
int main ()
{
float F, C;
printf("Veuillez saisir la valeur a convertir en Celsuis: ");
scanf("%f", &F);
C = 0.55556 * (F - 32) ;
printf("%f F = %f C", F, C);
}
