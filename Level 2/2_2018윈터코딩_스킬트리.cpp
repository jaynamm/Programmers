#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    vector<char> check;
    
    for(int i=0; i<skill_trees.size(); i++){
        for(int j=0; j<skill_trees[i].size(); j++){
            for(int k=0; k<skill.size(); k++){
                if(skill_trees[i][j] == skill[k]){
                    check.push_back(skill_trees[i][j]);
                    break;
                }
            }
        }
        
        bool poss = true;
        
        for(int i=0; i<check.size(); i++){
            for(int j=0; j<skill.size(); j++){
                if(check[i] == skill[j]) {
                    if(check[i-1] != skill[j-1]) {
                        poss = false;
                        break;
                    }
                }
            }
        }
        check.clear();
        
        if(poss) answer++;
    }
    
   
    return answer;
}
