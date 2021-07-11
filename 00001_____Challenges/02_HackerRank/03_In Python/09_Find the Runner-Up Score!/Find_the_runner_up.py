x = int(input())
list1 = []
list1 = list(map(int, input().split()))

Max = max(list1)
list2 = []
for n in range(x):
    if list1[n] < Max:
        list2.append(list1[n])

Max = max(list2)
print(Max)


