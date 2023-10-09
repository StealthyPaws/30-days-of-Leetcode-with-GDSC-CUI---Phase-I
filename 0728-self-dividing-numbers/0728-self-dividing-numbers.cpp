class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++){
            int num = i;
            bool k = true;
            while(num != 0){
                int div = num % 10;
                if(div == 0){
                    k = false;
                    break;
                }
                if(i % div != 0){
                    k = false;
                    break;
                }
                num /= 10;
            }
            if(k){
                ans.push_back(i);
            }
        }

        return ans;
        
    }
};