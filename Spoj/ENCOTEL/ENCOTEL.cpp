#include <bits/stdc++.h> 
using namespace std;
int main(){
    string telefone;
    while(cin >> telefone){
        int pos = 0;
        while(pos < telefone.size()){
            if(telefone[pos] != '1' && telefone[pos] != '0' && telefone[pos] != '-'){
                if(telefone[pos] == 'A' || telefone[pos] == 'B' || telefone[pos] == 'C'){
                    telefone[pos] = '2';
                }
                else if(telefone[pos] == 'D' || telefone[pos] == 'E' || telefone[pos] == 'F'){
                    telefone[pos] = '3';
                }
                else if(telefone[pos] == 'G' || telefone[pos] == 'H' || telefone[pos] == 'I'){
                    telefone[pos] = '4';
                }
                else if(telefone[pos] == 'J' || telefone[pos] == 'K' || telefone[pos] == 'L'){
                    telefone[pos] = '5';
                }
                else if(telefone[pos] == 'M' || telefone[pos] == 'N' || telefone[pos] == 'O'){
                    telefone[pos] = '6';
                }
                else if(telefone[pos] == 'P' || telefone[pos] == 'Q' || telefone[pos] == 'R' || telefone[pos] == 'S'){
                    telefone[pos] = '7';
                }
                else if(telefone[pos] == 'T' || telefone[pos] == 'U' || telefone[pos] == 'V'){
                    telefone[pos] = '8';
                }
                else if(telefone[pos] == 'W' || telefone[pos] == 'X' || telefone[pos] == 'Y' || telefone[pos] == 'Z'){
                    telefone[pos] = '9';
                }
            }
            pos++;
        }
        cout << telefone << endl;    
    }
    return 0;
}