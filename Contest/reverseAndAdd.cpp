#include <bits/stdc++.h> 
using namespace std;

string inverterNumero(long long numero){
    string invertido = to_string(numero);
    reverse(invertido.begin(), invertido.end());
    return invertido;
}

bool isPalindrome(long long numero){
    string numstr = to_string(numero);
    int size = numstr.size();
    for(int i = 0; i < size / 2; i++){
        if(numstr[i] != numstr[size - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        long long n;
        cin >> n;   
        int contador = 0;
        
        while(!isPalindrome(n) || contador == 0){
            contador++;
            string nInvertidoStr = inverterNumero(n);
            long long nInvertidoInt = stoll(nInvertidoStr);
            n = nInvertidoInt + n;
        }
        
        cout << contador << " " << n << endl; 
    }
    return 0;
}
