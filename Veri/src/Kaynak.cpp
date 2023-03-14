/**
* @file /src/Kaynak.cpp
* @description Test fonksiyonlarýný çalýþtýrýr.
* @course 1. Öðretim - A GRUBU
* @assignment Ödev 1
* @date 12.08.2021
* @author Medina Nilay Bezirci
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include "FileOperations.hpp"
#include "ListOperations.hpp"

using namespace std;

int main() {
	string fileName = "doc\\sayi.txt";
	FileOperations fileOps(fileName);
	ListOperations listOps(fileOps.createElements());
	
	listOps.createLists();
	listOps.compareLists();

	listOps.printResultNumbers();
}
