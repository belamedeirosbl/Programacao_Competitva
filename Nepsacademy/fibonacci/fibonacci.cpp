#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int atual = 1, anterior = 0, fibonacci;
    if(N == 2){
        fibonacci = 1;
    }else{
        for(int i = 0; i < N; i++){
            fibonacci = atual + anterior;
            anterior = atual;
            atual = fibonacci;
        }
    }
    cout << fibonacci << endl;
    return 0;
}
