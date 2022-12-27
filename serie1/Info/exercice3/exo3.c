#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration 
    const float PU_T1 = 6.30, //prix unitaire tranche 1
                PU_T2 = 20.48, //prix unitaire tranche 2
                PU_T3 = 34.65, //prix unitaire tranche 3
                PU_T4 = 40.95; //prix unitaire tranche 4

    float Q; 

    /*calcul du cout de la consommation : 
    saisie des valeurs*/
    printf("donner la cout de la quantite d'eau consommee :\n");
    scanf("%f",&Q);

    //traitement et affichage
    if (Q<=25)
    {
        printf("Le cout de la quantite consommee est : %f \n", Q * PU_T1);
    }
    else 
    {
        if (Q<=55)
        {
            printf("Le cout de la quantite consommee est : %f \n", 25* PU_T1 +(Q - 25)*  PU_T2);
        }
        else 
        {
            if (Q <=82)
            {
                printf("Le cout de la quantite consommee est :%f \n", 25* PU_T1 + 25*PU_T2+(Q - 55)* PU_T3);
            }
            else printf("Le cout de la quantite consommee est : %f \n", 25* PU_T1 +25* PU_T2+750* PU_T3+ (Q - 82)* PU_T4);
        }
    }
        
    return 0;
}