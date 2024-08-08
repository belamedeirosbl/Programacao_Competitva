#include <bits/stdc++.h> 
using namespace std;
int main(){
    int tiposPedra, espaçoBolso;
    cin >> tiposPedra >> espaçoBolso;
    vector<int>quantidades;
    for(int i = 0; i < tiposPedra; i++){
        int quantidade;
        cin >> quantidade;
        quantidades.push_back(quantidade);
    }
    int pos = 0, dias = 1;
    while(1){
        if(quantidades[pos] <= 0){
            pos++;
            if(quantidades[pos+1] <= 0){
                pos++;
            }
        }
        if(pos == quantidades.size()){
            break;
        }
        if(quantidades[pos] <= espaçoBolso){
            quantidades[pos] -= espaçoBolso;
            if(pos + 1 < quantidades.size()){
                quantidades[pos+1] -= espaçoBolso;
            }
        }else{
            quantidades[pos] -= 2*espaçoBolso;
        }
        dias++;
    }
    cout << dias;
    return 0;
}