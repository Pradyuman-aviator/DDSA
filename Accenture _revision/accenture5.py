def solution(n, arr):
    
    for i in range(n-1):
        if(arr[i+1]!=arr[i]+2):
            return arr[i]+2
            
    pass


# Input
n = int(input())
arr = list(map(int, input().split()))

# Output
print(solution(n, arr))