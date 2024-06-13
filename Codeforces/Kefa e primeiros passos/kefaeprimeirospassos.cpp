#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int din, dinAnterior, max = -1, cont = 0;
    for(int i = 0; i < n; i++){
        cin >> din;
        if(din >= dinAnterior){
            cont++;
            if(cont >= max){
                max = cont;
            }
        }else{
            cont = 1;
        }
        dinAnterior = din;
    }
    cout << max;
    return 0;
}