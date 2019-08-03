#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    int dp[100001];
    
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i=2; i<=n; i++){
        dp[i] = (dp[i-1] + dp[i-2])%1234567;
    }
    
    answer = dp[n] % 1234567;
    
    return answer;
}
