#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaration
    int x, reste, nbX=1, carre, puissance, terminaison;

    do
    {
        printf("donne un entier positif X>0: \n");
        scanf("%d",&x);
    } while (x <= 0);

    //calculer la longueur de x
    reste = x/10;
    while (reste != 0)
    {
        reste = reste/10;
        nbX++;
    }

    //calculer le carre de x
    carre = x*x;

    //calculer la terminaison du "carre de x" en fonction de la longueur de "x"
    puissance = pow(10,nbX);
    terminaison = carre % puissance;

    //printf("Le nombre de chiffres de votre nombre est : %d \n",nbX);
    //printf("Le carre : %ld \n",carre);
    //printf("La terminaison : %d \n",terminaison);

    if (terminaison == x) printf("%d est automorphe \n",x);
    else printf("%d n'est pas automorphe \n",x);
    
    //probleme: si le chiffre est trop grand il va afficher pas automorphe

    return 0;
}
