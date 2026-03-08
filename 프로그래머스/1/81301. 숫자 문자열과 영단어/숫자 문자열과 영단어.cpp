#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    vector<string> num = {
        "zero", 
        "one", 
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"};
    
    for(int i = 0; i < num.size(); i++)
    {
        while (s.find(num[i]) != string::npos)
        {
            auto index = s.find(num[i]);
            s.replace(index, num[i].size() ,to_string(i));
        }      
    }
    
    answer = stoi(s);
    return answer;
}


