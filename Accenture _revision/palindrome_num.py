class Solution(object):
    def isPalindrome(self, x):
        strr =  str(x)

        if strr == strr[: : -1]:
            return  True


        return False
        