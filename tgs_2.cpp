#include <iostream>
using namespace std;

struct Node {
	int data;
	Node * next;
	Node * prev;
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
		baru->prev = temp;
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
	
	cout << "\nTampil Maju " << endl;
	
	while (temp != NULL) {
		cout << "Data ke- " << i << ": " << temp->data << endl;
		
		if (temp->data > max) {
			max = temp->data;
		}
		temp = temp->next;
		i++;
	}
	cout << "\nNilai Terbesar Adalah " << max << endl;
}

void tampilMundur(Node* head) {

    if (head == NULL) {
        return;
    }

    Node* temp = head;

    // Menuju node terakhir
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
	
	tampilDanMax(head);
	tampilMundur(head);
	
	return 0;
}
