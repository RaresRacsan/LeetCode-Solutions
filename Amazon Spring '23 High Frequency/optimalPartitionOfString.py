class Solution:
    def partitionString(self, s: str) -> int:
        new = ""
        maxi = 1
        for _ in s:
            if new.count(_) == 1:
                new = _
                maxi += 1
            else:
                new += _
        return maxi
