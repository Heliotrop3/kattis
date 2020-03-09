/*
 Tyler Huffman
 2020-03-09
 https://open.kattis.com/problems/humancannonball2
*/
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
	int cases;                                                              // Create an int var to hold the number of cases to be dealt with
	float velocity, theta, distance, staglagmite, stalactite, y;            // Create float vars to hold the initial data
	cin >> cases;                                                           // Initialize the int var cases
	for (cases; cases > 0; cases -= 1){                                     // Iterate over the input buffer casese number of times
		cin >> velocity >> theta >> distance >> staglagmite >> stalactite;  // Grab the initial data
		/*
		   I wouldn't generally recommended slamming everything altogether like this, doesn't make for a pleasant read, but it does make for compact code. Lets unpack the what and why.
		   
		   Here is what we are given:
		        x(t) = velocity * time * cos(theta)
		        y(t) = velocity * time * sin(theta) - 0.5 * g * (time^2)
		        g = 9.81
			Additionally we always know velocity, theta, x (aka distance), stalagmite, and stalactite (Stalagmites grow up from the ground and stalactites grow down from the ceiling)
		    
		    We are tasked with finding y(t). Our solution is as follows:
		    
		    1.) Convert from degrees to radians
			One of the worst feelings is performing the right calculations with the wrong units. Your logic could be on point but if you try solving using degrees
			you're going to get the wrong answer.
			
			theta_rad = (theta_deg * pi)/180
		    
		    2.) Solve for time
		    Both x and y are functions of time; if we solve for one of the two we can find the other. Since we always know x, velocity, and theta we can use algebra to manipulate x(t) and isolate time:
		    	x(t) = velocity * time * cos(theta)   --->   time = x(t)/(velocity * cos(theta))
		    	
			3.) Plug and solve
			All the puzzle pieces are in place and now all we have to do is put them together and solve. 
			y(t) changes from
				y(t) = velocity * time * sin(theta) - 0.5 * g * (time^2)
			to
				y(t) = velocity * (x(t)/(velocity * cos(theta_rad))) * sin(theta_rad) - 0.5 * g * ((x(t)/(velocity * cos(theta_rad)))^2)
		*/
		y = (velocity * (distance / (velocity * cos((theta * M_PI)/180))) * sin((theta * M_PI)/180)) - (0.5 * 9.81 * pow((distance / (velocity * cos((theta * M_PI)/180))),2));
		
		if (y >= staglagmite + 1 && y <= stalactite - 1){  // If the height of the individual has a 1m room for error above and below then the stunt is safe
			cout <<"Safe" << endl;
		}
		else{
			cout << "Not Safe" << endl;
		}
	}
	return 0;
	}
