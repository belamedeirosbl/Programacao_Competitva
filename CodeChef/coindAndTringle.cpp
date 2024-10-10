#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    for(int j = 0; j < testcase; j++){
        int moedas, altura = 0;
        cin >> moedas;
        for(int i = 1; moedas>=i; i++){
            moedas -= i;
            altura++;
        }
        cout << altura << endl;
    }
    return 0;
}
