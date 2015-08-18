//
// Name: Emily Puth
// ID: 28239807
//
// The List program creates a generic list that
// can store any type (but only one type)

#ifndef LIST_H
#define LIST_H

#include "listExceptions.h"

template<class T>
class List{

	private:
		T arr[10]; // represents the actual list
		int size; // number of elements in the list

	public:
		// Constructor
		List();
	
		// Accessors
		T get(int i) throw (ElementNotFoundException, EmptyListException); // returns the element at the index i
		T first() throw (EmptyListException); // returns the element at index 0
		T last() throw (EmptyListException); // returns the element at index size-1
		
		// Mutators
		void insert(T item) throw (FullListException); // inserts the item at the end of the list
		void remove(int i) throw (ElementNotFoundException); // removes the element at index i

		// Other functions
		bool isEmpty(); // returns true if the list is empty, false otherwise
};


#endif
