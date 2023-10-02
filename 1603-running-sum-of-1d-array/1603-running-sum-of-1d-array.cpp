class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s = nums.size();
        int temp = 0;
        for(int i = 0; i < s; i++){
            temp += nums[i];
            nums[i] = temp;
        }

        return nums;        
    }
};