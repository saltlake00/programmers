#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    if(num==1)
    {
        return 0;
    }
  
    for(int i = 0; i < 500; i++)
    {
        if(n==1)
        {
            answer = i;
            break;
        }
          if(n%2==0)
          {
            n /=2;
          } else {
            n=n*3+1;
          }
        if(i==499&&n!=1)
        {
            return -1;
        }
    }
    
    
    return answer;
}