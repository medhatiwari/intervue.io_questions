# cook your dish here
t = int(input())
for _ in range(t):
    input()
    t1 = [int(i)  for i in input().strip().split(' ')]
    t1o = 0
    for i in t1:
        if i % 2 == 0:
            t1o += 1
    t1e = len(t1) - t1o
    print(t1e*t1o)