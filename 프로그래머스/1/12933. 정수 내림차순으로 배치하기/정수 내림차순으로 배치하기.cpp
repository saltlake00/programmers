#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> sort;
  while(n>0)
    {
        sort.push_back(n%10);
        n/=10;
    }
    
    
    for(int i=0; i<sort.size(); ++i)
    {
        for(int j=0; j<sort.size()-i-1; ++j)
        {
            if (sort[j]<sort[j+1])
            {
            int temp = sort[j];
            sort[j] = sort[j+1];
            sort[j+1] = temp;
            }
        }
    }

    for(int i=0; i<sort.size(); ++i)
    {
        answer = answer*10 + sort[i];
    }
    
    
    return answer;
}