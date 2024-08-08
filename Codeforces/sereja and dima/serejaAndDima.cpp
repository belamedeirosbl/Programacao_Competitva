#include <bits/stdc++.h>
using namespace std;
int main(){
    int numberofcards;
    cin >> numberofcards;
    vector<int>cards;
    for(int i = 0; i < numberofcards; i++){
        int card;
        cin >> card;
        cards.push_back(card);
    }
    int sumSereja = 0, sumDima = 0, end = numberofcards - 1, start = 0; 
    for(int i = 0; i < numberofcards; i++){
        int larger;
        if(cards[start] > cards[end]){
            larger = cards[start];
            start++;
        }else{
            larger = cards[end];
            end--;
        }
        if(i == 0 || i % 2 == 0){
            sumSereja += larger;
        }else{
            sumDima += larger;
        }
    }
    cout << sumSereja << " " << sumDima;
    return 0;
}