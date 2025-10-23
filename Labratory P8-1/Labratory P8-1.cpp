#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);
int main() {
	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str=="Q" || str=="q") {
			break;
		}
		int count = countVowel(str);
		cout << "Vowel count: " << count << endl;
	}
}
int countVowel(string str) {
	int count = 0;
	string vowels = "aeiouAEIOU";
	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < vowels.length(); j++) {
			if (str[i] == vowels[j]) {
				count++;
			}
		}
	}
	return count;
}
