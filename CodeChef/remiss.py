T = int(input())
for i in range(T):
    n, m = map(int, input().split())
    if n>m:
        max1=n
    else:
        max1=m
    print(max1," ",n+m)
