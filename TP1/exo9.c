#include <stdio.h>
int main ()
{
    float prix, tva, ttc;
    char classe;

    printf("Veuillez saisir la classe du produit: ");
    scanf("%c", &classe);

    if (classe == 'A' || classe == 'a' || classe == 'B' || classe == 'b')
        {
            printf("Et son prix: ");
            scanf("%f", &prix);
            if (classe == 'A' || classe == 'a')
            {
               tva = 5.5;
            }
            else
            {
                tva = 20;
            }
        ttc = ((tva / 100) + 1) * prix;
        printf("Le taux de TVA est de %f et le prix TTC du produit est de %f.", tva, ttc);
        }
    else
        {
            printf("Veuillez saisir une classe valide (A/B) !");
        }
}
