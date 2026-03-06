#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n,i;
        scanf("%d", &n);

        int freq[21] = {0};  // since 1 = ai = n and n = 20
        int x;

        for (i = 0; i < n; i++) {
            scanf("%d", &x);
            freq[x]++;
        }

        int score = 0;

        for (i = 1; i <= n; i++) {
            score += freq[i] / 2;   // each pair contributes 1
        }

        printf("%d\n", score);
    }

    return 0;
}
