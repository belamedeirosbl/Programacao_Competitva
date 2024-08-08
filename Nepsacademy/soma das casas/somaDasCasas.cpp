#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int num, sum;
    long long int vetor[100000]={0};
	cin >> num;
	for(int i = 0 ; i < num; i++){
		cin >> vetor[i];
		
	}	
	int a = 0, b = num-1;
	cin >> sum;
	
	while(true){
		if(vetor[a]+vetor[b] == sum){
			break;
		}
		else if(vetor[a]+vetor[b]>sum)
			b--;
		else
			a++;
	}
	cout << vetor[a] << " " << vetor[b];
	return 0;
}
