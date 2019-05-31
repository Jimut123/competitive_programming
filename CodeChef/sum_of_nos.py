#jimutbahanpal@yahoo.com

def sum_of_nos(k,m):
    return k+m
T = int(input())

total = []
for i in range(T):
    k = int(input())
    m = int(input())
    total.append(sum_of_nos(k,m))

#print all the digits
for item in total:
    print(item)