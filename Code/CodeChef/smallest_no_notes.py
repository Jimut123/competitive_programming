T = int(input())

for i1 in range(T):
    #print("next")
    notes = [1,2,5,10,50,100]
    notes = reversed(notes)
    sum1 = int(input())
    #print("sum1 : ",sum1)
    count = 0
    for item in notes:
        #print("item : ",item)
        while sum1 >= item:
            sum1 -= item
            count += 1
    print(count)
