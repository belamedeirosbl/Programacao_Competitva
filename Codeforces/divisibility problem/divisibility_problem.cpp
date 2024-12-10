#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    for(int c = 0; c < testcases; c++){
        int a, b;
        cin >> a >> b;
        int i = 0;
        if(a%b == 0){
            cout << '0' << endl;
        }else{
            cout << b-(a%b) << endl;
        }
    }
    return 0;
}
