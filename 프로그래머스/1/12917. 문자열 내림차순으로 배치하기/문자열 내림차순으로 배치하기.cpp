#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    for(int j = 0; j < s.size()-1; j++)
    {
        for(int i = 0; i < s.size()-j; i++)
        {
        if (s[i] < s[i+1])
            {
            char c;
            c = s[i];
            s[i] = s[i+1];
            s[i+1] = c;
            }
        }
    }
    answer = s;
    return answer;
}