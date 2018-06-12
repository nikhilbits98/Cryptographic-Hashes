#include"crypt.cpp"

int main() {
	int i = 0;
	List* array = createTable();
	//cout << i++ << endl;
	insert(array, "abcd", "Abc");
	//cout << i++ << endl;
	insert(array, "efdgs", "23hfh");
	//cout << i++ << endl;
	insert(array, "dgsgs", "3567");
	//cout << i++ << endl;
	insert(array, "sfse", "1232");
	//cout << i++ << endl;
  	//cout << i++ << endl;
	display(array);

	return 0;
}