import math as m
num = 600851475143;
i = 2;
while(i <= m.sqrt(num)):
        if(num%i == 0):
                while(num%i==0):
                        num/=i
                if(num == 1):
                        num=i
                        break
        else:
                i+=1
print(num)
