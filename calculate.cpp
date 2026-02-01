#include <iostream>
using namespace std;

int main(){

    int choix = 0;
    int nb_nombre = 0;
    int somme = 0;
    int total = 0;
    int total2 = 0;

    cout << "Choisir type calcule : \n";
    cout << "   1 - somme\n";
    cout << "   2 - soustraction\n";
    cout << "   3 - multiplication\n";
    cout << "Votre choix : ";
    cin >> choix;
    if (choix == 3){
        cout << "Calcul restreint pour 2 chiffres !\n";
        nb_nombre = 2;
    } else {
        cout << "Combient de nombre a saisir ? ";
        cin >> nb_nombre;
    }

    if (choix != 0){
        while (nb_nombre != 0){
            cout << "Saisir un chiffre : ";
            cin >> total;
            if (choix == 1){
                somme += total;
            } else if (choix == 2){
                somme -= total;
            } else if (choix == 3){
                cout << "Saisir un chiffre : ";
                cin >> total2;
                somme = total*total2;
                break;
            }
            nb_nombre--;
        }
    }else{
        cout << "Erreur de saisie...";
    }
    cout << somme;
    return somme;

}
