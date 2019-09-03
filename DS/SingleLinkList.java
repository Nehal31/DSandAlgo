class LinkList{
	Node head;
	public void addToLast(Node nn){
			if(head == null){
				head = nn;
			}
			else{
				Node temp = head;
				while(temp.next != null){
					temp = temp.next;
				}
				temp.next = nn;
			}
		}
	public void display(){
		Node temp = head;
		while(temp != null){
			System.out.println(temp.data);
			temp = temp.next;
		}
	}
}

class Node{
	int data;
	Node next;
	Node(int data){
		this.data = data;
	}
}

class SingleLinkList{
	public static void main(String args[]){
	LinkList ll = new LinkList();
	Node nn = new Node(10);

	ll.addToLast(nn);
	ll.addToLast(new Node(20));
	ll.display();
	
	}
}
