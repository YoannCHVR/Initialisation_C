#include <stdio.h>
int main ()
{
    float nb1, nb2, resultat;
    int choix;

    printf("Veuillez saisir deux nombres: ");
    scanf("%f", &nb1);
    printf("Le deuxieme: ");
    scanf("%f", &nb2);
    printf("Faites votre choix dans le menu suivant en tapant le numero de l option: \n");
    printf("    1. Additionner les 2 nombres\n");
    printf("    2. Multiplier les 2 nombres\n");
    printf("    3. Soustraire les 2 nombres\n");
    printf("    4. Diviser les 2 nombres\n");

    if(scanf("%d", choix) == 1)
        {
            printf("CHoix 1");
        }
    if(scanf("%d", choix) == 2)
        {
            printf("CHoix 1");
        }
    if(scanf("%d", choix) == 3)
        {
            printf("CHoix 1");
        }
    if(scanf("%d", choix) == 4)
        {
            printf("CHoix 1");
        }
}
