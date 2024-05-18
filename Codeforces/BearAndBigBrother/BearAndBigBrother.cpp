#include <iostream>
using namespace std;

int main(){
    int limakGordoDesgraçado, bob;
    cin >> limakGordoDesgraçado >> bob;
    int cont = 0;
    while(limakGordoDesgraçado <= bob){
        limakGordoDesgraçado = limakGordoDesgraçado * 3;
        bob = bob * 2;
        cont++;
    }
    cout << cont << endl;
    return 0;
}
