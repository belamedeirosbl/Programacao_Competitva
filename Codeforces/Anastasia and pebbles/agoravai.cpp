#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long int tiposDePedras, quantidadePorBolso;
    cin >> tiposDePedras >> quantidadePorBolso;
    vector<long long int>pedras;
    for(int i = 0; i < tiposDePedras; i++){
        long long int valor;
        cin >> valor;
        pedras.push_back(valor);
    }

    long long int dias = 0;
    for(int i = 0; i < tiposDePedras; i++){
        long long int pedra = pedras[i];
        if(pedra % quantidadePorBolso == 0){
            dias += pedra/quantidadePorBolso;
        }else{
            dias += (pedra/quantidadePorBolso) + 1;
        }
    }
    if((dias % 2) != 0) {
        dias++;
    }dias = dias/2;

    cout << dias << endl;
    
    return 0;
}