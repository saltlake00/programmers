#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size()==1) 
        return {-1};
    int low=arr[0];
    for(int i=0; i<arr.size(); i++)
    {
        if(low>arr[i])
            low = arr[i];
    }
    for(int i=0; i<arr.size(); i++)
    {
        if(low!=arr[i])
        answer.push_back(arr[i]);
    }
    
    return answer;
}