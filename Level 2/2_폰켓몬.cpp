#include <vector>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
    int sel = nums.size()/2;
   
    vector<int> res;
    
    for(int i=0; i<nums.size(); i++){
        bool check = true;
        for(int j=0; j<i; j++){
            if(i != j && nums[i] == nums[j]){
                check = false;
                break;
            }
        }
        if(check) res.push_back(nums[i]);
        if(res.size() == sel) break;
    }
    
    answer = res.size();
    
	return answer;
}
