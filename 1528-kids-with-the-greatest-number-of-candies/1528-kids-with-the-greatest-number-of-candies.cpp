class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int s = candies.size();
        int m = *std::max_element(candies.begin(), candies.end());
        for(int i = 0; i < s; i++){
            if(candies[i] + extraCandies >= m){
                ans.push_back(true);
            }
            else
            ans.push_back(false);
        }
        return ans;
    }
};