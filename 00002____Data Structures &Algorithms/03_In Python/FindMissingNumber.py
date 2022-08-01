# Find the missing number

array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 16, 17, 18, 20, 22,25]


def FindMissingNumber(array):
    """This is the first way to find the missing element"""
    # for i in range(array[0], array[-1]):
    #     if array[i] != array[i + 1] - 1:
    #         return array[i] + 1
    #

    """ this is the second way to find the missing element """
    for i in range(array[0], array[-1]):
        if i not in array:
            print(f"Found element :{i}")


FindMissingNumber(array)
# print(f"This is the missing element in this array ", FindMissingNumber(array))
