class solution(object):
    def transformation(self,num):
        ans=0

        for i in range(len(num)):

            modified = num[i] - ((i%7)*3)

            if num[i]%11 ==0:
                modified = modified + (num[i]//11) ## // gives integer vlaue

            ans= ans+modified


        return ans







    