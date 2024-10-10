#include <bits/stdc++.h> 
using namespace std;
int main(){
    int numerodealunos;
    cin >> numerodealunos;
    set<int>alunos;
    int cont = 0;
    for(int i = 0; i < numerodealunos; i++){
        int ra;
        cin >> ra;
        alunos.insert(ra);
    }
    int al = alunos.size(); 
    cout << al << endl;
    return 0;
}