#include <bits/stdc++.h>
using namespace std;

int main(){
    int tamanho, vezes;
    cin >> tamanho >> vezes;
    vector<int>permut;
    for(int i = 0; i < tamanho; i++){
        int valor;
        scanf("%d", &valor);
        permut.push_back(valor);
    }
    for(int i = 0; i < vezes; i++){
        int cont = 0;
        int inicio, fim, posicao;
        cin >> inicio >> fim >> posicao;
        inicio--; fim--; posicao--;
        for(int j = inicio; j <= fim; j++){
            if(permut[j] < permut[posicao]){
                cont++;
            }
        }
        if(cont + inicio == posicao){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}