#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string input = "",
		   reverse = "";

	cout << "Enter a string: ";
	cin >> input;

	transform(input.begin(), input.end(), input.begin(), ::tolower);

	for (int i = input.length()-1; i >= 0; --i)
		reverse += input[i];

	cout << reverse << endl;;
//hiiiiii
//this is joanna
	return 0;
}
