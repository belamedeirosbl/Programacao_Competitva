//tem que finalizar

#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long int t,n;
    vector<long long int>tempo_livros;
    cin >> t >> n;
    for(int i = 0; i < t; i++){
        long long int livro;
        cin >> livro;
        tempo_livros.push_back(livro);
    }
    
    long long int cont = 0, ans = 0, sum = 0;
    for(int i = 0; i < t; i++){
        sum = 0;
        ans = 0;
        if(t-i >= cont){
            for(int j = i; j < t; j++){
                if(sum + tempo_livros[j] <= n){
                    sum += tempo_livros[j];
                    ans++;
                }else{
                    break;
                }
            }
            if(ans > cont){
                cont = ans;
            }
        }else{
            break;
        }
    }
    cout << cont << endl;
    
    return 0;
}