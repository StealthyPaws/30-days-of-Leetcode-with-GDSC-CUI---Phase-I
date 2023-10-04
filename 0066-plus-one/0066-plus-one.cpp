class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1; 
        int n = digits.size();
        
        for (int i = n - 1; i >= 0 && carry; i--) {
            digits[i] = (digits[i] + carry) % 10;
            carry = (digits[i] == 0) ? 1 : 0;
        }
        
        if (carry) {
            digits.insert(digits.begin(), carry);
        }
        
        return digits;
    }
};
