#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("\t\t\t\tCap�tulo 5 - Letra C\n\n");

int i, R;
i = 2;
R = 1;
    while(i <= 100){
            R = R + i;
            i++;
    }
    printf("\nO resultado da soma dos cem primeiros n�meros naturais � %i.\n", R);

 system("\npause\n");
    return 0;
}

