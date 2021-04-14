from math import *
import array as arr
k = 20
n = 1
i = 0
check = True

limit = sqrt(k)
p = [2,3,5,7,11,13,17,19,23]
a = [1] * k

while p[i] <= k:
    a[i] = 1
    if check:
        if p[i] <= limit:
            a[i] = floor(log(k)/log(p[i]))
        else:
            check = False
    n = int(n * (pow(p[i],a[i])))
    i = i+1
print("The smallest multiple is {}".format(n))

