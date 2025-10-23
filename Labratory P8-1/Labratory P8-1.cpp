#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str);
int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	int count = countCharacter(str);
	cout << "The number of characters in the string is: " << count << endl;
	return 0;
}
int countCharacter(string str) {
	return str.length();
}
