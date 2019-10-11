f = [1]*1001
for i in range(2,1001) :
    f[i]= i*f[i-1]
while 1 :
    try :
        n = int(input())
        print(str(n) + '!')
        print(f[n])
    except :
        break
