def catalan_number(n):
    catalan = [0] * (n + 1)
    catalan[0] = 1

    for i in range(1, n+1):
        for j in range(i):
            catalan[i] += catalan[j]*catalan[i-1-j]
    return catalan[n]

def function():
    n = int(input())
    print(catalan_number(n))

if __name__ == "__main__":
    for i in range(int(input())):
        function()