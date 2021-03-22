#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    // 1 단계 : 대문자 -> 소문자 변환
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    cout << "1 : " << new_id << "\n";
    
    // 2 단계 : a-z,0-9,-,_,. 를 제외한 문자 제거
    for(int i=0; i<new_id.size(); i++) {
        if(islower(new_id[i]) || isdigit(new_id[i]) || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.') {
            answer += new_id[i];
        }
    }
    cout << "2 : " << answer << "\n";
    
    // 3 단계 : 연속된 마침표(.) 제거
    for(int i=1; i<answer.size(); ) {
        if(answer[i] == '.' && answer[i-1] == '.') {
            answer.erase(answer.begin() + i);
            continue;
        } else {
            i++;
        }
    }
    cout << "3 : " << answer << "\n";
    
    // 4 단계 : 처음과 끝에 위치한 마침표(.) 제거
    if(answer.front() == '.') answer.erase(answer.begin());
    if(answer.back() == '.') answer.erase(answer.end()-1);
    cout << "4 : " << answer << "\n";
    
    // 5 단계 : 빈 문자열이면 a 를 대입
    if(answer.size() == 0) answer.push_back('a');
    cout << "5 : " << answer << "\n";
    
    // 6 단계 : 글자수가 16 이상이면 처음~15자를 제외한 나머지 문자 제거
    if(answer.size() > 15) {
        answer = answer.substr(0,15);
    }
    // 제거 후 마지막 글자가 마침표(.)가 되면 제거
    if(answer.back() == '.') answer.erase(answer.end()-1);
    cout << "6 : " << answer << "\n";
    
    // 7 단계 : 길이가 2자 이하면 마지막 문자를 3자리가 될 때까지 복사
    if(answer.size() < 3) {
        while(answer.size() != 3) {
            answer += answer.back();
        }
    }
    cout << "7 : " << answer << "\n";
    
    return answer;
}
