class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<>();
        int n = nums.length;
        for (int eachNum : nums){
            if (!mp.containsKey(eachNum)){
                mp.put(eachNum,1);
            }
            else{
                mp.put(eachNum,mp.get(eachNum)+1);
            }
            if (mp.get(eachNum) > n/2) return eachNum;
        }
        return 0;
    }
}