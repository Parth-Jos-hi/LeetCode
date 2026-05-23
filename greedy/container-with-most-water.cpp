class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0;
        int j = height.size()-1;
        int maxi= 0;
        while(i<j){
            int width = j-i;
            int h = min(height[i],height[j]);
            int area = width*h;
            maxi = max(area,maxi);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }

        }
        return maxi;
    }
};