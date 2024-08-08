#include <bits/stdc++.h>
using namespace std;
int main(){
    int qtd;
    vector<int>x;
    vector<int>y;
    cin >> qtd;
    
    for(int i = 0; i < qtd; i++){
        int inputx, inputy;
        cin >> inputx >> inputy;
        x.push_back(inputx);
        y.push_back(inputy);
    }
    
    double min = INT_MAX, distancia;
    
    for(int i = 0; i < qtd; i++){
        int x1 = x[i];
        int y1 = y[i];
        for(int j = i+1; j < qtd; j++){
            int x2 = x[j];
            int y2 = y[j];
            distancia = sqrt((pow(x2 - x1,2) + pow(y2-y1,2)));
            if(distancia < min){
                min = distancia;
            }
        }
    }
    printf("%.3lf\n", min);
    return 0;
} 