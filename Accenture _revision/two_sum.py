class Solution(object):
    def twoSum(self, nums, target):
     

        ## finding the length of array

        n = len(nums)

        arr= []

        for i in range(n):
            arr.append((nums[i],i)) ## creatint a tuple of list

            ## sorting hte value

            arr.sort()
        start =0
        end = n-1
            
        while start<end:
            total = arr[start][0] + arr[end][0]

            if total == target:
                return [arr[start][1],arr[end][1]] #3# accesing the index of the tuple 

            elif total < target:
                start += 1

            else:
                end -=1

    
        return []## returning the empy list if htere is no findings 

             


        




        







    
        