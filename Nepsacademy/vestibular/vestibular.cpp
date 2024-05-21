
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string gabarito;
    string respostas;
    cin >> gabarito;
    cin >>respostas;
    int cont = 0;
    for(int i = 0; i < N; i ++){
        if(gabarito[i] == respostas[i]){
            cont++;
        }
    }
    cout << cont << endl;

    return 0;
}
