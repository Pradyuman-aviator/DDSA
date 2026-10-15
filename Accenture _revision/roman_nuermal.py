class Solution(object):
    def romanToInt(self, s):
        n = len(s)
        values = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000
        }
        total =0

        for i in range(n-1):
            if values[s[i]] < values[s[i+1]]:
                total-=values[s[i]]

            else:
                total+=values[s[i]]

        
        total +=values[s[n-1]] ## seeprately adding the finala character


        return total
            
        
        