#include <string>
#include <vector>
#include <cmath>

using namespace std;
long long nn (long long sqrtn)
{
    return sqrtn*sqrtn;
}

long long solution(long long n) {
    long long answer = 0;
    
    long long sqrtn = sqrt(n);
    
    answer = (n == nn(sqrtn)) ? nn(sqrtn+1):-1;
    
    return answer;
}