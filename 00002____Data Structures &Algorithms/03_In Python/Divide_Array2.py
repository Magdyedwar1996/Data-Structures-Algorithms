def divide_array(array):
    count = 0
    new_list = list()

    for i in range(1, len(array)):
        if count >= len(array):
            break
        new_list.append(array[count: count + i])  # append elements to a certain index
        count += i

    return new_list


array = [*range(1, 100, 5)]
print(divide_array(array))
