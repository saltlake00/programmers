#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int maxw = 0;
    int maxh = 0;
    
    for(int i=0; i<sizes.size(); i++)
    {
        if (sizes[i][0] < sizes[i][1]) 
        {
        std::swap(sizes[i][0], sizes[i][1]);
        }
        int w = sizes[i][0]; 
        int h = sizes[i][1];
        
        maxw = max(maxw, w);
        maxh = max(maxh, h);
        
    }
    
    return maxw * maxh;
}