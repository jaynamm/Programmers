#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    int arr[1000][1000]; // 2차원 배열을 이용해서 값을 입력
    
    int x = 0, y = 0; // 시작 위치
    int state = 0; // state -> 0: 왼쪽, 1: 아래, 2: 오른쪽
    int num = 1; // 입력할 숫자
    
    for(int i=0; i<n; i++) {
        switch(state) {
            // 왼쪽
            case 0:
                for(int k=i; k<n; k++) {
                    arr[x++][y] = num++;
                }
                x--;
                y++;
                state = 1;
                break;
            // 아래
            case 1:
                for(int k=i; k<n; k++) {
                    arr[x][y++] = num++;
                }
                x--;
                y-=2;
                state = 2;
                break;
            // 오른쪽
            case 2:
                for(int k=i; k<n; k++) {
                    arr[x--][y--] = num++;
                }
                x+=2;
                y++;
                state = 0;
                break;
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            answer.push_back(arr[i][j]);
        }
    }
    
    return answer;
}
