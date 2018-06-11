#include"crypt.h"

Node createNode(string input) {
	Node new = (Node)malloc(sizeof(struct node));
	new->next = NULL;
	new->str = input;
	return new;
}

List createList(unsigned int index) {
	List new = (List)malloc(sizeof(struct LinkedList));
	new->head = NULL;
	new->hashV = index;
	return new;
}

unsigned int hashF(string input) {
	
	//Prime Number
	unsigned int Magic = 54059;
	unsigned int startVal = 39; //Constant starting value for hash value
	unsigned int Hash = startVal; 

	for (int i = 0; i < input.lenght(); i++) {
		Hash = Hash ^ (input[i]);
		Hash = Hash * Magic;
	}

	return (Hash % 197);
}



