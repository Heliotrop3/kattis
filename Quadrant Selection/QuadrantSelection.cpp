/*
 Tyler Huffman
 2020-03-08
 https://open.kattis.com/problems/quadrant
*/
#include <iostream>
using namespace std;

int main(){
	int x,y;   // Initialize integers to hold coords
	cin >> x;  // Grab the x-coord
	cin >> y;  // Grab the y-coord
	cout << ((x > 0) ? (y > 0) ? "1": "4" : (y < 0) ? "3" : "2"); //Condense the if/else statement into a ternary
		
	return 0;
}

