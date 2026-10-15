def solution(n, k, arr):
    for i in range(k,n,k):
        if arr[:k] == arr[i:k+i]:
            return True

        return False
    
    pass


# Input
n = int(input())
k = int(input())
arr = list(map(int, input().split()))






# Output
print(solution(n, k, arr))