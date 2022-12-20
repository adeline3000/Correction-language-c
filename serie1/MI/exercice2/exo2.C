#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration 
    const float PU_E_T1 = 1.7787, //prix unitaire electricite tranche 1
                PU_E_T2 = 4.1789, //prix unitaire electricite tranche 2
                PU_E_T3 = 4.8120, //prix unitaire electricite tranche 3
                PU_E_T4 = 5.4796, //prix unitaire electricite tranche 4
                PU_G_T1 = 0.1682, //prix unitaire Gaz tranche 1
                PU_G_T2 = 0.3245, //prix unitaire Gaz tranche 2
                PU_G_T3 = 0.4025, //prix unitaire Gaz tranche 3
                PU_G_T4 = 0.4599; //prix unitaire Gaz tranche 4

    float Q_Cons_Elect, Q_Cons_Gaz; 

    /*calcul du cout de la consommation de l'electricite : 
    saisie des valeurs*/
    printf("Veuillez introduire la quantite d'electricite en KWH :\n");
    scanf("%f",&Q_Cons_Elect);

    //traitement et affichage
    if (Q_Cons_Elect<=125)
    {
        printf("Le cout de l'electricite est : %f \n", Q_Cons_Elect * PU_E_T1);
    }
    else 
    {
        if (Q_Cons_Elect<=250)
        {
            printf("Le cout de l'electricite est : %f \n", 125* PU_E_T1 +(Q_Cons_Elect -125)*  PU_E_T2);
        }
        else 
        {
            if (Q_Cons_Elect <=1000)
            {
                printf("Le cout de l'electricite est :%f \n", 125* PU_E_T1 + 125*PU_E_T2+(Q_Cons_Elect - 250)* PU_E_T3);
            }
            else printf("Le cout de l'electricite est : %f \n", 125* PU_E_T1 +125* PU_E_T2+750* PU_E_T3+ (Q_Cons_Elect - 1000)* PU_E_T4);
        }
    }

    /*calcul du cout de la consommation du gaz :  
    saisie des valeurs*/
    printf("Veuillez la quantite du gaz en TH :\n");
    scanf("%f",&Q_Cons_Gaz);

    //traitement et affichage
    if (Q_Cons_Gaz <=1125)
    {
        printf("Le cout du gaz est : %f", Q_Cons_Gaz * 0.1682);
    }
    else
    {
        if (Q_Cons_Gaz<=1375)
        {
            printf("Le cout du gaz est : %f ", 1125* PU_G_T1 +(Q_Cons_Gaz - 1125)* PU_G_T2);
        }
        else
        {
            if (Q_Cons_Gaz <=4712)
            {
                printf("Le cout du gaz est : %f ", 1125*PU_G_T1 +250*PU_G_T2+(Q_Cons_Gaz - 1375)* PU_G_T3);
            }
            else
            {
                printf("Le cout du gaz est : %f ", 1125* PU_G_T1 +250*PU_G_T2 +4712* PU_G_T3+ (Q_Cons_Gaz-4712)* PU_G_T4);
            }   
        }   
    }
        
    return 0;
}