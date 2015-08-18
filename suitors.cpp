//
// Name: Emily Puth
// ID: 28239807
//
// The Suitors Program uses the List class to
// determine w hich position you should stand in to marry
// the princess if there are n suitors (n <= 10)

#include "list.h"
#include "suitors.h"
#include <iostream>


void printSuitorPositions(List<int> positions, int suitorsLeft) {
	std::cout << "   ";
	for (int i=0; i<suitorsLeft; i++) std::cout << positions.get(i);
	std::cout << "\n";
}


int findWinningPosition(int numSuitors) {
	List<int> l;
	for (int i=0; i<numSuitors; i++)
		l.insert(i+1);
	
	int suitor = '\0';
	int suitorsLeft = numSuitors; int index = 0;
	while (suitor == '\0') {
		printSuitorPositions(l, suitorsLeft);

		if (suitorsLeft == 1) {suitor = l.first(); break;}
		else if (index < suitorsLeft-2) index += 2; // continuing index is at least 2 less than the number of suitors
		else if ((index == 2) && (suitorsLeft == 2)) index = 0; 
		else index = (index+2) - suitorsLeft; // index is too large, will need to continue looping back to beginning of list
		l.remove(index);
		suitorsLeft--;
	}
	return suitor;
}


std::string pickSuitor(List<std::string> suitors) {
	// find size of the list
	int size = 0; int i = 0;
	while(suitors.get(i) != "") {
		size++;
		i++;
	}
	
	// find position of the chosen suitor
	int winner = findWinningPosition(size);

	return suitors.get(winner-1);
}


int  main() {
	// List of 6 suitors
	List<std::string> suitors1; 
	suitors1.insert("Dino"); suitors1.insert("Buzz"); suitors1.insert("Cash");
	suitors1.insert("Kobe"); suitors1.insert("Spot"); suitors1.insert("Nibs");
	std::cout << "Testing from the list of suitors: ";
	for (int i=0; i<6; i++) std::cout << suitors1.get(i) << " ";
	std::cout << "\n";
	std::string winningSuitor1 = pickSuitor(suitors1);
	std::cout << "Winning Suitor: " << winningSuitor1 << std::endl;

	// List of 7 suitors
	List<std::string> suitors2;
	suitors2.insert("Ben"); suitors2.insert("Max"); suitors2.insert("Earl");
	suitors2.insert("Milo"); suitors2.insert("Pete"); suitors2.insert("Ray");
	suitors2.insert("Jim");
	std::cout << "\n\nTesting from the list of suitors: ";
	for (int i=0; i<7; i++) std::cout << suitors2.get(i) << " ";
	std::cout << "\n";
	std::string winningSuitor2 = pickSuitor(suitors2);
	std::cout << "Winning Suitor: " << winningSuitor2 << std::endl;
	
	return 0;
}
