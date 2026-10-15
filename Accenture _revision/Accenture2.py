class Solution(object):
    def solve(self, K, s1, s2):

         ## constrain given as i+K1-1

        for i in range(i+K-1):

            t =""

            for j in range(K):
                    if j%2==0:
                        t += s1[i+j]

                    else:
                        t+=s2[i+j]


            for t in s1 or t in s2:
                    count = count+1


        return count
             





              
              
                        
                        

                   