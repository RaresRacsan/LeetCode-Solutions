class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        i = 1
        l = 0
        while i <= n:
            if n % i == 0:
                l += 1
                if l == k:
                    return i
            i += 1
        return -1
