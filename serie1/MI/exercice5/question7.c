#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, cpt_a = 0, cpt_A = 0;
    char car;

    do
    {
    printf("Donner un entier N>0\n");
    scanf("%d",&n);
    } while (n<=0);

    for(i=0; i < n; i++)
    {

        printf("Entrer un caractere car \n");
        scanf(" %c", &car); 
        switch (car)
        {
            case 'a':
                cpt_a++;
            break;
            case 'A':
                cpt_A++;
            break;
        }
    }

    printf("Compteur caractere a = %d\n", cpt_a);
    printf("Compteur caractere A = %d\n", cpt_A);

    return 0;

    }