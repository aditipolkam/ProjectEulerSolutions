sum,n1,n2,n3 = 0,0,1,2
limit = 4000000;
while(n3 < limit):
	n3 = n1 + n2;
	if(n3 % 2 == 0):
		sum+=n3
	n1 = n2
	n2 = n3
print("{} is the sum of even-valued terms.".format(sum))

