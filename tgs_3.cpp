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

void tampilDanTotal(Node * head) {
	Node * temp = head;
	int i = 1;
	int total = 0;
	
	if (head == NULL) {
		cout << "Data Kosong! " << endl;
		return;
	}
	
		while (temp != NULL) {
		cout << "Data ke- " << i << ": " << temp->data << endl;
		
		total += temp->data;
		
		temp = temp->next;
		i++;
	}
	cout << "Total Nilai Adalah: " << total << endl;
}

int main() {
	Node * head = NULL;
	
	tambah(head, 10);
	tambah(head, 20);
	tambah(head, 30);
	
	tampilDanTotal(head);
	
	return 0;
}

