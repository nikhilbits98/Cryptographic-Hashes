#include"crypt.cpp"

int main() {
	int i = 0;
	List* array = createTable();
	
	string t1 = "abcd";
	insert(array, "abcd", t1);
	insert(array, "efdgs", "24334g");
	insert(array, "dgsgs", "3efsdf");
	insert(array, "sfse", "1sdfs");
	insert(array,"fw4rw","234ds");
  	
	display(array);

	return 0;
}