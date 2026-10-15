class Solution(object):
    def removeDuplicates(self, nums):
        unique = set(nums)

        i=0

        k = len(unique)


        for x in unique:
                nums[i] = x
                i+=1


        return k

      ## using the set      






        

