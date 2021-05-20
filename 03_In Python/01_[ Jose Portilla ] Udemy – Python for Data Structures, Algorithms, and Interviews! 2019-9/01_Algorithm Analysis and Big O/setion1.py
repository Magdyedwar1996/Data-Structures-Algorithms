# Big O Constant
def func_constant(values):
    print(values[0])
func_constant([1, 2, 3])
###########################################
print("#"*70)
###########################################
# Big O (Linear Time )
def func_lin(lst):
    for val in lst:
        print (val)
func_lin([1, 2, 3])
###########################################
print("#"*70)
###########################################
# Big O(n^2) Quadratic
def func_quad(lst):
    for item_1 in lst:
        for item_2 in lst:
            print(item_1, item_2)
My_list = [0, 1, 2, 3]
func_quad(My_list)