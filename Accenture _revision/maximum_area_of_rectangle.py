class Solution(object):
    def areaOfMaxDiagonal(self, dimensions):
        n = len(dimensions)

        temp =[]

        for a,b in dimensions:
            temp.append(a*a + b*b)



        max_index = temp.index(max(temp))


        c,d = dimensions[max_index]

        return c*d





        