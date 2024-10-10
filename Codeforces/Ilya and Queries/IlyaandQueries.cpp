#include <bits/stdc++.h>
using namespace std;
int contar[100001];

void PORRA(string s){
    for(int j = 1; j < s.size(); j++){
        if(s[j] == s[j-1]){
            contar[j] = contar[j-1]+1;
        }else{
            contar[j] = contar[j-1];
        }
    }
}    

int main(){
    memset(contar, 0, sizeof(contar));
    string s;
    int consulta;
    cin >> s;
    cin >> consulta;
    PORRA(s);
    for(int i = 0; i < consulta; i++){
        int li,ri;
        cin >> li >> ri;
        cout << (contar[ri - 1] - contar[li-1]) << endl;
    }
    return 0;
}