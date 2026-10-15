
class Solution(object):
    def longestCommonPrefix(self, strs):


            if not strs:
                return ""

            prefix = strs[0]

            for i in range(1,len(strs)):
                while not strs[i].startswith(prefix): ## this function can be used to find the spefic string a string 
                    prefix = prefix[:-1]


            if not prefix:
                return ""

            
            return prefix

     







