#include <bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases; 
    while(cases--){
        string palavraProibida;
        string bracelete;
        cin >> palavraProibida >> bracelete;
        bracelete += bracelete;
        bool validate = false;
        int j = 0;
        for(int i = 0; i < bracelete.size(); i++){
            if(palavraProibida[j] == bracelete[i]){
                j++;
                if(j == palavraProibida.size()){
                    validate = true;
                    break;
                }
            }else{
                j = 0;
            }

        }
        j = 0;
        for(int i = bracelete.size(); i >= 0; i--){
            if(palavraProibida[j] == bracelete[i]){
                j++;
                if(j == palavraProibida.size()){
                    validate = true;
                    break;
                }
            }else{
                j = 0;
            }
        }

        if(validate){
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }
            
    }
    return 0;
}