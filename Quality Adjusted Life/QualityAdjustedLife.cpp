/*
 Tyler Huffman
 2020-08-08
 https://open.kattis.com/problems/qaly
*/
#include <iostream>
using namespace std;

int main(){
	int counter;       // Stores the number of cases
	float total = 0.0; // Holds the sum of the products
	float temp1;       // Holds the first number
	float temp2;       // Holds the second number
	
	cin >> counter;    // Grab the number of iterations
	// Use the counter to iterate through the list of inputs
	for (counter; counter > 0; counter -= 1){ 
		cin >> temp1;             // Grab the quality
		cin >> temp2;             // Grab the years at said quality
		total += (temp1 * temp2); // Add the product of the years and quality to the total score 
		}
	cout << total << endl; // Display the total quality
	return 0;}
