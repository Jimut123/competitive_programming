#jimutbahanpal@yahoo.com

def sum_of_dig(k):
    sum1=0
    while(k!=0):
        d=int(k)%int(10)
        sum1 = sum1 + int(d)
        k=int(k)/int(10)
    return sum1
T = int(input())
#print(T)
total = []
for i in range(T):
    #print(i)
    k = int(input())
    total.append(sum_of_dig(k))

#print all the digits
for item in total:
    print(item)