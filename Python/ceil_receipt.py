list_m = []
for i in range(12):
    list_m.append(pow(2,i))

list_m.reverse()
#print (list_m)

def cal_greedy(nos):
    nos1=nos
    k=0
    #print("gone")
    for item in list_m:
        #print(item)
        if item > nos1:
            continue
        while(nos1>=item):
            nos1-=item
            k+=1
    return k

T = int(input())
for i in range(T):
    inp = int(input())
    ans = cal_greedy(inp)
    print(ans)
    
