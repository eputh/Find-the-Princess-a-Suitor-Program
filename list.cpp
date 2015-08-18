//
// Name: Emily Puth
// ID: 28239807
//

#include "list.h"
#include <exception>
#include <iostream>

// Constructors
template<class T>
List<T>::List() {
	size = 0;
}

// Accessors

// throws ElementNotFoundException if the index is invalid
// throws EmptyListException if the list is empty
template<class T>
T List<T>::get(int i) throw (ElementNotFoundException, EmptyListException) {
	if (i >= 10) throw ElementNotFoundException();
	if (size == 0) throw EmptyListException();
	return arr[i];
}

// throws EmptyListException if the list is empty
template<class T>
T List<T>::first() throw (EmptyListException) {
	if (size == 0) throw EmptyListException();
	return arr[0];
}

// throws EmptyListException if the list is empty
template<class T>
T List<T>::last() throw (EmptyListException) {
	if (size == 0) throw EmptyListException();
	return arr[size-1];
}

// Mutators

// throws FullListException if the list is full
template<class T>
void List<T>::insert(T item) throw (FullListException) {
	if (size == 10) throw FullListException();
	arr[size] = item;
	size++;
}


// throws ElementNotFoundException if the index is invalid
template<class T>
void List<T>::remove(int i) throw (ElementNotFoundException) {
	if (i >= 10) throw ElementNotFoundException();
	if (i < (size-1)) // i is not the last element in the array
		for (int m = i; m<size; m++) 
			arr[m] = arr[m+1];
	else {arr[size-1] = '\0';}
	size--;
}

// Other functions
template<class T>
bool List<T>::isEmpty() {
	return size==0;
}

template class List<int>;
template class List <std::string>;
template class List<float>;
template class List<double>;
