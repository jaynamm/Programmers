#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    vector<string> v;
    map<string, int> m;
    map<string, int>::iterator iter;
    for(int i=0; i<clothes.size(); i++) v.push_back(clothes[i][1]);
    
    for(int i=0; i<v.size(); i++)  m[v[i]]++;
    
    for(iter = m.begin(); iter != m.end(); ++iter){
        cout << (*iter).first << " : " << (*iter).second << "\n";
        cout << ((*iter).second + 1) << "\n";
        answer *= ((*iter).second + 1);
    }
    answer--;
    
    return answer;
}
