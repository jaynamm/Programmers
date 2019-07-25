#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    for(int i=0; i<lost.size(); ){
        int flag=0;
        for(vector<int>::iterator itr = reserve.begin(); itr != reserve.end(); ){
            if(lost[i] == *itr) {
                lost.erase(lost.begin()+i);
                reserve.erase(itr);
                flag=1;
                break;
            }
            itr++;
        }
        if(flag==0)
            i++;
    }
    answer = n - lost.size();
    for(int i=0; i<lost.size(); i++){
        for(vector<int>::iterator itr = reserve.begin(); itr != reserve.end();){
            if(lost[i] == *itr-1 || lost[i] == *itr+1) {
                answer++;
                reserve.erase(itr);
                break;
            }
            itr++;
        }
    }

    return answer;
}
