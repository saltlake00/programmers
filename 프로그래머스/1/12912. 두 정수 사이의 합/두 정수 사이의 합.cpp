#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a==b)
    {
        return a;
    }
    
    if(a>b)
    {
        int temp = a;
        a= b;
        b= temp;
    }
    
    while(a<b+1)
    {
        answer+=a;
        a++;
    }
    
    
    return answer;
}