# this is to get the greatest common divisor between two numbers
while 1 :
    def gcd(m,n):
        mod = m % n
        if mod == 0 :
             print("The GCD is :",n)
        elif mod != 0 :
            temp = n
            n = mod
            m = temp
            gcd(m,n) # this is Recursion // A function that call itself

    print("Enter the two numbers for them  you want to get the gcd ")
    m = int(input("Number 1 : "))
    n = int(input("Number 2 : "))
    gcd(m,n)