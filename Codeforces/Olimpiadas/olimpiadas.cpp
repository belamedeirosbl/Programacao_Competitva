#include <bits/stdc++.h>
using namespace std;

struct dados_paises
{
    int pais;
    int ouro;
    int prata;
    int bronze;
};


int main(){
    int num_paises, modalidades;
    cin >> num_paises >> modalidades;
    vector<dados_paises>listaPaises(num_paises);
    for(int i = 0; i < num_paises; i++){
        int medalhaOuro, medalhaPrata, medalhaBronze;
        cin >> medalhaOuro >> medalhaPrata >> medalhaBronze;
        listaPaises[i].pais = i;
        listaPaises[i].ouro = medalhaOuro;
        listaPaises[i].prata = medalhaPrata;
        listaPaises[i].bronze = medalhaBronze;
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
                            if(listaPaises[j].pais > listaPaises[pos].pais){
                                pos = j;
                            }
                        }
                    }
                }
            }
        }
        cout << (listaPaises[pos].pais+1) << " ";
    }

    return 0;
}