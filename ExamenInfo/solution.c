#include <stdio.h>
#include <stdlib.h>
int main(){

    /* 1) "valeùrs" est un nom de variable non valide en C 
    car il contient un caractère accentué*/
    int valeurs[100], n, output = -1, j, l, r; 

    do{
        printf("Donner la taille du tableau: ");
        scanf("%d", &n);
    }while(n<1 || n>100); //2) pour permettre à l'utilisateur de saisir une taille de tableau valide

    /*3) Les tableaux en C commencent à l'index 0 et la dernier index est n-1
    Il devrait donc être écrit comme ci dessous pour que la boucle parcoure tous les éléments du tableau. 
    Cette erreur peut causer des erreurs de calculs ou des erreurs de mémoire. 
    Il est donc important de corriger cette erreur pour que le programme fonctionne correctement.*/
    for (int i = 0; i < n; i++){
        printf("T[%d]= ", i); // Pas une erreur, c'est juste un affichage
        /* 4) Le format "%f" est incorrect, il devrait être "%d" pour des entiers + corriger "valeùrs" */
        scanf("%d", &valeurs[i]); 
    }
    printf("\n"); // Pas une erreur, c'est juste un saut de ligne
    int i = 0; //On peut declarer une variable n'importe où dans le programme
    while(i < n && output == -1){
        l = 0;
        /*5) il n'y a pas de ';' après for() + corriger "valeùrs" */
        for(j=0; j<i; j++) l += valeurs[j]; 
        r = 0;
        for(j=i+1; j<n; j++) r += valeurs[j];
        /*6) L'opérateur d'affectation "=" est utilisé à la place de l'opérateur de comparaison "==".*/
        if (r == l) output = i;
        /* 7) "i=i++;" n'a aucun effet car elle incrémente i de 1 puis lui affecte sa propre valeur.*/
        i++;
    }
    printf("output = %d",output);

    //Q4. Declarer un nouveau vecteur T de m nombres entiers (m <= 100)
    int T[100], m;

    do{
        printf("\nDonner la taille du tableau: ");
        scanf("%d", &m);
    }while(m<1 || m>100);

    //Q5. Remplir le vecteur
    for (i = 0; i < m; i++){
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);
    }

    //Q6. Calculer le schtroumpf des deux vecteurs
    int s = 0;
	for(i=0; i<n; i++){
   		for(j=0; j<m; j++){
   			s = s + valeurs[i] * T[j];
		}
	}
	printf("Le schtroumpf des deux tableaux est : %d ",s);

    return -1; // n'est pas une erreur, on écrit return 0; par convention
} //8) erreur bonus