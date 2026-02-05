#include <iostream>
using namespace std;
int fonction(int nb){
    if (nb==0){
        return 1;
    } else{
        return nb*fonction(nb-1);
    }
}
int main(){
    cout << fonction(4);
    return 0;
}
