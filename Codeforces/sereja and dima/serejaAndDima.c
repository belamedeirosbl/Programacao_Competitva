#include <stdio.h>
int main(){
    int numero;
    scanf("%d", &numero);
    int cartas[numero];
    for(int i = 0; i < numero; i ++)scanf("%d", &cartas[i]);
    int esquerda = 0;
    int direita = numero - 1;
    int sumS;
    int sumD;
    if(numero == 1)sumS = cartas[0]; 
    for(int i = 2; direita != esquerda; i++){//se for par é a vez de s, se nao de d
        if (i % 2 == 0){
            if(cartas[esquerda] > cartas[direita]){
                sumS = sumS + cartas[esquerda];
                esquerda = esquerda + 1;
            }
            else{
                sumS = sumS + cartas[direita];
                direita = direita - 1;
            }
        }
        else{
            if(cartas[esquerda] > cartas[direita]){
                sumD = sumD + cartas[esquerda];
                esquerda = esquerda + 1;
            }
            else{
                sumD = sumD + cartas[direita];
                direita = direita - 1;
            }
        }
        if (numero % 2 != 2 && esquerda == direita){
            i ++;
            if(i % 2 == 0)sumS = sumS + cartas[esquerda];
            else sumD = sumD + cartas[esquerda];
        }
    }
    printf("%d %d\n", sumS, sumD);
 
}