#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, curvaPerigosa = 0;
    cin >> n;
    int x1,x2,x3,y1,y2,y3;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        if(i < 2){
            if(i == 0){
                x1 = x;
                y1 = y;
            }else if(i == 1){
                x2 = x;
                y2 = y;
            }
        }else{
            x3 = x;
            y3 = y;
            if(x1 < x2 && x2 == x3 && y1 == y2 && y2 < y3){
                curvaPerigosa++;
            }else if(x1 == x2 && x2 < x3 && y1 > y2 && y2 == y3){
                curvaPerigosa++;
            }else if(x1 > x2 && x2 == x3 && y1 == y2 && y2 < y3){
                curvaPerigosa++;
            }else if(x1 > x2 && x2 == x3 && y1 >){
                
            }
            x1 = x2;
            x2 = x3;
            y1 = y2;
            y2 = y3;
        }

    }
    cout << curvaPerigosa;
    return 0;
}