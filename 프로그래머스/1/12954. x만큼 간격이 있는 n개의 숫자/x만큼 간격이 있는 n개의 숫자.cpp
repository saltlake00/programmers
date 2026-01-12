#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int add = 0;
    for(int i=0; i<n; i++)
    {        
        add += x;
        answer.push_back(add);
    }
    return answer;
}