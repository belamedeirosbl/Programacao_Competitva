#include <iostream>
using namespace std;
int main(){
    int pessoas,instanteAtual, instanteAnterior, tempo = 0;
    cin >> pessoas;
    for(int i = 0; i < pessoas; i++){
        cin >> instanteAtual;
        if(i != 0){
            if(instanteAtual - instanteAnterior <= 10){
                tempo += instanteAtual - instanteAnterior;
            }else{
                tempo += 10;
            }
        }
        if(i == pessoas - 1){
            tempo += 10;
        }
        instanteAnterior = instanteAtual;
    }
    cout << tempo;
    return 0;
}