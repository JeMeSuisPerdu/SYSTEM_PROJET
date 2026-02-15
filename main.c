/* L'ALGO de wikipedia ne précisait pas si c'était N inclu ou exclu, du coup j'ai initialisé à N+1 
    (si N=11, on inclu le nombre premier 11 dans le calcul)

    PS : Aucune IA n'a été utilisée, juste Wikipedia + une vidéo d'Yvan Monka ;)
*/

#include <stdio.h>
#define N 20

int main(){
    int L[N];
    for (int i = 0; i < N; i++) {
        L[i] = 1;
    }

    L[1] = 0;

    for(int i=2; i<=N;i++){
        if(L[i] == 1){
            for(int j=i*i; j<=N; j+=i)
                L[j] = 0;
        }
    }
    
    for(int i=2; i<=N;i++){
        if(L[i]==1){
            printf("Nb premier : %d \n",i);
        }
    }
}
