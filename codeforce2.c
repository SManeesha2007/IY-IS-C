#include <stdio.h>
#include <string.h>

int main() {
    int t,i;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int freq[51];
        memset(freq, 0, sizeof(freq));

        for (i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (val <= 50) {
                freq[val]++;
            }
        }

        long long current_score = 0;

        int mex1 = 0;
        while (mex1 <= 50 && freq[mex1] > 0) {
            freq[mex1]--;
            mex1++;
        }
        current_score += mex1;

        int mex2 = 0;
        while (mex2 <= 50 && freq[mex2] > 0) {
            freq[mex2]--;
            mex2++;
        }
        current_score += mex2;

        for (i = 0; i <= 50; i++) {
            current_score += (long long)freq[i] * i;
        }

        printf("%lld\n", current_score);
    }

    return 0;
}
