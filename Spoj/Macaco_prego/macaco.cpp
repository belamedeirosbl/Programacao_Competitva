#include <bits/stdc++.h> 
using namespace std;
int main(){
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase; i++){
        int size;
        cin >> size;
        vector<int>mamaco_prego;
        int cont = 0, sum = 0;
        for(int i = 0; i < size; i++){
            int valor;
            cin >> valor;
            if(i == 0){
                mamaco_prego.push_back(valor);
                cont++;
            }else{
                if(valor >= 0){//positivo
                    if(mamaco_prego[cont-1] >= 0){
                        mamaco_prego[cont-1]+=valor;
                    }else{
                        mamaco_prego.push_back(valor);
                        cont++;
                    }
                    
                }
                else{//negativo
                    if(mamaco_prego[cont-1] < 0){
                        mamaco_prego[cont-1]+=valor;
                    }else{
                        mamaco_prego.push_back(valor);
                        cont++;
                    }
                }
            }
        }
        int sum_atual = 0;
        for(int i = 0; i < cont; i++){
            if(mamaco_prego[i] > 0){
                sum_atual+=mamaco_prego[i];
            }else{
                if(i+1 < cont){
                    if(mamaco_prego[i] + mamaco_prego[i+1] > sum_atual){
                        sum_atual += mamaco_prego[i];
                    }
                }
            }
            if(sum_atual > sum){
                sum = sum_atual;
            }
        }
            cout << sum_atual << endl;
        
    }
    return 0;
}