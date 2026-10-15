def solution(input1,input2):
    ans =0

    for x in (1,100):
        count = 0

        for start,end in input2:
            if start < x < end:
                count+=1


        ans = max(count,ans)


    return ans