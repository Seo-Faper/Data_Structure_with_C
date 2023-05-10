s = input()
m = int(s[4:6])
d = int(s[6:9])
if m == 2 and (d >28 or d < 1):
    print(-1)
elif m % 2 == 0 and (d>30 or d < 1):
    print(-1)