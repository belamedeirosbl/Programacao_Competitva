#include <bits/stdc++.h>
using namespace std;

int main(){
    int numAeroportos, numVoos, teste = 1;
    while(true){
        cin >> numAeroportos >> numVoos;
        if(numAeroportos == 0 && numVoos == 0){
            break;
        }
        vector<int>aeroportos(numAeroportos, 0);
        for(int i = 0; i < numVoos; i++){
            int chegada, partida;
            cin >> chegada >> partida;
            aeroportos[chegada-1]++;
            aeroportos[partida-1]++;
        }
        
        vector<int>ordenado(aeroportos);
        
        sort(ordenado.begin(), ordenado.end());
        
        int mais_congestionado = ordenado[numAeroportos-1];
        
        vector<int>maior;
        
        for(int j = 0; j < numAeroportos; j++){
            if(aeroportos[j] == mais_congestionado){
                maior.push_back(j+1);
            }
        }
        cout << "Teste " << teste << endl;

        for(int i = 0;i < maior.size(); i++){
            cout << maior[i];
            if(i != (maior.size()-1)){
                cout << ' ';
            }
        }
        cout << endl;
        teste++;
    }
    
    return 0;
}