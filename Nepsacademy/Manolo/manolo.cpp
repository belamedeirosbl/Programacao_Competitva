
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int matriz[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }
    int q, li,ci,lf,cf, sum = 0;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> li >> ci >> lf >> cf;
        li -=1;ci -=1;lf -=1;cf -=1;
        for(int linha = li; linha <= lf; linha++){
            for(int coluna = ci; coluna <= cf; coluna++){
                sum += matriz[linha][coluna];
                matriz[linha][coluna] = 0;
            }
        }
    }
    cout << sum << endl;

    return 0;
}
