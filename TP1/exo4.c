#include <stdio.h>
int main ()
{
int S_Saisi, S, M, H;
printf("Veuillez saisir votre temps en seconde: ");
scanf("%d", &S_Saisi);
S = S_Saisi%60;
M = (S_Saisi / 60)%60;
H = (S_Saisi / 60 / 60)%60;
printf("Votre temps en seconde(s) est : %d heure(s) %d minute(s) %d seconde(s).", H, M, S);
}
