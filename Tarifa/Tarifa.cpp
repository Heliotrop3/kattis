/*
 Tyler Huffman
 2020-03-08
 https://open.kattis.com/problems/tarifa
*/
#include <iostream>
using namespace std;

int main(){
	int x, n, total, temp;          // Declare four integer variables: one to hold the monthly MB allowance, one to hold the number of test cases, 
	                                // one to hold the value assuming no data was used, and one to read in how much data was used for a given month.
	cin >> x;                       // Read in the monthly allowance of data
	cin >> n;                       // Read in the number of test cases
	total = x * (n + 1);            // Find the total data avaliable for next month assuming no data was used
	
	for (int x = 0; x < n; x +=1){  // Recycle x and use it to iterate to the final test case 
		cin >> temp;                // Read in the amount of data consumed on x month
		total -= temp;              // Update the amount of MB avaliable for next month
	}
	cout << total << endl;
	
	return 0;
}
