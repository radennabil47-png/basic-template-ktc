#include <iostream>
using namespace std;

struct Node {
	int data;
	Node * next;
}; 

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

void tampilDanMax(Node * head) {
	Node * temp = head;
	int i = 1;
	
	if (head == NULL) {
		cout << "Data Kosong! " << endl;
		return;
	}
	
	int max = head->data;
	
	while (temp != NULL) {
		cout << "Data ke- " << i << ": " << temp->data << endl;
		
		if (temp->data > max) {
			max = temp->data;
		}
		temp = temp->next;
		i++;
	}
	cout << "Terbesar Adalah: " << max << endl;
}

int main() {
	Node * head = NULL;
	
	tambah(head, 10);
	tambah(head, 20);
	tambah(head, 30);
	
	tampilDanMax(head);
	
	return 0;
}
