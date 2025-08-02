class Solution {
    public int removeDuplicates(int[] nums) {
        int i = 0, j = 0, n = nums.length;
        while (j < n && i < n){
            if (nums[i] == nums[j]){
                j++;
            }
            else{
                i++;
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
        }
        return i+1;
    }
}