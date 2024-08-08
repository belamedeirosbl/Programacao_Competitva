#include <iostream>
#include <cstring>
using namespace std;

char line1[110], line2[110];
int dp[110][110];

int main() {
    int kase = 0;
    while (cin.getline(&line1[1], 110) && line1[1] != '#') {
        cin.getline(&line2[1], 110);

        int len1 = strlen(&line1[1]);
        int len2 = strlen(&line2[1]);

        memset(dp, 0, sizeof(dp));

        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {
                if (line1[i+1] == line2[j+1]) {
                    dp[i+1][j+1] = dp[i][j] + 1;
                } else {
                    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);//decide a maior sequencia
                }
            }
        }

        cout << "Case #" << ++kase << ": you can visit at most " << dp[len1][len2] << " cities." << endl;
    }
    
    return 0;
}
