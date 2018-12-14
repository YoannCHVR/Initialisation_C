#include <stdio.h>
#define ANNEE_ACTUELLE 2016

int main ()
{
    float sommeIni, sommeFin;
    int annee, anneeProch;

    printf("Veuillez saisir le somme a verser: ");
    scanf("%f", &sommeIni);

    while (sommeIni < 500)
    {
        printf("\nVeuillez saisir un montant minimum de 500 euros: ");
        scanf("%f", &sommeIni);
    }

    printf("Veuillez saisir la date du versement (AAAA): ");
    scanf("%d", &annee);

    anneeProch = ANNEE_ACTUELLE + 1;

    while (annee != ANNEE_ACTUELLE && annee != anneeProch)
    {
        printf("Veuillez saisir l'annee actuelle ou l'annee prochaine (AAAA): ");
        scanf("%d", &annee);
    }

    sommeFin = sommeIni;

    printf("\nFin %d : niveau du compte = %f\n", annee, sommeFin);

    while(sommeFin <= 10000)
        {
            sommeFin = sommeFin * (1+2.5/100);
            annee = annee + 1;
            printf("- Fin %d : niveau du compte = %f\n", annee, sommeFin);
        }

    printf("\nLe niveau du compte aura atteint, voire depasse la somme de 10 000 euros en %d.", annee);

}
