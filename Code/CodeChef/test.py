def get_hcf(lis = [], *args):
    #print(lis)
    # get the hcf of the list of the numbers
    m_list = lis.copy()
    m_list = sorted(m_list)
    #print(m_list)
    mini = m_list[0]
    #print("mini = ",mini)
    for item in m_list:
        if item%mini==0:
            continue
        else:
            return -1
    return mini

T = int(input())
for i1 in range(T):
    lis = list(map(int, input().split()))
    num = lis[0]
    rest_num = lis[1:]
    #print(rest_num)
    k_get = get_hcf(rest_num)
    #print("k_get : ",k_get)
    if k_get == -1:
        for item in lis[1:]:
            print(item, end=" ")
        print()
    else:
        #print(lis[0],end=" ")
        for ite in lis[1:]:
            print(int(ite/k_get), end=" ")
        print()
