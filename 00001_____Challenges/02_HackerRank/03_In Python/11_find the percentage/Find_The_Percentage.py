Students_Number = int(input())
Students_Marks = { }
for i in range(Students_Number):
    name, *line = input().split()
    scores = list(map(float, line))
    Students_Marks[name] = scores
#print(Students_Marks)
query_name = input()
List = Students_Marks[query_name]
result = 0
for i in range(3):
    result += List[i]
print(format(result/3 ,".2f"))
