#include <stdio.h>
int main ()
{
    int nb1;

    printf("Veuillez saisir un nombre: ");
    scanf("%d", &nb1);

    if (nb1%2 == 1)
        {
            printf("Le chiffre est impair");
        }
    else
        {
            printf("Le chiffre est pair");
        }
}
