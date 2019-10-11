A = [0]*1000005
for i in range (2,1000005) :
    A[i] = A[i-1] + i*(i-1)

while True :
    n,m = map(int , input().split())
    if n == 0 & m == 0 :
        break
    if (n > m ) :
        n,m = m,n
    res = A[n - 1] * 4 + (2 * (A[n] - A[n - 1]) * (n + m - 1 - 2 * (n - 1))) + n * m * (n + m - 2)
    print(res)
