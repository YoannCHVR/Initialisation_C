#include <stdio.h>
int main ()
{
    int i, nb, somme;

    nb = 20;
    somme = 0;

    for (i=1; i<=20; i++)
    {
        somme = somme + nb;
        printf("%d ",nb);
        nb = nb - 1;
    }

    printf("\n%d", somme);
}
