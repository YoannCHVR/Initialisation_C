#include <stdio.h>
int main ()
{
float nb1, nb2, division ;
printf("Veuillez saisir le premier nombre a diviser: ");
scanf("%f", &nb1) ;
printf("Veuillez saisir le deuxième nombre a diviser: ");
scanf("%f", &nb2) ;
division = nb1/nb2 ;
printf("Le resultat de la division %f et %f est de %f", nb1, nb2, division) ;
}
