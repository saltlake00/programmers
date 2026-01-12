#include <string>
#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int numer3 = (numer1*denom2) + (numer2*denom1);
    int denom3 = denom1*denom2;
    
    int div = gcd(numer3, denom3);
    
    numer3 /= div;
    denom3 /= div;
        
    answer.push_back(numer3);
    answer.push_back(denom3);
    
    return answer;
}