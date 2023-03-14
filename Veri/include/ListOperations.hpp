/**
* @file /include/ListOperations.hpp
* @description Liste i�lemlerini ger�ekle�tirir.
* @course 1. ��retim - A GRUBU
* @assignment �dev 1
* @date 12.08.2021
* @author Medina Nilay Bezirci
*/
#ifndef LISTOPERATIONS_HPP
#define LISTOPERATIONS_HPP

#include <iostream>
#include "Liste.hpp"

using namespace std;

class ListOperations {
private:
	LinkedList* lists;
	string elements;
	string convertListToNumber(LinkedList list);
public:
	ListOperations(string elements);

	void createLists();
	void compareLists();
	void printResultNumbers();
};

#endif