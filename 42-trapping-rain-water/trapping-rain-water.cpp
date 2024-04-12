class Solution {
public:
    int trap(vector<int>& height) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = height.size();
        vector<int>leftMax,rightMax;
        int lm = 0, rm = 0;
        for (int i = 0 ; i < n ; i++){
            if (lm < height[i]){
                lm = height[i];
            }
            leftMax.push_back(lm);
        }
        for (int i = n - 1 ; i >= 0 ; i--){
            if (rm < height[i]){
                rm = height[i];
            }
            rightMax.push_back(rm);
        }
        int res = 0;
        for (int i = 0 ; i < n ; i++){
            int val;
            if (leftMax[i] < rightMax[n-1-i]){
                val = leftMax[i] - height[i];
            }
            else{
                val = rightMax[n-1-i] - height[i];
            }
            res += val;
        }
        return res;
    }
};