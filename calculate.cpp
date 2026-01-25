#include <iostream>
using namespace std;

int main(){

    int choix = 0;
    int nb_nombre = 0;
    int somme = 0;

    cout << "Choisir type calcule : \n";
    cout << "   1 - somme\n";
    cout << "   2 - soustraction\n";
    cout << "   3 - multiplication\n";
    cout << "Votre choix : ";
    cin >> choix;

    cout << "Saisir un nombre de nombre a saisir : ";
    cin >> nb_nombre;

    if (choix == 1){
        
        while (nb_nombre != 0){
            cout << "saisir un nombre : ";
            cin >> somme;
            somme += somme;
            nb_nombre--;
        }

    } else if(choix == 2){

        while (nb_nombre != 0){
            cout << "saisir un nombre : ";
            cin >> somme;
            somme -= somme;
            nb_nombre--;
        }

    } else if (choix == 3){

        while (nb_nombre != 0){
            cout << "saisir un nombre : ";
            cin >> somme;
            somme *= somme;
            nb_nombre--;
        }

    }else{
        cout << "erreure de saisi...";
    }

    cout << somme;
    return somme;
}