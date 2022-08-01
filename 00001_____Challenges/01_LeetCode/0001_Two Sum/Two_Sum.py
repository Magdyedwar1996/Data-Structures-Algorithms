def Two_Sum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    # we made i,j global ,to be able to print them outside the function [Two_Sum] scope
    global i, j
    # finding the first number in the range
    for i in range(len(nums)):
        mid = target - nums[i]
        # finding the number thats completes the target
        for j in range(i + 1, len(nums)):
            # conditioning if the completing number exists
            if nums[j] == mid:
                # return the  indices of these two numbers
                return [i, j]


Nums = range(0, 400, 2)
# print(len(Nums))
print(Two_Sum(Nums, 570))
# print(type(Two_Sum))
print(f"The two numbers are :  {Nums[i]} {Nums[j]}")
