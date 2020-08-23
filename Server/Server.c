/*
 Tyler Huffman
 2020-08-23
 https://open.kattis.com/problems/server
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int tasks, time, counter,temp;
	// Read in the number of tasks and the amount of time
	scanf("%d %d", &tasks, &time);
	getchar();
	
	counter = tasks;
	
	// Complete as many tasks possible
	while(counter--){
		// Read in the time for the task
		scanf("%d", &temp);
		
		// Update the time remaining for the server
		time -= temp;
		
		// Condition which the server has run out of time to execute tasks 
		if(time < 0){
			printf("%d",tasks - counter - 1);
			return 0;
		}
	}
	// If the condition is never met than the server is able to execute all tasks
	printf("%d", tasks);
	return 0;
}