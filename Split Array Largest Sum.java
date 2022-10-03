class Solution {
    public int splitArray(int[] nums, int m) {
        int min_range=0;
        int max_range=0;
        
        for(int i=0; i<nums.length; i++){
            max_range+=nums[i];   
            min_range = Math.max(min_range, nums[i]);  //[start, end]
        }

        return binary_search(nums, min_range, max_range, m);
        
    }
    
    static int binary_search(int[] nums, int start, int end, int m){
         while (start <= end) {
            // try for the middle as potential ans
            int mid = start + (end - start) / 2;

            // calculate how many pieces you can divide this in with this max sum
            int curr_sum = 0;
            int pieces = 1;
             
             if(start==end)
                 return end;
             
            for(int i=0; i<nums.length; i++) {
                if (curr_sum + nums[i] <= mid) {
                    curr_sum+=nums[i];
                } 
                 //If current_sum > middle then we cannot add this in this subarray, make new one
                    // say you add this num in new subarray, then sum = num
                else {
                    curr_sum = nums[i];
                    pieces++;
                }
            }

            if (pieces <= m) {
                end=mid;
            } else {
                start=mid+1;
            }

        }
        return -1; 
    }

}
