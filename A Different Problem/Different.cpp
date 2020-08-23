/*
 Tyler Huffman
 2020-08-23
https://open.kattis.com/problems/different
*/
#include <iostream>
#include <bits/stdc++.h> 
#include <stdlib.h>     /* abs */

int main(){
	// Upper limit is 10^15
	long long int n,x;
	
	// Create a string to contain the result of getline()
	std::string line;
	
	// Grab a line from the cin buffer
	while(!getline(std::cin, line).eof())
	{
		// Throw the string into a seperate stream
		std::istringstream iss(line, std::istringstream::in);
		
		// Grab the info from the string stream
		iss >> n >> x;
		// Spit out the abs value of the difference
		std::cout << abs(n-x) << std::endl;	
	}
	
	return 0;
}