#include <stdio.h>
#include <math.h>
#include <string.h>

int main () 
{
    char motcomplet[100];
    printf("entrez un mot \n");
    scanf("%s", &motcomplet);
    char motincomplet [strlen(motcomplet) + 1];
    
    
    for(int i = 0; i < strlen(motcomplet); i++)
    {
        motincomplet[i] = '-';
    }
    printf("voici le mot incomplet \n");
    motincomplet[strlen(motcomplet)] = '\0';
    printf("%s \n", motincomplet);
    
    
    int gage = 0;

    char *p[] = {
        "\n\n\n\n\n\n\n-------\n",
        "\n |\n |\n |\n |\n |\n |\n-------\n",
        " -------\n | |\n |\n |\n |\n |\n-------\n", 
        " -------\n | |\n | O\n |\n |\n |\n-------\n",
        " -------\n | |\n | O\n | |\n |\n |\n-------\n",
        " -------\n | |\n | O\n | /|\\\n |\n |\n-------\n",
        " -------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n" 
    };


    while (gage < 7)
    {
        char lettre = '-';
        int lreussi = 0;
        printf("entrez une lettre \n");
        scanf(" %c", &lettre);
        for(int i = 0; i < strlen(motcomplet); i++)
        {
            if(motcomplet[i] == lettre)
            {
                motincomplet[i] = motcomplet[i];
                printf("bravo lettre trouvee %s \n", motincomplet);
                lreussi = 1;
            }
        }
        if( lreussi != 1)
        {
            gage++;
            printf("ce n est pas la bonne lettre \n");
            printf("%s", p[gage - 1]);

        }
    }



}