def solution(S,k):

    n = len(S)

    strr = ""

    i=0

    while i<n:
        if(len(strr) == k):
            countt = strr.count('a')
            maxx = max(max,countt)
            str=""
            i=k-1

        strr += S[i]
        i = i+1

    return maxx


            





    

