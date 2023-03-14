/**
* @file /include/Liste.hpp
* @description Ba�l� liste �zelliklerini ve metotlar�n� olu�turur. 
* @course 1. ��retim - A GRUBU
* @assignment �dev 1
* @date 12.08.2021
* @author Medina Nilay Bezirci
*/
#ifndef LISTE_HPP
#define LISTE_HPP

#include <iostream>
using namespace std;

struct Node {
    int key;
    struct Node* next = nullptr;
    struct Node* prev = nullptr;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList();

    void push(int data);

    void print();
    
    Node* at(int n);

    void reverse();

    int size();
};

#endif