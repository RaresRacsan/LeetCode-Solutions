class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        i = 1
        l = 0
        while i <= n / 2:
            if n % i == 0:
                l += 1
                if l == k:
                    return i
            i += 1
        if l + 1 == k and n % 2 == 0 and n != 2:
            return n / 2
        if l + 1 == k:
            return n
        return -1
