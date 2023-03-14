/**
* @file /src/FileOperations.cpp
* @description Dosya iþlemlerini gerçekleþtirir.
* @course 1. Öðretim - A GRUBU
* @assignment Ödev 1
* @date 12.08.2021
* @author Medina Nilay Bezirci
*/
#include "FileOperations.hpp"
#include <fstream>
#include <sstream>

FileOperations::FileOperations(string fileName)
{
	this->fileName = fileName;
}

string FileOperations::createElements()
{
	fstream newFile(fileName);
	string numbers;
	string elements;

	if (newFile.is_open()) {
		newFile >> numbers;

		int cnt = 0;

		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] != '#') {
				if (cnt == 0 && numbers[i] == '0') {
					elements += '1';
				}
				else {
					elements += numbers[i];
				}
				cnt++;
			}

			if (i % 3 == 2 && i < numbers.size() / 2) {
				elements += ' ';
				cnt = 0;
			}
			if (i % 3 == 0 && i > numbers.size() / 2) {
				elements += ' ';
				cnt = 0;
			}
		}
	}
	else {
		cout << "File is not opened.";
	}
	return elements;
}

