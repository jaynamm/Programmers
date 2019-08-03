#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int size = prices.size();
    
    for(int i=0; i<size; i++){
        int cnt = 0;
        for(int j=i+1; j<size; j++){
            if(prices[i] > prices[j]) {
                cnt++;
                break;
            }
            cnt++;
        }
        answer.push_back(cnt);
    }
    
    return answer;
}
