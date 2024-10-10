#include <bits/stdc++.h>
using namespace std;
void correcao(int vetor[], int i){
    int contador = 1;
    if(i != 0){
        i--;//posicao antes do zero
        while((vetor[i] > contador || vetor[i] == -1) && i >= 0){
            if(vetor[i] == 0){
                return;
            }
            vetor[i] = contador;
            i--;
            if(contador < 9){
                contador++;
            }
        }
    }
}
int main(){
    int size;
    cin >> size;
    int vetor[size];
    int valor, cont = 0, primzero = 1;

    for(int i = 0; i < size; i++){
        cin >> valor;
        if(cont < 9){
            cont++;
        }
        if(valor == 0){
            primzero = 0;
            correcao(vetor, i);
            cont = 0;
            vetor[i] = 0;
        }
        else{
            if(primzero == 0){
                vetor[i] = cont;
            }else{
                vetor[i] = -1;
            }
        }
        
    }
    for(int i = 0; i < size; i++){
        cout << vetor[i] << " ";
    }cout << endl;
    return 0;
}
