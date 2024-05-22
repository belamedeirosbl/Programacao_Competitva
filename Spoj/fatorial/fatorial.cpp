
#include <iostream>
using namespace std;
int main(){
    int fat, result;
    cin >> fat;
    if(fat == 0){
        result = 1;
    }else{
        for(int i = 1; i <= fat; i++){
            if(i == 1){
                result = 1;
            }else{
                result *= i;
            }
        }
    }
    cout << result << endl;
    return 0;
}
