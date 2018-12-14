#include <stdio.h>
int main ()
{
    int i, nbDepart, produit;

    printf("Veuillez saisir le nombre de depart: ");
    scanf("%d", &nbDepart);

    for (i=1; i<=10; i++)
    {
        produit = nbDepart * i;
        printf("%d x %d = %d\n",nbDepart, i, produit);
    }

}
