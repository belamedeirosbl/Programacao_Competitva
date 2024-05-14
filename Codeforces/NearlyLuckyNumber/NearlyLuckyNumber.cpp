#include <iostream>
#include <string>
using namespace std;

int main(){
        string numero;
        cin >> numero;
        int cont = 0;
        int tamanho = numero.size();
        for(int i = 0; i < tamanho; i++){
            if(numero[i] == '4' || numero[i] == '7'){
                cont++;         
            }
        }
        if(cont == 4 || cont == 7){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    return 0;
}
