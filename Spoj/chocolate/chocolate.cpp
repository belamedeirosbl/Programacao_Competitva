#include <bits/stdc++.h>
using namespace std;
int main(){
    int total, maximo; 
    cin >> total >> maximo;
    if(total%(maximo+1) == 0){
        cout << "Carlos";
    }else{
        cout << "Paula";
    }
    
    return 0;
} 