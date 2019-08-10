#Stacks using lists
from exc import Empty
class ArrayStack:
	def __init__(self):
		self._data=[]
	def _len(self):
		return len(self._data)
	def is_empty(self):
		return len(self._data)==0
	def push(self,n):
		self._data.append(n)
	def pop(self):
		if self.is_empty():
			raise Empty("Stack is Empty!")
		return self._data.pop()
	def top(self):
		if self.is_empty():
			raise Empty("Stack is Empty!")
		return self._data[-1]
a=ArrayStack()
a.push(10)
a.push(20)
print(a.pop())
a.push(11)
a.push(12)
print(a.pop())
print(a.pop())

