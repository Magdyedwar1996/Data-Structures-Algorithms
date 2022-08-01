number = int(input("Enter a number : "))
result = 0


def FindTheNumber(num):
    global result
    while num % 10 != 0:
        result += num % 10
        num = num // 10
    return result


print(FindTheNumber(number))

