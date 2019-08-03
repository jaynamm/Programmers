#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    int size = heights.size();
    int tmp[101] = {0};

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(heights[i] > heights[j]){
                tmp[j] = i+1;
            }
        }
    }
    
    for(int i=0; i<size; i++){
        answer.push_back(tmp[i]);
    }
    
    return answer;
}
