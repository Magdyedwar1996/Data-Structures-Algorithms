N_Commands = int(input())
My_List = []
for i in range(N_Commands):
    s = input().split()
    cmd = s[0]
    #print(cmd)
    args = s[1:]
    if cmd !="print":
        cmd += "(" + ",".join(args) +")"
        #print(cmd)
        eval("My_List."+cmd)
        #print(cmd)
    else:
        print(My_List)