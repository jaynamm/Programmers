#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    // 빼낸 인형을 담을 배열
    vector<int> results;
    
    for(int i=0; i<moves.size(); i++) {
        int loc = moves[i];
        
        for(int j=0; j<board.size(); j++) {
            if (board[j][loc-1] != 0) {
                int get = board[j][loc-1];
                
                // 인형이 있을 때 전에 들어간 인형과 같은 인형일 경우
                if(results.size() > 0 && results.back() == get) {
                    // 인형을 넣지 말고 마지막에 들어있는 인형을 빼준다.
                    results.pop_back();
                    // 그리고 2개를 빼냈기 때문에 2개를 더해준다.
                    answer+=2;
                } else {
                    // 인형을 하나씩 쌓아준다.
                    results.push_back(board[j][loc-1]);
                }
                
                // 크레인으로 빼낸 인형 자리를 0으로 초기화
                board[j][loc-1] = 0;
                
                break;
            }
        }
    }
                
    return answer;
}
