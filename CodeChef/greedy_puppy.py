#jimutbahanpal@yahoo.com
T = int(input())
l = []
for i in range(T):
    n, m = map(int, input().split())
    if m == 0 or n < m :
        continue
    else:
        l.append(n%m)
for i in l:
    print(i)
