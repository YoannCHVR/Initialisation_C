#include <stdio.h>
int main ()
{
    //char retry;
    int i, nbDepart, produit, retry;

    do
    {
        printf("\nVeuillez saisir le nombre de depart: ");
        scanf("%d", &nbDepart);

        for (i=1; i<=10; i++)
        {
            produit = nbDepart * i;
            printf("%d x %d = %d\n",nbDepart, i, produit);
        }

        printf("\nVoulez-vous relancer le programme ? (1)");
        scanf("%d", &retry);
    } while (retry == 1);
}
