#include <bits/stdc++.h>
using namespace std;
int main(){
    int numeroDeAlunos, turma = 1;
    cin >> numeroDeAlunos;
    while(numeroDeAlunos > 0){
        vector<int>melhoresnotas;
        int maiornota = 0, codigo, mediaAtual;
        for(int i = 0; i < numeroDeAlunos; i++){
            cin >> codigo;
            cin >> mediaAtual;
            if(mediaAtual > maiornota){
                melhoresnotas.clear();
                melhoresnotas.push_back(codigo);
                maiornota =  mediaAtual;
            }else if(maiornota == mediaAtual){
                melhoresnotas.push_back(codigo);       
            }
        }
        
        cout << "Turma " <<  turma << endl;
        for(int i = 0; i < melhoresnotas.size(); i++){
            cout << melhoresnotas[i] << " ";
        }
        cout << endl << endl;
        turma++;
        cin >> numeroDeAlunos;
    }
    return 0;
}