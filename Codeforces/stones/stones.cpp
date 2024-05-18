#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    char pedras[N];
    pedras[N] = '\0';
    for(int i = 0; i < N ; i++){
        cin >> pedras[i];
    }
    int cont = 0;
    
    for(int i = 0; i < N; i++){
        if(pedras[i] == pedras[i+1]){
            cont++;
        }
    }
    
    cout << cont << endl;
    return 0;
}
