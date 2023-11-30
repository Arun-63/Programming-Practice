n = int(input())
d = {}
a = list(map(int,input().split()))
for i in a:
    try:
        d[i] += 1
    except:
        d[i] = 1
mx = max(d.values())
count = 0
for x,y in d.items():
    if(y == mx):
        count += 1
print(count)