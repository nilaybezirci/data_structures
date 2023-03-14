/**
* @file /include/FileOperations.hpp
* @description Dosya i�lemlerini ger�ekle�tirir.
* @course 1. ��retim - A GRUBU
* @assignment �dev 1
* @date 12.08.2021
* @author Medina Nilay Bezirci
*/
#ifndef FILEOPERATIONS_HPP
#define FILEOPERATIONS_HPP

#include <iostream>
using namespace std;


class FileOperations {
private:
	string fileName;
public: 
	FileOperations(string fileName);
	string createElements();
};

#endif