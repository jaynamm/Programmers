#include <string>
#include <vector>

using namespace std;

long long solution(int N) {
    long long answer = 0;
    
    /*
        1 : 1 1
        2 : 1 2
        3 : 2 3
        4 : 3 5
        5 : 5 8
    */
    long long dp[81];
    dp[0] = 0;
    dp[1] = 2;
    dp[2] = 3;
    
    for(int i=3; i<=N; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    answer = dp[N]*2;
    
    return answer;
}
