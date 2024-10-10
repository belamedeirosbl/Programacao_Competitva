#include <bits/stdc++.h>
using namespace std;


int isPrimo(int numero){
    if(numero<5 || numero%2==0 || numero%3==0){
        if(numero==2||numero==3){
            return 0;
        }else{
            return -1;
        }
    }
    int maxP = sqrt(numero)+2;
    for(int p=5; p<maxP; p+=6){
        if(numero%p==0||numero%(p+2)==0){
            return -1;
        }
    }
    return 0;
}

int main(){
    int numero;
    cin >> numero;
    int metade = numero/2;
    int a, b, divisao;
    for(int i = 0; i < numero; i++){
        if(isPrimo(metade+i) == 0){
            b = metade+i;
            for(int j = metade; j > 1; j--){
                if(isPrimo(metade-j) == 0){
                    a = metade-j;
                }
            }
        }
    }
    cout << a << " " << b;
    return 0;
}