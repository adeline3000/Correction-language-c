/*
Le nombre parfait est un nombre positif qui est égal à la somme de tous ses diviseurs sauf lui-même. 
Exemple :
    28 est un nombre parfait tel que 1 + 2 + 4 + 7 + 14 = 28.
    15 n’est pas un nombre parfait, car 1 + 3 + 5 n’est pas égal à 15.
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int somme=0, premier, n;
    do
    {
        printf("Entrez un nombre > 10 : ");
        scanf("%d", &n);
    } while (n <= 10); 

    for (int nbr = 10; nbr <= n; nbr++)
    {
        //verifier si nbr est parfait
        premier = 0;
        for(int i = 1; i < nbr; i++)
        {
            if(nbr%i == 0) premier = premier + i;
        }
        if(premier == nbr) 
        {
            somme += nbr;
            printf("somme + %d = %d \n",nbr,somme);
        }
            
    }
    
    printf("la somme des nombres parfaits compris entre 10 et %d est %d",n,somme);

    return 0;
}