#include <bits/stdc++.h>
using namespace std;
int main(){
    int sizefila;
    int contador = 1;
    while(cin >> sizefila){
        if(sizefila == 0){
            break;
        }
        int posicao = 1;
        int resposta;
        bool encontrou =  false;
        for(int i = 1; i <= sizefila; i++, posicao++){
            int ingresso_atual;
            cin >> ingresso_atual;
            if(ingresso_atual == posicao && encontrou == false){
                resposta = posicao;
            }
        }
        cout << "Teste " << contador << '\n' << resposta << '\n' << '\n';
        contador++;
    }
    return 0;
}
