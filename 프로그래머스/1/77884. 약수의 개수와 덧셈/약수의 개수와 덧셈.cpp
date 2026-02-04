#include <string>
#include <vector>

using namespace std;
int num (int num)
{
    if(num==1)
    {return -1;}
    int sign = 0;
    for(int i =1; i*i <= num; i++)
    {
        sign = i;
    }
    if(sign * sign == num)
    {
    return -1;        
    }
    return 1;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i<=right; i++)
    {
        answer += i*(num(i));
    }

    
    return answer;
}