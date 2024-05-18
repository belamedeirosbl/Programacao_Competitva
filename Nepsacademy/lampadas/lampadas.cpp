#include <iostream>
using namespace std;
int main(){
    int numero;
    int A = 0, B = 0;
    int interruptor;
    cin >> numero;
    for(int i = 0; i < numero; i++){
        cin >> interruptor;
        if(interruptor == 1){
            if(A == 0){
                A = 1;
            }else{
                A = 0;
            }
        }else{
            if(A == 0){
                A = 1;
            }else{
                A = 0;
            }
            if(B == 0){
                B = 1;
            }else{
                B = 0;
            }
        }
    }
    cout << A << endl << B << endl;
    return 0;
}
