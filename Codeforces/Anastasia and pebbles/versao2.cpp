#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> pedras(n);
    for (int i = 0; i < n; i++) {
        cin >> pedras[i];
    }

    int dias = 0;

    for (int i = 0; i < n; i++) {
        int pebbles = pedras[i];
        int viagensPorDia = 2 * k;
        while (pebbles > 0) {
            if (pebbles >= viagensPorDia) {
                pebbles -= viagensPorDia;
            } else {
                pebbles = 0;
            }
            dias++;
        }
    }

    cout << dias << endl;

    return 0;
}
