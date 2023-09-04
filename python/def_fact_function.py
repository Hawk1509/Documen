#To find the factorial of a number by using function
def factorial(n):
    s=1
    a=0
    for i in range(1,n+1):
        s=s*i
    print("factorial: ",s)
a=int(input("Enter number: "))
factorial(a)