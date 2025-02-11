#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
    int t;cin >> t;
    while (t--){
        int s;cin >> s;
        vector<ll>v;
        while(s--){
            int x;cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        
        int mid = v.size()/2;
        int i,j;
        if(v.size()%2 == 0){
            i = mid-1;
            j = mid;
        }else{
            cout << v[mid] << " ";
            i = mid-1;
            j = mid+1;
        }
 
        while(i != 0 && j != v.size()-1){
            cout << v[i] << " " << v[j] << " ";
            i--;j++;
        }
        cout << v[i] << " " << v[j] << endl;
    }
    
    return 0;
}