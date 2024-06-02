from itertools import product

def function():
    n = int(input())
    x = 1
    count = 0
    while count < n:
        for i in product(['6','8'], repeat = x):
            print(*i,*i[::-1], sep = '', end = ' ')
            count += 1
            if count >= n:
                break
        x += 1
    print()
if __name__ == "__main__":
    for i in range(int(input())):
        function()
