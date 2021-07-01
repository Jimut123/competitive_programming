T = int(input())
K = []
for i in range(T):
    k = int(input())
    K.append(k)

for item in K:
    L = list(range(1,item+1))
    if len(L)>1:
        while len(L)!= 1:
            X = int(L[0])
            Y = int(L[len(L)-1])
            L.pop(0)
            L.pop(len(L)-1)
            L.append(X+Y+X*Y)
    else:
        pass
    print(L[0])
