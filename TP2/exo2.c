#include <stdio.h>
int main ()
{
    int i, nbDepart;

    printf("Veuillez saisir le nombre de depart: ");
    scanf("%d", &nbDepart);

    for (i=nbDepart+1; i<=nbDepart+10; i++)
    {
        printf("%d ",i);
    }

}
