def kth_highest(scores, k):
    arr= scores.sort(retversed=True)

    return arr[k-1]
