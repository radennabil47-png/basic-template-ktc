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
		Node * temp = head;
		
		while (temp->next != NULL) {
			temp = temp->next;
		} 
		temp->next = baru;
		temp->prev = temp;
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
	
	cout << "Tampil Maju " << endl;
	
		while (temp != NULL) {
		cout << "Data ke- " << i << ": " << temp->data << endl;
		
		total += temp->data;
		temp = temp->next;
		i++;
	}
	cout << "Total Nilai Adalah: " << total << endl;
}

void tampilMundur(Node* head) {

    if (head == NULL) {
        return;
    }
    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    cout << "\nTampil Mundur " << endl;

    while (temp != NULL) {
    	cout << temp->data << endl;
    	temp = temp->prev;
    }
}
int main() {
	Node * head = NULL;
	
	tambah(head, 10);
	tambah(head, 20);
	tambah(head, 30);
	
	tampilDanTotal(head);
	tampilMundur(head);
	
	return 0;
}

