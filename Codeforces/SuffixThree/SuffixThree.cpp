#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   int n;
   cin >> n;
   for(int i =0; i < n; i++){
        string frase;
        cin >> frase;
    if(frase[size-1] == 'o'){
            cout << "FILIPINO";
        }else if(frase[size-1] == 'u'){
            cout << "JAPANESE";
        }else if(frase[size-1] == 'a'){
            cout << "KOREAN";
        }
        cout << endl;
   }

    return 0;
}
