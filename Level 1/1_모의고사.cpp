#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> ans1 {1, 2, 3, 4, 5};
    vector<int> ans2 {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> ans3 {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int cnt1=0, cnt2=0, cnt3=0;
    
    for(int i=0; i<answers.size(); i++){
        int n1 = i%5;
        int n2 = i%8;
        int n3 = i%10;
        
        if(ans1[n1] == answers[i]) cnt1++;
        if(ans2[n2] == answers[i]) cnt2++;
        if(ans3[n3] == answers[i]) cnt3++; 
    }
    
    int maxcount = max(cnt1, max(cnt2, cnt3));
    
    if(maxcount == cnt1) answer.push_back(1);
    if(maxcount == cnt2) answer.push_back(2);
    if(maxcount == cnt3) answer.push_back(3);
    
    return answer;
}
