T = int(input())
for i in range(T):
    m_str = input()
    s_str = input()
    num = int(input())
    lis_ = list(s_str)
    k = 0
    for item in lis_:
        if item not in m_str:
            k += 1
            #print(item)
    if int(len(s_str) - k) >=num:
        print("Yes")
    else:
        print("No")
            
