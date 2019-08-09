#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cnt = 0;
    
    for(int i=0; i<s.size(); i++){
        if(s[0] == ')'){
            answer = false;
            return answer;
        } 
        if(s[i] == '('){
            cnt++;
        } else if(s[i] == ')'){
            if(cnt > 0) cnt--;
        }

        //cout << "cnt : " << cnt << "\n";
    }
    
    if(cnt != 0) answer = false;
    
    return answer;
}
