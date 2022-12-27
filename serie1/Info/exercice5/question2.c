#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration
    char car;
    int cpt_min = 0, cpt_maj = 0;

    do
    {
        //saisie des caractere
        printf("Entrer un caractere car \n");
        scanf(" %c", &car);

        if ( (car >= 'a') && (car <= 'z') ) //minuscule
            cpt_min++;
        else if ( (car >= 'A') && (car <= 'Z') ) //majuscule
            cpt_maj++;

    } while (car != '#'); //si l'utilisateur saisi # on arrete

    printf("Compteur Minuscules = %d\n", cpt_min);
    printf("Compteur Majuscules = %d\n", cpt_maj);

    return 0;

}