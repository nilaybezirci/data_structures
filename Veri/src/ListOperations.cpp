/**
* @file /src/ListOperations.cpp
* @description Liste iþlemlerini gerçekleþtirir.
* @course 1. Öðretim - A GRUBU
* @assignment Ödev 1
* @date 12.08.2021
* @author Medina Nilay Bezirci
*/
#include "ListOperations.hpp"
#include <sstream>

string ListOperations::convertListToNumber(LinkedList list)
{
	string number;

	for (int i = 0; i < list.size(); i++)
	{
		number += to_string(list.at(i)->key);
	}

	return number;
}

ListOperations::ListOperations(string elements)
{
	this->elements = elements;
}

void ListOperations::createLists()
{
	stringstream ss(elements);

	int temp, cnt = 0;

	int size = elements.size() / 4;
	int* arr = new int[size];

	LinkedList list1;
	LinkedList list2;
	lists = new LinkedList[2];

	while (ss >> temp) {
		arr[cnt] = temp;
		cnt++;
	}

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2) {
			list1.push(arr[i]);
		}
		else {
			list2.push(arr[i]);
		}
	}

	lists[0] = list1;
	lists[1] = list2;
}

void ListOperations::compareLists()
{
	int size = 0;

	if (lists[0].size() == lists[1].size()) {
		size = lists[0].size();
	}
	else return;

	for (int i = 0; i <= size - 1; i++)
	{
		if (lists[0].at(i)->key > lists[1].at(i)->key) {
			lists[0].reverse();
		}
		else if (lists[0].at(i)->key == lists[1].at(i)->key) {
			lists[1].reverse();
		}
		else if (lists[1].at(i)->key > lists[0].at(i)->key) {
			Node* A = lists[0].at(i);
			Node* B = lists[1].at(i);
			Node* temp = new Node();

			temp->next = B->next;
			temp->prev = B->prev;

			B->next = A->next;
			B->prev = A->prev;

			if (A->next != NULL) {
				A->next->prev = B;
			}
			if (B->prev != NULL) {
				A->prev->next = B;
			}

			A->prev = temp->prev;
			A->next = temp->next;

			if (temp->next != NULL) {
				temp->next->prev = A;
			}
			if (temp->prev != NULL) {
				temp->prev->next = A;
			}
		}
	}
}

void ListOperations::printResultNumbers()
{
	cout << "Sayi 1: " << convertListToNumber(lists[0]) << endl;
	cout << "Sayi 2: " << convertListToNumber(lists[1]);
}
