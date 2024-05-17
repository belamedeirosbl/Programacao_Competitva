#include <iostream>
using namespace std;
int main(){
    int P,R;
    char resp;
    cin >> P >> R;
    if(P == 1){
        if(R == 0){
            resp = 'B';
            }else{
                resp = 'A';
            }
    }else{
        resp = 'C';
    }
    cout << resp << endl;
}
