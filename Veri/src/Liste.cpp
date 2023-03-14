/**
* @file /src/Liste.cpp
* @description Baðlý liste özelliklerini ve metotlarýný oluþturur.
* @course 1. Öðretim - A GRUBU
* @assignment Ödev 1
* @date 12.08.2021
* @author Medina Nilay Bezirci
*/
#include "Liste.hpp"

LinkedList::LinkedList()
{
	head = nullptr;
}

void LinkedList::push(int data)
{
    struct Node* node = new Node();

    struct Node* last = this->head;

    node->key = data;

    node->next = NULL;

    if (this->head == NULL) {
        node->prev = NULL;
        this->head = node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = node;

    node->prev = last;
    return;
}

void LinkedList::print()
{
    Node* p = this->head;
    while (p != nullptr) {
        cout << p->key << " -> ";
        p = p->next;
    }
}

Node* LinkedList::at(int n)
{
    Node* p = head;

    for (int i = 0; i < n && p->next != nullptr; i++)
    {
        p = p->next;
    }

    return p;
}

void LinkedList::reverse()
{
    Node* temp = NULL;
    Node* current = this->head;

    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
        this->head = temp->prev;
}

int LinkedList::size()
{
    int size = 0;
    Node* p = head;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }
    return size;
}
