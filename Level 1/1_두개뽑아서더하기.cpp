#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i=0; i<numbers.size(); i++) {
        for(int j=i+1; j<numbers.size(); j++) {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }
    
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    
    for(int i=0; i<answer.size(); i++) {
        cout << answer[i] << " ";
    }
    
    return answer;
}


=== solved for "set container" ====
 
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> tmp;
    
    for(int i=0; i<numbers.size(); i++) {
        for(int j=i+1; j<numbers.size(); j++) {
						// insert 를 통해 입력하면 자동으로 정렬된다.
            tmp.insert(numbers[i] + numbers[j]);
        }
    }
    
		// answer 배열에 할당해준다.
    answer.assign(tmp.begin(), tmp.end());    
    
    return answer;
}
