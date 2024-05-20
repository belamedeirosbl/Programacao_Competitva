#include <iostream>
using namespace std;

int main() {
    int testecases;
    cin >> testecases;

    for (int i = 0; i < testecases; i++) {
        int cont0 = 0, contTotal1 = 0;
        int sizeN, sizeM;
        cin >> sizeN >> sizeM;


        for (int j = 0; j < sizeN; j++) {
            string linha;
            cin >> linha; 
            for (int c = 0; c < sizeM; c++) {
                if (j == 0 || j == sizeN - 1 || c == 0 || c == sizeM - 1) {
                    if (linha[c] == '0') {
                        cont0++;
                    }
                }else{
                    if (linha[c] == '1') {
                        contTotal1++;
                    }
                }
            }
        }
        int substituir;
        if (cont0 == 0) {
            substituir = 0;
        } else {
            if (cont0 > contTotal1) {
                substituir = -1;
            } else {
                substituir = cont0;
            }
        }
        
        cout << substituir << endl;
    }

    return 0;
}
