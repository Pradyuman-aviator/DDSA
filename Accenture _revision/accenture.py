def password(passs):

    seen = set()
    max_len = 0
    left = 0 

    for right in range(len(passs)):
        while passs[right] in seen:
            seen.remove(seen[right])
            left = left +1

        seen.add(passs[right])
        max_len =  max(max_len,left-right+1)


    return max_len





    
        






