#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int d, l ,velocidade1, velocidade2;
    double tempo;
    cin >> d>>l>>velocidade1>>velocidade2;
    double velocidadeTotal = velocidade1 + velocidade2;
    double distanciaTotal = l - d;
    tempo = distanciaTotal/velocidadeTotal;
    printf("%.20f\n",tempo);
    return 0;
}
