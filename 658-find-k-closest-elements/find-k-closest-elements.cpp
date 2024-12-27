class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int low = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int upp = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        int i, j, n = arr.size(), ind = 0;
        if (low == upp) i=upp-1, j=upp;
        else i = low, j = low+1;
        vector<int>ans(k,0);
        while (k and i >= 0 and j < n){
            if (x - arr[i] > arr[j] - x) ans[ind++] = arr[j++];
            else ans[ind++] = arr[i--];
            k--;
        }
        while (k and i >= 0) ans[ind++] = arr[i--], k--;
        while (k and j < n) ans[ind++] = arr[j++], k--;
        sort(ans.begin(),ans.end());
        return ans;
    }
};