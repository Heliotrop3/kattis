/*
 Tyler Huffman
 2020-08-23
 https://open.kattis.com/problems/server
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int tasks, time, counter,temp;
	
	scanf("%d %d", &tasks, &time);
	getchar();
	counter = tasks;
	while(counter--){
		scanf("%d", &temp);
		time -= temp;
		if(time < 0){
			printf("%d",tasks - counter - 1);
			return 0;
		}
	}
	printf("%d", tasks);
	return 0;
}