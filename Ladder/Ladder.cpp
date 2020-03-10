/*
 Tyler Huffman
 2020-03-09
 https://open.kattis.com/problems/ladder
*/
#include <bits/stdc++.h>
#include <math.h>         //std::ceil
using namespace std;

int main(){
	
	int h,theta;                                       // Declare variables for the height and angle
	cin >> h >> theta;                                 // Grab the height and angle
	printf("%.0f\n", ceil(h/sin((theta*M_PI)/180)) );  // Convert to radians and output the answer rounded up to the nearest integer
	
	return 0;
}
