#linear search program in python 
def linearsearch(lst,k):
	c=0
	for i in range(len(lst)):
		if k == lst[i]:
			print("key is found! at position: ",i)
			return True 
	c=1	
	if c==1:
		print("Key Not Found!")
	return 



s=raw_input("Enter elements using comma : ")
l=[int(x) for x in list(s.split(","))]
key=int(input("Enter key to search : "))
print(linearsearch(l,key))
	








		