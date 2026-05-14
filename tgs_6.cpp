#include<iostream>
#include<sstream>
using namespace std;

struct Node{
	string data;
	Node *next;
};

Node *top=NULL;

void push(string next){
	Node *baru = new Node();
	baru->data = next;
	baru->next = top;
	top = baru;
}

void pop(){
	Node *temp = top;
	cout << endl << endl;
	
	while(temp != NULL){
		cout << temp->data <<"";
		temp = temp->next;
	}
	cout << endl << endl;
}

int main(){
	string text;
	int pilihan;
	bool berhenti = false;
	
	do{
		cout << "===PROGRAM PILIHAN===\n";
		cout << "1.ketik text\n";
		cout << "2.undo\n";
		cout << "3.tampil dokumen\n";
		cout << "4.keluar\n";
		cout << "pilihan :";
		cin >> pilihan;
		cin.ignore();
		
		if(pilihan == 1){
			getline(cin, text);
			stringstream ss(text);
			
			string kalimat;
			
			while(ss >> kalimat){
				push(kalimat);
			}
			
		}else if(pilihan == 2){
			pop();
		}else if(pilihan == 3){
			pop();
	    }else if(pilihan == 4){
	    	cout << "program berhenti!\n";
			berhenti = true;
		}else{
			return 0;
		}
	}
	while(!berhenti);
}
