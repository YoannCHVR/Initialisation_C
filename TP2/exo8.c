#include <stdio.h>
int main()
{
    int i, f, nb;

    scanf("%d", &nb);

    for (i=1; i<=nb; i=i+1)
    {
       for (f=1; f<=nb; f=f+1)
       {
           printf("*");
       }
       printf("\n");
    }
}
