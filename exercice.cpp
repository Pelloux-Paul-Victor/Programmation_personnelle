#include <iostream>
#include <string>
using namespace std;

// fonction moyenne
int moyenne(int* compteur, int* nombre){
    int moyenne=0;
    int compteur2= *compteur;

    while (compteur2 !=0){
        compteur2--;
        cout << "saisir un nombre: ";
        cin >> *nombre;
        moyenne += *nombre;
    }
    return moyenne/ *compteur;
}

// fonction affiche
void afficher(int resultat){
    cout << "Resultat de la moyenne: ";
    cout << resultat;
}

int main(){
    int compte;
    int nb=0;
    cout << "saisir un nombre de chiffre a saisir: ";
    cin >> compte;

    afficher(moyenne(&compte,&nb));

    return 0;
}