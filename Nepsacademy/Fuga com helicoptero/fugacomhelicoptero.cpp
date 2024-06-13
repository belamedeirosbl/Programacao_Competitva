#include <iostream>
using namespace std;
int main(){
    int helicoptero, policia, fugitivo, direcao;
    cin >> helicoptero >> policia >> fugitivo >> direcao;
    int posic = fugitivo;
    if(direcao == 1){
        for(int i = 0; i < 16; i++){
            if(posic == 15){
                posic = -1;
            }
            posic++;
            if(posic == helicoptero){
                cout << 'S';
                break;
            }
            if(posic == policia){
                cout << 'N';
                break;
            }
            
        }
    }else{
        for(int i = 0; i < 16; i++){
            if(posic == 0){
                posic = 16;
            }
            posic--;
            if(posic == policia){
                cout << 'N';
                break;
            }
            if(posic == helicoptero){
                cout << 'S';
                break;
            }
        }
    }
    return 0;
}