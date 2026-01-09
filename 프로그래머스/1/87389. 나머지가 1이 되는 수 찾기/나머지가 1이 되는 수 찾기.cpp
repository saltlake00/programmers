#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int div = n -1;
    for(int i = div ;i>1 ; --i)
    {
        if (div %i == 0)
        {answer = i;}
    }
    return answer;
}