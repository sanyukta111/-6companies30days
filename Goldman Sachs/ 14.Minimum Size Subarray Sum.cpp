class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int result = Integer.MAX_VALUE;
        int left=0,vol_sum=0;
        
        for(int i=0;i<nums.length;i++)
        {
            vol_sum += nums[i];
            
            while(vol_sum >= target)
            {
                result = Math.min(result,i+1-left);
                vol_sum -= nums[left];
                left++;
            }
        }
        
        return (result != Integer.MAX_VALUE) ? result:0;
    }
}
