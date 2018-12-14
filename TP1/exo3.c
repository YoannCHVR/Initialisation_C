#include <stdio.h>
int main ()
{
float Lt, lt, Lm, lm, La, la, At, Am, Aa, Ag;
int Tg, H, M, S;
printf("Veuillez saisir la longueur de votre terrain: ");
scanf("%f", &Lt);
printf("Veuillez saisir la largeur de votre terrain: ");
scanf("%f", &lt);
At = Lt * lt;
printf("L'aire du terrain est de %f m2.\n", At);
printf("Veuillez saisir la longueur de votre maison: ");
scanf("%f", &Lm);
printf("Veuillez saisir la largeur de votre maison: ");
scanf("%f", &lm);
Am = Lm * lm;
printf("L'aire de votre maison est de %f m2.\n", Am);
printf("Veuillez saisir la longueur de votre appentis: ");
scanf("%f", &La);
printf("Veuillez saisir la largeur de votre appentis: ");
scanf("%f", &la);
Aa = (La * la) / 2;
printf("L'aire de votre appentis est de %f m2.\n", Aa);
Ag = At - (Am + Aa);
printf("L'aire de votre gazon est de %f m2. \n", Ag);
Tg = Ag*15;
S = Tg%60;
M = (Tg / 60)%60;
H = (Tg / 60 / 60)%60;
printf("Le temps de tondre le gazon est de : %d heure(s) %d minute(s) %d seconde(s).", H, M, S);
}
