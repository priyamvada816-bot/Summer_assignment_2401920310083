class Solution {
public:
    int maxArea(vector<int>& height) 
    {int maxwater=0;
    for(int i=0;i<height.size();i++)
      {
        for(int j=0;j<height.size();j++)
        {
            int width=j-i;
            int h=min(height[i],height[j]);
            int area=width*h;
        
        if(area>maxwater)
        {
            maxwater=area;
        }
         } 
      }
      return maxwater;
    }
};