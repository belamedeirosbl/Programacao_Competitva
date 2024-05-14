#include <iostream>
using namespace std;
int main(){
    int pressaoAtual;
    int pressaoDesejada;
    cin >> pressaoDesejada;
    cin >> pressaoAtual;
    int diferenca = pressaoDesejada - pressaoAtual;
    cout << diferenca << endl;
    return 0;
}
