#include"crypt.cpp"

void main() {
	int i = 0;
	List* array = createTable();
	cout << i++ << endl;
	string t1 = "abc";
	cout << i++ << endl;
	insert(array, "abcd", t1);
	cout << i++ << endl;
	insert(array, "efdgs", "23hfh");
	cout << i++ << endl;
	insert(array, "dgsgs", "3567");
	cout << i++ << endl;
	insert(array, "sfse", "1232");
	cout << i++ << endl;
	insert(array, "a", "212");
	cout << i++ << endl;
	display(array);
}