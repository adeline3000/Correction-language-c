/*1) L'en-tête <studio.h> doit être <stdio.h> */
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    int tab[100], n, j, d; 
    do{ 
        printf("Donner la taille du tableau: "); 
        /*2) Le format "%f" est incorrect, il devrait être "%d" 
        car la variable n est de type entier */
        scanf("%d", &n); 
    }while(n<1 || n>100);   
    for (int i = 0; i < n; i++) 
    {
        do{   
            printf("T[%d]= ", i);
            /*3) passer l'adresse de l'élément du tableau pour pouvoir stocker la valeur saisie*/
            scanf("%d", &tab[i]); 
            j = 0 ; 
            while(j<i && tab[j] != tab[i]) 
                /*4) "j=j++;" n'a aucun effet car elle incrémente j de 1 puis lui affecte sa propre valeur.*/
                j++; 
            /*5) L'opérateur de comparaison "==" est utilisé à la place de l'opérateur d'affectation "=" */
            d = 0; 
            for (int l=1;l< tab[i];l++) {
                /*6) l'opérateur modulo en C devrait être "%" */
                if (tab[i] % l == 0) 
                    {d++;}
            } 
        /*7) L'opérateur de comparaison "différent de" en C devrait être "!=" 
        + fermer la boucle for en ajoutant "}" à la fin de l'instruction*/        
        }while(d >=2 ||  tab[i] <2 || j != i ); } 
    printf("\nTableau :\t"); 
    for(int i=0; i<n; i++) 
    { 
        printf("%d\t",tab[i]); 
    } 
    printf("\n");

    //question 4
    /*Calculer la moyenne du tableau*/
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += tab[i];
    }
    float moy = sum / n;
    printf("\nmoy = %f ", moy);
    /*supprimer toutes les valeurs inférieures à la moyenne*/
    for (int i = 0; i < n; i++) {
        if (tab[i] < moy) {
            for (j = i; j < n - 1; j++) {
                tab[j] = tab[j + 1];
            }
            i--;
            n--;
        }
    }
    /*Trier ce tableau dans l'ordre croissant*/
    for (int i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (tab[i] > tab[j]) {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    
    //affichage (pas obligatoire)
    printf("\nTableau apres suppression des valeurs inferieures a la moyenne et trie : \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0; 
}