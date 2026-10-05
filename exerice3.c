#include <stdio.h>
#include <math.h>
#include <string.h>

int main () 
{
    char motcomplet[100];
    printf("entrez un mot");
    scanf("%s", &motcomplet);
    char motincomplet [strlen(motcomplet)];
    
    
    for(int i = 0, i < strlen(motcomplet), i++)
    {
        motincomplet[i]= "_"
    }
    printf("%s", motincomplet);
    
    
    int ltrouve = 0;
    int gage = 0;
    char p0 [] = "\n\n\n\n\n\n\n-------\n";
    char p1 [] = "\n |\n |\n |\n |\n |\n |\n-------\n";
    char p2 [] = " -------\n | |\n |\n |\n |\n |\n-------\n";
    char p3 [] = " -------\n | |\n | O\n |\n |\n |\n-------\n";
    char p4 [] = " -------\n | |\n | O\n | |\n |\n |\n-------\n";
    char p5 [] = " -------\n | |\n | O\n | /|\\\n |\n |\n-------\n";
    char p6 [] = " -------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n";

    char p[] = {p0, p1, p2, p3, p4, p5, p6};


    while (gage < 7)
    {
        for(int i = 0, i<7, i++)
        {
        char c = '';
        printf("entrez une lettre");
        scanf("%c", &c);
        for(int g = 0, g < strlen(motcomplet), g++)
        {
            if(motcomplet[g] == c)
            {
                ltrouve++;
                printf("bravo lettre suivante");
                motcomplet[g]= motincomplet[g];
            }
            if(g == strlen(motcomplet) + 1 )
            {
                printf("%s", p[i]);
            }
        }
        printf("%s", p[i]);
        }
        printf("%s", motincomplet);
    }



}