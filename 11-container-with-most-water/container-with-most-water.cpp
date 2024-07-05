class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int max_area = 0;
        int n = height.size();
        int i = 0; 
        int j = n - 1;
        while (i<j){
            int cur_area = (j-i)*(min(height[i],height[j]));
            max_area = max(max_area,cur_area);
            if (height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max_area;
    }
};