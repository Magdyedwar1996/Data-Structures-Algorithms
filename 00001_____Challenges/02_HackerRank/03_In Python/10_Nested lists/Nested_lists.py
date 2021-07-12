x = int(input())
Student_Grades_Names = []


for i in range(x):
    name = input()
    score = float(input())
    Student_Grades_Names.append([name, score])
#Student_Grades_Names = [['Harry', 37.21],  ['Tina', 37.2],['Harsh', 39] , ['Akriti', 41],['Berry', 37.21] ]

for i in range(x):
    for j in range(i+1,x):
        if Student_Grades_Names[i][1] > Student_Grades_Names[j][1]:
            Temp1 = Student_Grades_Names[i]
            Student_Grades_Names[i] = Student_Grades_Names[j]
            Student_Grades_Names[j] = Temp1



        elif Student_Grades_Names[i][1] == Student_Grades_Names[j][1]:
            if ascii(Student_Grades_Names[i][0][0]) > ascii(Student_Grades_Names[j][0][0]):
                Temp2 = Student_Grades_Names[i]
                Student_Grades_Names[i] = Student_Grades_Names[j]
                Student_Grades_Names[j] = Temp2
            #if ascii(Student_Grades_Names[i][0][0]) > ascii(Student_Grades_Names[j][0][0]):


#print(Student_Grades_Names)
Temporary = []
for i in range(x):
    Temporary.append(Student_Grades_Names[i][1])
#print(Temporary)
Min = min(Temporary)
#print(Min)



After_Min = 1000000
for i in range(x):
    if  Temporary[i]> Min  and Temporary[i] < After_Min :
        After_Min = Temporary[i]

#print(After_Min)

#print(Student_Grades_Names)

for i in range(0,x):
    if (Student_Grades_Names[i][1] == After_Min) :
        print(Student_Grades_Names[i][0])