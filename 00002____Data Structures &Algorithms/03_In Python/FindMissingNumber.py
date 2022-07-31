# Find the missing number

array = [0,1,2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16]


def FindMissingNumber(array):
    for i in range(array[0], array[-1]):
        if array[i] != array[i + 1] - 1:
            return array[i] + 1


Missing_Element = FindMissingNumber(array)
print(f"This is the missing elemetn in this array ", Missing_Element)