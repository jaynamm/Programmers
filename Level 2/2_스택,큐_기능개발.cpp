#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> d;

    for(int i=0; i<progresses.size(); i++){
        int day = 0;
        day = (99-progresses[i])/speeds[i]+1;
        d.push_back(day);
    }
    
    int max = d[0];
    int cnt = 1;
    
    for(int i=1; i<d.size(); i++){
        if(max >= d[i]) {
            cnt ++;
        } else {
            answer.push_back(cnt);
            cnt = 1;
            max = d[i];
        }
    }
    answer.push_back(cnt);
    
    return answer;
}
