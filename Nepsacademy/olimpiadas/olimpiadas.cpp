#include <bits/stdc++.h>
using namespace std;

struct dados_paises{
    int pais;
    int ouro;
    int prata;
    int bronze;
};


int main(){
    int num_paises, modalidades;
    cin >> num_paises >> modalidades;
    
    vector<dados_paises>listaPaises(num_paises);
    for(int i = 1; i <= num_paises; i++){
        listaPaises[i].pais = i;
    }
    for(int i = 0; i < modalidades; i++){
        
        int ouro,prata,bronze;
        cin >> ouro >> prata >> bronze;
        listaPaises[ouro-1].ouro++;
        listaPaises[prata-1].prata++;
        listaPaises[bronze-1].bronze++;
    }
    
    for(int i = 0; i < num_paises; i++){
        int pos = -1;
        for(int j = 0; j < num_paises; j++){
            if(j == 0){
                pos = 0;
            }else{
                if(listaPaises[j].ouro > listaPaises[pos].ouro){
                    pos = j;     
                }else if(listaPaises[j].ouro == listaPaises[pos].ouro){
                    if(listaPaises[j].prata > listaPaises[pos].prata){
                        pos = j; 
                    }else if(listaPaises[j].prata == listaPaises[pos].prata){
                        if(listaPaises[j].bronze > listaPaises[pos].bronze){
                            pos = j; 
                        }else if(listaPaises[j].bronze == listaPaises[pos].bronze){
                            if(listaPaises[j].pais < listaPaises[pos].pais){
                                pos = j;
                            }
                        }
                    }
                }
            }
        }
        cout << (listaPaises[pos].pais+1) << " ";
        listaPaises[pos].ouro = -1;
    }

    return 0;
}