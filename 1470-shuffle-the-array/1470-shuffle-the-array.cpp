class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s = nums.size();
        int k = 0;
        
        // Create two separate arrays for even and odd elements
        vector<int> odd(s/2);
        vector<int> even(s/2);
        
        for (int i = 0; i < s/2; i++) {
            odd[i] = nums[i];
            k++;
        }
        for (int i = 0; i < s/2; i++) {
            even[i] = nums[k];
            k++;
        }
        
        k = 0;
        int l = 0;
        
        // Interleave elements from even and odd arrays into nums
        for (int i = 0; i < s; i++) {
            if (i % 2 == 0) {
                nums[i] = odd[k];
                k++;
            } else {
                nums[i] = even[l];
                l++;
            }
        }
        
        return nums;
    }
};
