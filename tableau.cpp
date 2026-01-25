#include <stdio.h>

const int ENTIER=10;

int get_minimum(int tableau[ENTIER]){
    int minimum=tableau[0];
        for (int i=0; i<ENTIER; i++) {
            if (tableau[i]<minimum){
                minimum = tableau[i];
            }
    }
    return minimum;
}

int main() {
    int tableau[ENTIER];
    int entier;
    bool existe;

    //Saisie des valeurs par l'utilisateur
    for (int i=0; i<ENTIER; i++) {
        printf("Saisir un entier pour l'indice %d: ", i);
        scanf("%d", &entier);
        tableau[i] = entier;
    }

    //Affichage des valeurs que contient le tableau
    printf("Tableau=[");
    for (int i=0; i<ENTIER; i++) {
        if (i>0){
            printf(",");
        }
        printf("%d", tableau[i]);
    }
    printf("]");

    printf("\n\nRecherche d'un entier dans le tableau...\n");
    printf("Saisir l'entier qu'il faut chercher: ");
    scanf("%d", &entier);
    for (int i=0; i<ENTIER; i++){
        if (entier==tableau[i]){
            printf("L'entier existe pour l'incide %d du tableau\n", i);
            existe=true;
            break;
        } else{
            existe=false;
        }
    }
    if (existe!=true){
        printf("L'entier n'existe pas\n");
    }

    printf("La valeur minimum du tableau est %d", get_minimum(tableau));

    return 0;
}