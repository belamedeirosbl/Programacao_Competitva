#include <iostream>
#include <vector>
using namespace std;
int main()
{   
    int n, numero;
    char pe;
    cin >> n;
    vector<pair<int, char>> infos;
    for(int i = 0; i < n; i++){
        cin >> numero;
        cin >> pe;
        infos.push_back(make_pair(numero, pe));
    }
    vector<int>used(n,0);
    int pares = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n; j++){
            if(used[i] == 0 && used[j] == 0){
                if(infos[i].first == infos[j].first){
                    if(infos[i].second != infos[j].second){
                        pares++;   
                        used[i] = 1;
                        used[j] = 1;
                    }
                }
            }
        }
    }
    cout << pares;
    return 0;
}