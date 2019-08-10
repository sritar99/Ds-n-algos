#Binary search prorgram in python 

def binary(lst,key):
	f,c=0,0
	l=len(lst)
	k=(f+l)//2
	while f<=l:
		if key ==lst[k]:
			c=1
			print("Key Element found at position :",k)
			break
		else:
			if key < lst[k]:
				l=k-1
			else:
				f=k+1
		k=(f+l)//2

	if c==0:
		print("Key Element not Found!")


s=input("Enter elements with comma seperated : ")
lst=[int(x) for x in s.split(",")]
key=int(input("Enter key element to find: "))
lst.sort()
print("Sorted list: ",lst)

binary(lst,key)