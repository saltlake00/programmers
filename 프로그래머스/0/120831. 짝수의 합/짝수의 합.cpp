#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sum = 0;
    for(int i = 1; i <= n/2; i++)
    {
        sum += i;
    }
    answer = sum*2;
    return answer;
}