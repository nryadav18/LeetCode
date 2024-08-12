class KthLargest {
public:
    multiset<int>jyo;
    int K = -1;
    KthLargest(int k, vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        for (auto it : nums){
            jyo.insert(it);
        }
        K = k;
    }
    
    int add(int val) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        jyo.insert(val);
        auto it = next(jyo.rbegin(),K-1);
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */