//link list c++
#include<iostream>
using namespace std;

//generic programe

class node{
	public:
	//data
	int data;
	//pointerptr to the next node
	node * next;
	
	node (){
		next = NULL; //by defult null
	}
};
class linkedlist{
	public:
	node* head;
	linkedlist (){
		head = NULL;// here head point to nothing
	}
	//insert function
	void insert (int a){
		// to creat a new node
		node * temp = new node;
		temp->data = a;
		
		
		if (head == NULL){
			head = temp ; //because linklist is empty
		}
		else {
			node * current = head;
			while (current->next != NULL){
				current = current->next;
			}
			current->next = temp;// it will move till end of list
		}
		
		
		
	}
		
		
		
		
		//now insertAt function= by this we can insert at any position of linklisrt
		
		
		
		void insertAt (int pos, int data) {
		node * current = head;
		int i = 1;
		while(i<pos-1){
			current = current-> next;
			i++;
		}
		node * temp= new node;
		temp->data = data;
		
		if(head == NULL){
			head = temp;
		}
		else {
			temp->next = current-> next;
			current->next = temp;
		}
	}
	//for delete function
	void del(){
		node * current = head;
		node * temp;
		
		if (head == NULL){}
			//there is nothing to delete
		if (head->next == NULL){
		head = NULL;//one node present that will get delete
		}
		else{
			while(current->next->next != NULL){
				current = current->next;
			}
		}
		
		temp = current->next;
		current->next = NULL;
		delete temp;
	}
	

//to delete from a specific position we will use deleteAt
void deleteAt(int pos){
	node * current = head;
	node * temp;
	
	if (head== NULL){}
	if (head->next == NULL){
		head = NULL;
	}
	else {
		int i=1;
		while(i< pos-1){
			current = current->next;
			i++;//till it reach the position before pos to be deleted
		}
	}
	temp = current->next;//this is the node to be deleted let be3
	current->next = temp->next; //new link formation bet 2 and 4
	temp->next = NULL;//making 3 to point to NULL
	delete temp;
}// function count item
void countItem(){
	int count = 0;
	node * current = head;
	while(current != NULL){
		count ++;
		current = current->next;
	}
	cout<< "number of nodes in the link list is "<<count<< endl;
}

//defining print function
void display(){
	node * current;
	current = head;
	
	while(current != NULL){
		cout << current->data << "->";
	    current = current->next;
	}
	cout<< "NULL"<< endl;
}
};

int main(){
	linkedlist l1;
	cout<<"adding nodes in the link list with values" <<endl;
	l1.insert(1);
	l1.insert(2);
	l1.insert(7);
	l1.insert(9);
	l1.insert(2);
	l1.insert(5);
	l1.display();
	cout<<"Inserting value 3 at position 2 & value 4 at position 3"<<endl;
	l1.insertAt(2,3);
	l1.insertAt(3,4);
	l1.display();
	cout << "deleting last elemet oflist"<<endl;
	l1.del();
	l1.display();
	cout << "deleting element at positon 2"<<endl;
	l1.deleteAt(2);
	l1.display();
	l1.countItem();
	
	return 0;
}



		

		
	
