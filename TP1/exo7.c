#include <stdio.h>
int main ()
{
    float nb1, nb2;

    printf("Veuillez choisir deux nombres: ");
    scanf("%f", &nb1);
    printf("Le deuxième: ");
    scanf("%f", &nb2);

    if ((nb1 * nb2) >= 0)
        {
            if ((nb1 * nb2) == 0)
            {
                printf("Le resultat du produit est nul");
            }
            else
            {
                printf("Le resultat du produit est positif");
            }
        }
    else
        {
            printf("Le resultat du produit est negatif");
        }
}
