#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int r, n;
    int cont = 0;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++){
        r = n % i;
        if (r == 0){
           cont++;      
        }    
    }
    if (n < 4 || cont < 2){
       cout <<"N";
    }
    else if (cont >= 2){
        cout<<"S";         
    }

    return  0;
}