N, M = map(int, input().split())
out= []

def dfs(num, k, N, M):
    if num == M:
        print(' '.join(map(str,out)))
        return
    
    for i in range(k, N):
        out.append(i+1)
        dfs(num+1,i,N,M)
        out.pop()

dfs(0,0,N,M)
