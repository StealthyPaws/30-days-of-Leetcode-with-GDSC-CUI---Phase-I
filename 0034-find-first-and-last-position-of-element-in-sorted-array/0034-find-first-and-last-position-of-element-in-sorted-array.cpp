class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int size = nums.size();
        int st= -1 ;
        int end = -1;
        for(int i = 0 ; i < size; i++){
            if(nums[i] == target && st == -1 && end == -1){
                st = i;
                end = i;
            }

            else if(nums[i] == target){
                end = i;
            }
        }

        ans.push_back(st);
        ans.push_back(end);

        return ans;
        
    }
};