#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                int cnt = 0;
                sum = nums[i] + nums[j] + nums[k];
                for(int m=1; m<=sum; m++){
                    if(sum%m == 0) cnt ++;
                }
                if(cnt == 2) answer++;
            }
        }
    }

    return answer;
}
