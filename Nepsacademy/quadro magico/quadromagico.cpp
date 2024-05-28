#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>matriz[i][j];
            if(i == 0){
                sum += matriz[i][j];
            }
        }
    }
    int resp = 0, sumd1 = 0, sumd2 = 0;
    int dl2 = 0, dc2 = n-1; 
    for(int i = 0; i < n; i++){
        int suml = 0;
        int sumc = 0;
        for(int j = 0; j < n; j++){
            suml += matriz[i][j];
            sumc += matriz[j][i];
            if(i == j){
                sumd1 += matriz[i][j];
            }
            if(i == dl2 && j == dc2){
                sumd2 += matriz[i][j];
                dc2 --;
                dl2 ++;
            }
            
        }
        if (suml!=sum || sumc!=sum){//verificando linha ok
            resp = 1;
            break;
        }      
    }
    if(sumd1 != sumd2 || sumd1 != sum){
        resp = 1;
    }
    if(resp==1){
        cout << "-1";
    }else{
        cout << sum;
    }
}
