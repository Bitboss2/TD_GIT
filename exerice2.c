#include <stdio.h>
#include <math.h>

int main () 
{
    int n = 15;
    int C = 200000;
    int t = 4;
    int m = 0;
    printf("%d", m);
    m = (C * (t/12))/1-pow((1+(t/12)),-n*12);
    printf("la mentualité est de %d", m);
}