/**
* @file /include/FileOperations.hpp
* @description Dosya iþlemlerini gerçekleþtirir.
* @course 1. Öðretim - A GRUBU
* @assignment Ödev 1
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