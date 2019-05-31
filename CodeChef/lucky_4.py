def count_4(k):
    count=0
    k=int(k)
    #print("okay1")
    while k>0:
        m = k%10
        if m == 4:
            count = count + 1
            #print("okay3")
        k = int(k/10)
        #print("okay1")
    return count
T = int(input())
for i in range(T):
    m1 = int(input())
    print(count_4(m1))
