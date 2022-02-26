def PT(m, n):
    x = max(m, n)
    y = min(m, n)
    return([x**2 - y**2, 2*x*y, x**2 + y**2])

def PTS(m, n):
    return(sum(PT(m, n)))

for i in range(25):
    for j in range(i):
        if PTS(i, j) == 1000:
            print(PT(i, j))
            exit(1)