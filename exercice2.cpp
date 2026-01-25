#include <iostream>
using namespace std;

//calculer la moyenne de x entier saisi par l'utilisateur
//on utilisera des pointeurs
void calcul_moyenne(int *nb, int *moyenne){
    for (int i=0; i < *nb; i++){
        int nombre;
        cout << "saisir nombre :";
        cin >> nombre;
        *moyenne += nombre;
    }
    *moyenne /= *nb;

}

int main(){

    int x, moyenne = 0;
    cout << "saisir ses nombres pour en faire une moyenne";
    cin >> x;

    calcul_moyenne(&x, &moyenne);

    cout << "moyenne = " << moyenne;

    return 0;

}