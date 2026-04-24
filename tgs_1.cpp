#include <iostream>
using namespace std;


void tambah (Node *& head, int nilai) {
	Node* baru = new Node();
	baru->data = nilai;
	baru->next = NULL;
	
	if (head == NULL) {
		head = baru;
	} else {
		Node * temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		} 
		temp->next = baru;
	}
}

void tampil(Node * head) {
	Node * temp = head;
	int i = 1;
	int jumlah = 0;
	
	while (temp != NULL) {
		cout <<"Data ke- " << i << ": " << temp->data << endl;
		temp = temp->next;
		i++;
		jumlah++;
	}
	cout <<"Jumlah data: " << jumlah << endl;
}

int main() {
	Node* head = NULL;
	
	tambah(head, 10);
	tambah(head, 20);
	tambah(head, 30);
	
	tampil(head);
struct Node {
	int data;
	Node * next;
};

	return 0;
}
