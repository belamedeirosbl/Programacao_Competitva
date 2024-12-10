#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n == 0 || n == 1) {
        return true;
    } 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int numero;
    cin >> numero;
    bool resultado = isPrime(numero);
    if(resultado == true){
        cout << "sim" << endl;
    }else{
        cout << "nao" << endl;
    }
    return 0;
}
