#jimutbahanpal@yahoo.com
t = int(input())
l = []
for i in range(t):
    m,n = map(int,input().split())
    l.append(m%n)
for item in l:
    print(item)
