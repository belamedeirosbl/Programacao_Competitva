#include <iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int numerosDeBebidas = 0;
    int FatiaDeLimao = c*d;
    int totalMl = k*l;
    

    while(totalMl >= nl*n && p >= np*n && FatiaDeLimao >= n){
        totalMl -= nl*n;
        p -= np*n;
        FatiaDeLimao -= n;
        numerosDeBebidas+=1;
    }
    cout << numerosDeBebidas << endl;
    return 0;
}
