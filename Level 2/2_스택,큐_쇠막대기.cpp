#include <string>
#include <vector>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    vector<char> arr;    
    
    for(int i=0; i<arrangement.size(); i++){
        if(arrangement[i] == ')'){
            if(arrangement[i-1] == ')'){
                arr.pop_back();
                answer++;
            } else {
                arr.pop_back();
                answer += arr.size();   
            }
        } else {
            arr.push_back(arrangement[i]);
        }
    }
    
    return answer;
}
