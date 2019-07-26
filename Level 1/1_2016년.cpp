#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int sum = 0;
    vector<int> mon {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for(int i=0; i<a-1;i++){
        sum += mon[i];
    }
    
    int total = sum + b;
    
    switch(total%7){
        case 0:
            answer = "THU";
            break;
        case 1:
            answer = "FRI";
            break;
        case 2:
            answer = "SAT";
            break;
        case 3:
            answer = "SUN";
            break;
        case 4:
            answer = "MON";
            break;
        case 5:
            answer = "TUE";
            break;
        case 6:
            answer = "WED";
            break;
        default:
            break;
    }
    
    return answer;
}
