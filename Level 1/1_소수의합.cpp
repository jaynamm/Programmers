#include <vector>

using namespace std;

long long solution(int N) {
    long long answer = 0;
    vector<long long> m;
    
    for(int i=0; i<=N; i++){
        m.push_back(i);
    }
    
    for(int i=2; i<=N; i++){
        if(m[i] == 0) continue;
        for(int j=i+i; j<=N; j+=i){
            m[j] = 0;
        }
    }
    
    for(int i=2; i<=N; i++){
        if(m[i] != 0) answer += m[i];
    }
    
    return answer;
}
