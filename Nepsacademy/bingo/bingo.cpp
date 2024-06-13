#include <iostream>
#include <vector>
#include <set> 
#include <cmath>

using namespace std;
int main(){
    int N,B,resp;
    while(cin >> N >> B && N != 0 && B != 0){
        vector<int>globo;
        set<int>subconj;
        for(int i = 0; i < B; i++){
            int n;
            cin >> n;
            globo.push_back(n);  
            subconj.insert(n);      
        }  

        for(int j = 0; j < B-1; j++){
            for(int c = 0; c < B - 1; c++){
                int subt = abs(globo[j] - globo[c]);
                subconj.insert(subt);
            }
        }
        
        if(subconj.size() == N){
            cout << 'Y' << endl;
        }else{
            cout << 'N' << endl;
        }
    }
    return 0;
}