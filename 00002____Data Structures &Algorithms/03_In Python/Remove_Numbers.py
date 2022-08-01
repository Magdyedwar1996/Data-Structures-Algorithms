My_List = ['pyt945hon', 'Mag2340dy', 'me2addfk293432498343dfs', 'ed20d2s3']
Numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']


def Remove_Numbers(mylist):

    for i in range(len(mylist)):
        string = ''
        for j in range(len(mylist[i])):
            if mylist[i][j] in Numbers:
                continue
            else:
                string = string + ''.join(mylist[i][j])
        mylist[i] = string

    return mylist


print(Remove_Numbers(My_List))
