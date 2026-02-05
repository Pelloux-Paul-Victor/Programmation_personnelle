#include <stdio.h>
#define BLUE(string) "\x1b[34m"string "\x1b[0m" 

int main(){
    int T[12]={18,19,20,21,22,19,20,85,21,20,19,18};
    int moyenne=0;
    int tmin=T[0];
    int tmax=T[1];
    for (int i=0; i<12; i++){moyenne+=T[i];}
    moyenne /= 12;
    for (int i=0; i<12; i++){
        if ((T[i]<-10.99) || (T[i]>61.33)){T[i]=moyenne;}
        if (T[i]<tmin){tmin=T[i];} if (T[i]>tmax){tmax=T[i];}
    }
    printf("Tableau = [");
    for (int i=0; i<12; i++){
        if (i==7){printf(BLUE(" %d"),T[i]);}
        else{printf(" %d", T[i]);} 
    } printf(" ]");
    printf("\nMin = %d et Max = %d", tmin, tmax);
    return 0;
}
