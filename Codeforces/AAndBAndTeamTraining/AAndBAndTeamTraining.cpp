#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;

    int cont = 0, maior, menor;
    if(m > n){
        maior = m;
        menor = n;
    }else{
        maior = n;
        menor = m;
    }
    while(maior >= 2 && menor >= 1){
        if(n == maior){
            n-=2;
            m-=1;
        }else{
            n-=1;
            m-=2;
        }
        cont+=1;
        if(m > n){
        maior = m;
        menor = n;
        }else{
            maior = n;
            menor = m;
        }
    }
    cout << cont << endl;
    return 0;
}
