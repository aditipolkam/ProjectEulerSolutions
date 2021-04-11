def isPalindrome(num):
    a, b, temp = 0, num, 0;
    while(num > 0):
        a = num % 10
        num //= 10
        temp = temp * 10 + a
    if temp == b:
        return True
    else:
        return False

def check():
    pal = 0
    n1 = 0
    n2 = 0
    for i in range(999, 100, -1):
        for j in range(999, 100, -1):
            product = i * j
            if(isPalindrome(product) == True):
                if product > pal :
                    pal = product
                    n1 = i
                    n2 = j
    print("The largest palindrome product of two 3 digit numbers is {}, obtained from {}*{}".format(pal,n1,n2))

check()
