#Implementing queue's in python
from exc import Empty
class ArrayQueue:
	def __init__(self):
		self._data=[]
		self._front=0
		self._rear=0

	def length(self):
		return len(self._data)

	def is_empty(self):
		return self._front and self._rear == 0

	def enque(self,n):
		self._data.append(n)
		self._rear+=1

	def deque(self):
		if self.is_empty():
			raise Empty("Queue is Empty!")
			pass

		
		val=self._data[self._front]
		self._data[self._front]=None
		self._front+=1
		
		return val

	def display(self):
		print "Queue:  ",self._data
		print "length: ",len(self._data)

q=ArrayQueue()
q.enque(1)
q.enque(2)
q.enque(3)
q.enque(4)
q.enque(5)
q.display()
print(q.deque())
q.display()
print(q.deque())
q.display()
print(q.deque())
q.display()
print(q.deque())
q.display()
print(q.deque())
q.display()
print(q.length())