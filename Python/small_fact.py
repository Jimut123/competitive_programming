def fact(n):
    k = 1
    for i in range(1,n+1):
        k=k*i
    return k
T = int(input())
for i1 in range(T):
    i1 = int(input())
    print(fact(i1))
