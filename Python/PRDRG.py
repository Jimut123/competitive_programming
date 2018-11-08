lis = input().split(" ")
T = int(lis[0])
#print("T:",T)
outp = []
lis = lis[1:]
for item in lis:
    #print("item :",item)
    i = int(item)
    outp.append(1)
    outp.append(2**i)
lent = len(outp)
count = 0
for ite in outp:
    if count <= lent-2:
        print(int(ite), end=" ")
    else:
        print(int(ite))
    count+=1
    print("$",end="")
#print()
