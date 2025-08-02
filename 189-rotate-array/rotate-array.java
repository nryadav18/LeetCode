class Solution {
    public void reverse(int[] arr, int i, int j){
        while (i <= j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    public void rotate(int[] nums, int k) {
        k = k % nums.length;
        int n = nums.length, stop = n - k;
        reverse(nums,0,stop-1);
        reverse(nums,stop,n-1);
        reverse(nums,0,n-1);
    }
}