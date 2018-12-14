#include <stdio.h>
int main ()
{
    int nb;

    printf("Veuillez saisir le nombre de vote choix entre 1 et 20: ");
    scanf("%d", &nb);

    while (nb < 1 || nb > 20)
    {
        printf("Veuillez saisir le nombre de vote choix entre 1 et 20: ");
        scanf("%d", &nb);
    }
}
