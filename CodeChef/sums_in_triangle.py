T = int(input())
w, h = 100, 100;
arr = [[0 for x in range(w)] for y in range(h)] 
for i in range(T):
    N = int(input())
    for L in range(N+1):
        for m in range(L):
            arr[L][m] = int(input())
    
'''
for L in range(N+1):
    for m in range(L):
        print(arr[L][m], end=" ")
    print()
'''
