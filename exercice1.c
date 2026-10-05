#include <stdio.h>

int main () 
{
    printf("entrez un nombre de secondes");
    int nb = 0;
    int nbheure = 0;
    int nbminute = 0;
    int nbsecondes = 0;
    scanf("%d", &nb);
    nbheure = nb / 3600;
    nbminute = (nb - (nbheure * 3600)) / 60;
    nbsecondes = nb - (nbheure * 3600) - (nbminute * 60);
    printf(" %d heure %d minute %d secondes", nbheure, nbminute, nbsecondes);
}
