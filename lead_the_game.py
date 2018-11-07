#jimutbahanpal@yahoo.com
'''
N = int(input())    #contains the total no. of round
fir_cum = 0
sec_cum = 0
fir_arr = []
sec_arr = []
for i in range(N):
    first, sec = map(int,input().split())
    if(first>=sec):
        lead1 = first - sec
        fir_cum += lead1
        fir_arr.append(lead1)
    else:
        lead2 = sec - first
        sec_cum += lead2
        sec_arr.append(lead2)
fir_max = max(fir_arr)
sec_max = max(sec_arr)
if(fir_max>=sec_max):
    print(1," ",fir_max)
else:
    print(2," ",sec_max)
'''
t = int(input())
l = []
p1,p2 = 0,0
for i in range(t):
    m,n = map(int,input().split())
    p1+=m
    p2+=n
    l.append((1 if (p1>p2) else 2,abs(p1-p2)))

x,y=sorted(l,key=lambda x:x[1],reverse=True)[0]
print(x,y)