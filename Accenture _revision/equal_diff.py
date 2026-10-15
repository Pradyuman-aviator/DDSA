class Solution(object):
    def countPartitions(self, nums):
        n = len(nums)
        count = 0
        total = sum(nums)
        for i in range(1, n):
            temp = nums[i:]              # right part
            right_sum=sum(temp)
            left_sum = total - right_sum
            difference = left_sum - right_sum
            if difference % 2 == 0:
                count += 1
        return count