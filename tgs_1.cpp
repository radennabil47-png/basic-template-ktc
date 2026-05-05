#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node *prev;
};

void tambah (Node *& head, int nilai) {
	Node* baru = new Node();
	
	baru->data = nilai;
	baru->next = NULL;
	baru->prev = NULL;
	
	if (head == NULL) {
		head = baru;
		
	} else {
		Node *temp = head;
		
		while (temp->next != NULL) {
			temp = temp->next;
		} 
		temp->next = baru;
		baru->prev = temp;
	}
}

void tampilMaju(Node *head) {
	Node *temp = head;
	int i = 1;
	
	cout << "\ntampil maju " << endl; 
	
	while (temp != NULL) {
		cout <<"Data ke- " << i << ": " << temp->data << endl;
		temp = temp->next;
		i++;
	}
}

void tampilMundur(Node *head) {
	Node *temp = head;
	
	while (temp->next != NULL) {
		temp = temp->next;
	}
	cout <<"\ntampil mundur " << endl;
	
	while (temp != NULL) {
		cout << temp->data << endl;
		temp = temp->prev;
	}
}
int main() {
	Node* head = NULL;
	
	tambah(head, 10);
	tambah(head, 20);
	tambah(head, 30);
	
	tampilMaju(head);
	tampilMundur(head);

	return 0;
}
