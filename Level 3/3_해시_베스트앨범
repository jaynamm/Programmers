#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> total;
    map<string, int>::iterator iter;
    
    
    for(int i=0; i<genres.size(); i++) total[genres[i]] += plays[i];
    cout << "정렬 전\n";
    for(iter = total.begin(); iter!= total.end(); iter++)cout << (*iter).first << " : " << (*iter).second << "\n";
    
    vector<pair<string, int> > gen(total.begin(), total.end());
    
    sort(gen.begin(), gen.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
             return a.second > b.second;
    });
    cout << "정렬 후\n";
    for(int i=0; i<gen.size(); i++) cout << gen[i].first << " : " << gen[i].second << "\n";
    cout << "\n";
    for(int i=0; i<gen.size(); i++){
        cout << gen[i].first << "\n";
        vector<pair<int, int> > p;
        for(int j=0; j<plays.size(); j++){
            if(gen[i].first == genres[j]) {
                cout << "gen : " << gen[i].first << " / genres : " << genres[j] << "\n";
                p.push_back(make_pair(j, plays[j]));
            }
        }
        sort(p.begin(), p.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            if(a.second == b.second) a.first < b.first;
            return a.second > b.second;
        });
        for(int k=0; k<p.size(); k++) {
            if(k <= 1) answer.push_back(p[k].first);
            cout << p[k].first << " : " << p[k].second << "\n";
        }
        cout << "\n";
        p.clear();
    }
    
    return answer;
}
