/*
 Tyler Huffman
 2020-08-08
 https://open.kattis.com/problems/twostones
*/
#include <iostream>

int main(){
	// Create integer to hold input
	int value = 0;
	// Grab input
	std::cin >> value;
	// If the number is divisible by 2 display Bob otherwise display Alice
	(std::cout << (( value % 2 == 0) ? "Bob" : "Alice"));
	return 0;
}
