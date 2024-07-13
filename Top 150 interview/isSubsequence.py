class Solution:
    def check(self, s: str, t: str, n: int, m: int):
        if n == 0:
            return True
        if m == 0:
            return False
        if s[n - 1] == t[m - 1]:
            return self.check(s, t, n - 1, m - 1)
        return self.check(s, t, n, m - 1)
        

    def isSubsequence(self, s: str, t: str) -> bool:
        return self.check(s, t, len(s), len(t))
