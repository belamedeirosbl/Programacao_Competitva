#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>lista;
    int tamanho, consultas;
    cin >> tamanho;
    for(int i = 0; i < tamanho; i ++){
        int n;
        cin >> n;
        lista.push_back(n);
    }
    cin >> consultas;
    for(int i = 0; i < consultas; i++){
        int soma = 0, inicio, fim;
        cin >> inicio >> fim;
        for(int c = inicio; c <= fim; c++){
            soma+=lista[c];
        }
        cout << soma << endl;
    }
    return 0;
}