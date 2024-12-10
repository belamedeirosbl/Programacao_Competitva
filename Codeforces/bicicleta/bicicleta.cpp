#include <bits/stdc++.h> 
using namespace std;
int main(){
    int num; cin >> num;
    vector<int>x;
    vector<int>y;
    int x1,x2,x3,y1,y2,y3;
    for(int i = 0; i < num; i++){
        int xin, yin;
        cin >> xin >> yin;
        x.push_back(xin);
        y.push_back(yin);
        if(i == 0){
            x1 = xin;
            y1 = yin;
        }else if(i == 1){
            x2 = xin;
            y2 = yin;
        }
        else if(i == 2){
            x3 = xin;
            y3 = yin;
        }
    }
    
    int cont = 0;
    int i = 3;
    for(int j = 0; j < num; j++){
        if((y1 == y2 && y3 > y2) && (x1 < x2 && x3 == x2)){
            cont++;//ok
        }else if((y1 < y2 && y2 == y3) && (x1 == x2 && x2 > x3)){
            cont++;
        }else if((y1 > y2 && y2 == y3) && (x1 == x2 && x2 < x3)){
            cont++; 
        }else if((y1 == y2 && y2 < y3) && (x1 < x2 && x2 == x3)){
            cont++;
        }else if((y1 == y2 && y2 > y3) && (x1 > x2 && x2 == x3)){
            cont ++;
        }else if((y1 > y2 && y2 == y3) && (x1 == x2 && x2 < x3)){
            cont++;
        }else if((y1 < y2 && y2 == y3) && (x1 == x2 && x2 > x3)){
            cont++;
        }else if((y1 == y2 && y2 > y3) && (x1 > x2 && x2 == x3)){
            cont++;
        }
        x1 = x2;
        y1 = y2;
        x2 = x3;
        y2 = y3;
        x3 = x[i];
        y3 = y[i];
        i++;
    }
    cout << cont;
    
    return 0;
}