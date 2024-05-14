#include <iostream>
using namespace std;
int main(){

    int resp = 1;
    int maior = -1;
    while(resp != 0){
        cin >> resp;
        if(resp > maior){
            maior = resp;
        }
        if(resp == 0){
            break;
        }
    }
    cout << maior << endl;
    return 0;
}
