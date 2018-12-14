#include <stdio.h>
int main ()
{
    float taux, totalFact, RemFact, PrixFinal ;

    printf ("Saisir le montant de la facture: ") ;
    scanf ("%f", &totalFact) ;

    if (totalFact<10000) {
        taux = 0.1 ;
    }
    else {
        if (totalFact<20000) {
            taux = 0.2 ;
        }
        else {
            taux = 0.3 ;
        }
    }
    printf("\nVoici le taux de remise accorde %f \n", taux);
    RemFact = taux * totalFact;
    PrixFinal = totalFact - RemFact;
    printf("\nVotre montant de facture etant de %f, le montant de la remise est de %f ce qui fait un prix final de %f\n", totalFact, RemFact, PrixFinal);
    printf("\nMontant de la facture: %f; Taux de remise: %f; \nRemise sur la facture: %f; Prix final: %f;\n", totalFact, taux, RemFact, PrixFinal);
}
