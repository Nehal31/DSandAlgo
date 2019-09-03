class LinkList:

	def __init__(self):
		self.head = None
		
	def addToLast(self, nn):
		if(self.head == None):
			self.head = nn
		else:
			temp = self.head
			while(temp.next != None):
				temp = temp.next
			temp.next = nn
				
	def display(self):
		temp = self.head
		while(temp != None):
			print(temp.data)
			temp = temp.next

class Node:

	def __init__(self, data):
		self.data = data;
		self.next = None;


def main():
	ll = LinkList()
	nn = Node(10)
	ll.addToLast(nn)
	ll.addToLast(Node(20))
	ll.display()

if __name__ == '__main__':
	main()
