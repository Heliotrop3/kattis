/*
 Tyler Huffman
 2020-03-09
 https://open.kattis.com/problems/aaah
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	string j,d;                                      // Create two strings, one to hold J's vocal capability and the other to hold the Dr.'s expectation 
	cin >> j >> d;                                   // Grab the inputs
	cout << ((j.size() < d.size() ? "no" : "go"));   // If J is unable to meet/exceed the Dr.'s expectation then he is a no go, otherwise he should go
	
	return 0;
}
