/*
 Tyler Huffman
 2020-03-08
 https://open.kattis.com/problems/autori
*/
#include <iostream>
#include <string>
#include <algorithm>    // std::remove_if
using namespace std;

int isNotAlnum(char c){  // Input : char
	return !isalnum(c);  // Return: whether the char is alphanumeric
}

int main(){
	string name;                                                               // Create a string to hold the result
	getline(cin,name);                                                         // Grab the name
	name.erase(remove_if(name.begin(), name.end(), ::islower), name.end());    // Remove all non-uppercase letters
	                                                                           // Source: https://stackoverflow.com/questions/6319872/how-to-strip-all-non-alphanumeric-characters-from-a-string-in-c
	                                                                           // Source: https://stackoverflow.com/questions/8364678/g-string-remove-if-error
	name.erase(remove_if(name.begin(), name.end(), isNotAlnum), name.end());   // Remove all non-alphanumeric chars
	                    													   // http://blog.fourthwoods.com/2013/12/10/replace-non-alphanumeric-characters-in-a-c-string/
	cout << name << endl;
	return 0;
}
