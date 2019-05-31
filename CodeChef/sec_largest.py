T = int(input())
for i in range(T):
    l = []
    a, b, c = map(int, input().split())
    l.append(a)
    l.append(b)
    l.append(c)
    l.sort()
    print(l[1])
