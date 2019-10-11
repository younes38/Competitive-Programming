from math import *
while(1):

    n, x =map(int , input().split())
    if n == 0: break
    A = [0]*150

    A[0] = 1
    for k in range(n):
        for i in range(149,-1,-1) :
            for j in range(1,7):
                if i + j >= 150 :
                    continue

                A[i + j] += A[i]

            A[i] = 0

    res = 0
    for i in range(x, 150):
        res+=A[i]
    p = int(pow(6, n))
    d = gcd(res, p)
    if d == p:
       print(res // d)
    else :
       print(str(res // d) + '/' + str(p // d))
