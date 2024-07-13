class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ok = True
        while ok == True:
            ok = False
            for _ in nums:
                while nums.count(_) > 2:
                    nums.remove(_)
                    ok = True
        return len(nums)
