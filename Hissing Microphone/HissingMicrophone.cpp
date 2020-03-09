/*
 Tyler Huffman
 2020-03-08
 https://open.kattis.com/problems/hissingmicrophone
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;                                                     // Create a string to hold the input 
	cin >> s;                                                     // Grab the input
	cout << ((s.find("ss") > 28) ? "no hiss" : "hiss") << endl;   // If the index returned is greater than 28 then "ss" does not occur
	
	return 0;
}
