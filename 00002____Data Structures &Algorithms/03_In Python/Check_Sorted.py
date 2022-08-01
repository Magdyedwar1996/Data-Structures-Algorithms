My_List = [1, 2, 4, 5, 7, 8, 9, 11, 12, 14, 18, 19, 21, 25, 29, 30, 35, 39, 20]

Flag = 0


def check_sorted(myList):
    global Flag
    for i in range(1, len(myList)):
        if myList[i] >= myList[i - 1]:
            continue
        else:
            Flag = 1
            break
    if Flag == 0:
        print("This list is sorted")
    elif Flag == 1:
        print("This list is not sorted")


check_sorted(My_List)
