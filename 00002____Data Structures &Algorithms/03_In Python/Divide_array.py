def divide_array(array, div):
    count = 0
    new_list = list()

    for i in range(len(array) // div):
        new_list.append(array[count: count + div])
        print(new_list)
        count += div

    return new_list


array = [*range(1,17)]
print(divide_array(array, 4))
