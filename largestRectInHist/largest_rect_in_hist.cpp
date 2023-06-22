//** https://leetcode.com/problems/largest-rectangle-in-histogram/
#include "largest_rect_in_hist.h"
using namespace std;


int largestRectangleArea(vector<int>& heights) {
    stack<int> areas;
    
    return 0;
}

int getArea(int a, int b)
{
    if(a < b)
        return a*2;
    else
        return b*2;
}

int main()
{
    vector<int> heights;

    largestRectangleArea(heights);
    return 0;
}