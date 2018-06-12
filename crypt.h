#include<iostream>
#include<string>
#include<malloc.h>

using namespace std;

typedef struct LinkedList* List;
typedef struct node* Node;
struct node {
	string str;
	Node next;
};

struct LinkedList {
	Node head;
	unsigned int hashV;
	unsigned int size;
};

const unsigned int table_size = 97; // Prime number

unsigned int hashF(string input);
Node createNode();
List createList(unsigned int index);
List* createTable();
void display(List* array);
List* insert(List* array, string input, string userN);


