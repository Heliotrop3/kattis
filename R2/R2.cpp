/*
 Tyler Huffman
 2020-03-08
 https://open.kattis.com/problems/r2
*/
#include <iostream>
using namespace std;

int main(){
	int r1,s;                      // Create the integer variables to hold R1 and S respectively
	cin >> r1 >> s;                // Read in R1 and S
	cout << ((2*s) - r1) << endl;  // S=(R1 + R2)/2 => R2 = ((2 * S)-R1). Plug in R1 and S to solve for R2
	
	return 0;
}
