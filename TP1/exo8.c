#include <stdio.h>
int main ()
{
    float nb1, nb2, nb3, max;

    printf("Veuillez choisir trois nombres: ");
    scanf("%f", &nb1);
    printf("Le deuxieme: ");
    scanf("%f", &nb2);
    printf("Le troiseme: ");
    scanf("%f", &nb3);

    if (nb1 > nb3 && nb2 > nb3)
        {
            if (nb1> nb2)
            {
                max = nb1;
            }
            else
            {
                max = nb2;
            }
        }
    else
        {
            max = nb3;
        }

    printf("La valeur la plus grande est %f", max);
}
