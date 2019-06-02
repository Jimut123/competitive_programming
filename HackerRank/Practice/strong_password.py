n = int(input())
s = input()
r = int(not any(map(str.isdigit, s))) + \
    int(not any(map(str.islower, s))) + \
    int(not any(map(str.isupper, s))) + \
    int(not any(map(lambda x: x in "!@#$%^&*()-+", s)))
print(max(r, 6 - n))

