#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum=0;
    int i = x;
    while(x!=0)
    {
        sum += x%10;
        x /= 10;
    }
    
    i%sum == 0 ? answer = true : answer = false;
    
    return answer;
}