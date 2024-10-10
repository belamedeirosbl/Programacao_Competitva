#include <iostream>
using namespace std;
int main(){
    long long int comprimento, tapetes;
    cin >> comprimento >> tapetes;
    long long int sum = 0;
    
    sum += tapetes-1;
    long long int resto = comprimento - sum;
    sum += resto*resto;

    cout << sum;
    return 0;
}