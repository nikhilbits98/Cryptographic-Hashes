#include<stdlib>
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
};

int hashF(string input);
Node createNode(string in);
List createList(int index);
unsigned int hashF(string input);


