def knapsack(n, v, a, c):
    dp = [[]]
    for i in range(1, n+1):
        for j in range(v+1):
            dp[i][j] = dp[i-1][j]
            if j >= a[i-1]:
                dp[i][j] = max(dp[i-1][j-a[i-1]] + c[i-1], dp[i][j])
    return dp[n][v]

def function():
    n = int(input())
    v = int(input())

    a = []
    c = []
    a = list(map(int, int(input())))
    c = list(map(int, int(input())))
    print(a)
    ans = knapsack(n, v, a, c)
    print(ans)

if __name__ == "__main__":
    for i in range(int(input())):
        function()