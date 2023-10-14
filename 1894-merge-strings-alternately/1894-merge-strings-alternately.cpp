class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int s1 = word1.length();
        int s2 = word2.length();
        int i1 = 0;
        int i2 = 0;
    
        while (i1 < s1 && i2 < s2) {
            ans += word1[i1];
            ans += word2[i2];
            i1++;
            i2++;
        }

        while (i1 < s1) {
            ans += word1[i1];
            i1++;
        }

        while (i2 < s2) {
            ans += word2[i2];
            i2++;
        }

        return ans;        
    }
};
