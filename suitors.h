//
// Name: Emily Puth
// ID: 28239807
//
// The Suitors Program uses the List class to
// determine which position you should stand in to marry
// the princess if there are n suitors (n <= 10)

#ifndef SUITORS_H
#define SUITORS_H

#include "list.h"
#include <iostream>


// prints out the process of calculating the winning position
void printSuitorPositions(List<int> positions, int suitorsLeft);

// Takes n suitors
// returns the position of the list that you should stand in
int findWinningPosition(int numSuitors);

// Takes a list of names
// returns the name of the person who gets to marry the princess
std::string pickSuitor(List<std::string> suitors);


#endif
