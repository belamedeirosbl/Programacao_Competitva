#include <iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int matrizSomaLinha[size] = {0}; 
    int matrizSomaColuna[size] = {0}; 
    int matriz[size][size];
    int valor;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin >> valor;
            matriz[i][j] = valor;
            matrizSomaLinha[i]+=valor;
            matrizSomaColuna[j]+=valor;
        }
    }
    int maiorsum = 0; int sum = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            sum = matrizSomaLinha[i] + matrizSomaColuna[j] - 2*matriz[i][j];
            if(sum > maiorsum){
                maiorsum = sum;
            }    
        }
    }
    cout << maiorsum;
    return 0;
}
