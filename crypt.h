#include<iostream>
#include<string>

using namespace std;

typedef struct node* Node;
struct node {
	string str;
	Node next;
};

typedef struct LinkedList* List;
struct LinkedList {
	Node head;
	unsigned int hashV;
	unsigned int size;
};

const unsigned int table_size = 3; // Prime number

unsigned int hashF(string input);
Node createNode(string input);
List createList(unsigned int index);
List* createTable();
void display(List* array);
List* insert(List* array, string input, string userN);


