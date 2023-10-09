class Solution:
    def romanToInt(self, s: str) -> int:
        m = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        ans = 0
        pre = 0
        for index in s:
            if index not in m:
                raise ValueError()
            cur = m[index]

            if cur > pre:
                ans += cur - (2*pre)
            else:
                ans += cur
            pre = cur

        return ans