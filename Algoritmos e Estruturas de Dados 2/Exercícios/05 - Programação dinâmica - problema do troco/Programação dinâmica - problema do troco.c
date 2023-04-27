#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int troco(int T, int N, int moedas[]) {
    int i, j;
    int dp[T+1];

    for(i = 0; i <= T; i++) 
        dp[i] = 0;
    
    dp[0] = 1;

    for(i = 0; i < N; i++) 
        for(j = moedas[i]; j <= T; j++) 
            dp[j] += dp[j - moedas[i]];

    return dp[T];
}

int main() {
    int T, N, i;
    
    scanf("%d", &T);
    scanf("%d", &N);

    int moedas[N];
    
    for(i = 0; i < N; i++) 
        scanf("%d", &moedas[i]);

    printf("%d\n", troco(T, N, moedas));

    return 0;
}
