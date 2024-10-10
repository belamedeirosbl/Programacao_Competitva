#include <bits/stdc++.h> 
using namespace std;
int main(){
    int tiposDePedras, quantidadePorBolso;
    cin >> tiposDePedras >> quantidadePorBolso;
    vector<int>pedras;
    for(int i = 0; i < tiposDePedras; i++){
        int valor;
        cin >> valor;
        pedras.push_back(valor);
    }
    /*quantas vezes, podendo pegar k*2 pedras por dia, ela consegue pegar tudo*/
    //opções: 
    /*quanto demora pra pegar um tipo, considerando um dia k*2*/

    double dias = 0;
    for(int i = 0; i < tiposDePedras; i++){
        while(pedras[i] > 0){
            if(pedras[i] >= 2*quantidadePorBolso){
                dias+=1;
                pedras[i] -= 2*quantidadePorBolso;
            }else{
                dias+=0.5;
                pedras[i] -= quantidadePorBolso;
            }
        }
    }
    dias = ceil(dias);
    cout << dias << endl;
    
    return 0;
}