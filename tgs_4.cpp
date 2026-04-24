#include <iostream>
using namespace std;

struct Node {
	int data;
	Node * next;
}; 

void tambahAkhir(Node *& head, int nilai) {
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

void tambahDepan(Node *& head, int nilai) {
	Node* baru = new Node();
	baru->data = nilai;
	baru->next = head;
	head = baru;
	
}

void tampil(Node * head) {
    Node * temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
	Node * head = NULL;
	int n, nilai;
	
	cout << "Masukan Jumlah Data: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cout << "Masukan Data ke-" << i << ": ";
		cin >> nilai;
		tambahAkhir(head, nilai);
	}
	
	int dataBaru;
	cout << "\nMasukan Data Yang Di Tambahkan Di Awal: ";
	cin >> dataBaru;
	
	tambahDepan(head, dataBaru);
	
	cout << "\nData Setelah Ditambah DiAwal: \n";
	tampil(head);
	
	return 0;
}
