/*
 Tyler Huffman
 2020-03-08
 https://open.kattis.com/problems/timeloop
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;     // Holds the number of times we need to print our string
	cin >> t;  // Grab said number 
	
	// Iterate from 0 to t and print the number of times we have said the spell, including the current invocation, along with the spell
	for (int a = 0; a < t; a += 1){
		cout << a + 1 << " Abracadabra" << endl;
	}
	
	return 0;
}
