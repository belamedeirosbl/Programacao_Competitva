#include <iostream>
using namespace std;
 
int buscabinaria(int list[], int num, int size){
    int inicio = 0, fim = size - 1;
    while(inicio <= fim){
        int meio = ((inicio + fim)/2);
        if(list[meio] == num){
            while(list[meio - 1] == num){
                meio = meio - 1;
            }
            return meio;
        }
        if(list[meio] < num){
            inicio = meio+1;
        }else{
            fim = meio-1;
        }
    }
    return -1;
}
 
int main()
{
    int size, testes;
    scanf("%d %d", &size, &testes);
    int list[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &list[i]);
    }
    for(int cases; cases < testes; cases++){
        int num;
        scanf("%d", &num);
        int resp = buscabinaria(list, num, size);
        printf("%d\n", resp);
    }
 
    return 0;
}