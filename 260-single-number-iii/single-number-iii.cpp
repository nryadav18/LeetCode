class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0); //Beat Booster
        cin.tie(nullptr);
        unordered_map<int,int>up; //An Unordered Map for O(1) Retreival of Elements
        int n = nums.size(); 
        for (auto it : nums){
            up[it]++; //Adding elements into the Map
        }
        vector<int>result; //Resultant Vector
        for (auto it : up){
            if (it.second == 1){ //Whenever the Frequency of an Element is 1
                result.push_back(it.first); //Store its Original Number
            }
        }
        return result; //Return the Resultant Vector
    }
};