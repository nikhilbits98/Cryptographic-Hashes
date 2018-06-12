#include"crypt.h"
using namespace std;

Node createNode() {
	//Node newst = (Node)malloc(sizeof(struct node));
	Node newst = new node();
	newst->next = NULL;
	return newst;
}

List createList(unsigned int index) {
	List news = (List)malloc(sizeof(struct LinkedList));
	news->head = NULL;
	news->hashV = index;
	news->size = 0;
	return news;
}

unsigned int hashF(string input) {
	
	//Prime Number
	unsigned int Magic = 54059;
	unsigned int startVal = 39; //Constant starting value for hash value
	unsigned int Hash = startVal; 

	for (int i = 0; i < input.length(); i++) {
		Hash = Hash ^ (input[i]);
		Hash = Hash * Magic;
	}

	return (Hash % table_size);
}

List* createTable() {
	List* arrays = (List*)malloc(sizeof(List) * table_size);
	for (unsigned int i = 0; i < table_size; i++) {
		arrays[i] = createList(i);
	}
	return arrays;
}

List* insert(List* array,string input, string userN) {
	unsigned int index = hashF(input);
	cout << "Insert\n";
	if (array[index]->head == NULL) {
		array[index]->head = createNode();
		array[index]->head->next = NULL;
		array[index]->head->str = userN;
	}
	else {
		/*Node temp = array[index]->head;
		array[index]->head = createNode();
		array[index]->head->next = temp;
		array[index]->head->str = userN;
		*/
		Node temp = createNode();
		temp->next = array[index]->head;
		array[index]->head = temp;
		array[index]->head->str = userN;		
		
	}
	array[index]->size++;
	cout << "InsertEnd\n";
	return array;
}

void display(List* array) {
	cout << "\nHashTable:::\n";
	for (int i = 0; i < table_size; i++) {
		cout << "Index "<<i << " :";
		Node it = array[i]->head;
		for (int j = 0; j < array[i]->size; j++) {
			cout << " -> ";
			cout << it->str;
			it = it->next;
		}
		cout << endl;
	}
}







