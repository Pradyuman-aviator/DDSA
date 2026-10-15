def solution(codes):

    charss = "ABCEDFGHIJKLMNOPQRSTUVWXYZ"

    charsss =[]

      for m in charss:
            charsss.append(m)



    
    valuess = []

    for i in range(len(charss)):
        valuess.append(i)


    dictt = {}

    for number,charr in zip(valuess,charss):
        dictt[charr] = number

    maxx =0
    
    for code in codes:
        for i in code:
            summ =0 

            if isinstance(i, str):
               summ = summ + dictt[i]

            summ = summ + i

            maxx = max(maxx,summ)


    return max         

           
               
               
           
            




    
        

    