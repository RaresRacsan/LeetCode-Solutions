class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(len(nums)-1, -1, -1):
            if len(nums) == 1:
                return 1
            if nums[i] == nums[i-1]:
                nums.pop(i)
        return len(nums)
