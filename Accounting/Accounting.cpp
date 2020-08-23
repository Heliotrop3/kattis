/*
 Tyler Huffman
 2020-08-23
https://open.kattis.com/problems/bokforing
*/
#include <bits/stdc++.h>
#include <string>
#include <map>


int main(){

	int people, events, value, eventID;
	std::string eventName;
	std::string id;
	
	std::cin >> people >> events;
	
	std::map<std::string,int> ledger;
	std::map<std::string,int> eventIDs;

	eventIDs["SET"] = 1;
	eventIDs["PRINT"] = 2;
	eventIDs["RESTART"] = 3;
	
	
	while(events--){
		std::cin >> eventName;
		eventID = eventIDs[eventName];
		
		switch(eventID){
			
			case 1:
				std::cin >> id >> value;
				ledger[id] = value;
				break;
			
			case 2:
				// Read in the id
				std::cin >> id;
				
			
				// If they're not in the ledger then they have the default value
				if(ledger.find(id) != ledger.end()){
					std::cout << ledger[id] << std::endl;
				}
				else{
					std::cout << ledger["Default"] << std::endl;
				}
				break;
			
			case 3:
				// Wipe the ledger clean
				ledger.clear();
				// Grab the value
				std::cin >> value;
				// Level the playing field
				ledger["Default"] = value;
				break;
		}		
	}
	return 0;
}