def countPairs(a, n, k):
     
    a.sort()
    res = 0
    for i in range(n):
        j = i+1
        while (j < n and a[j] - a[i] < k):
            res += 1
            j += 1
    return res
 
# Driver code
a = [1, 10, 4, 2]
k = 3
n = len(a)
print(countPairs(a, n, k), end = "")

if __name__ == '__main__':

    test = int(input())
    while test:
        a = int(input())
        b = int(input())
        print(lcm(a, b))
        print("\n")
        test-=1