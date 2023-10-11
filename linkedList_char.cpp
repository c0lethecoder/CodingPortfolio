#include <iostream>
#include "linkedList_char.h"

//Constructor
linkedList_char::linkedList_char() {
	first = NULL;
	last = NULL;
}
//Destructor
linkedList_char::~linkedList_char() {
	Node* tmp = first;
	Node* nextNode = first;
	while(tmp != last) {
		tmp = nextNode;
		nextNode = tmp->next;
		delete tmp;
	}
	delete last;
}	


void linkedList_char::insertAtBack(char v) {		
	
	Node* newNode = new Node();
	newNode->val = v;
	newNode->next = NULL;
	if (first == NULL)
		first = newNode;
	if (last == NULL)
		last = newNode;	
	else {
		last->next = newNode;
		last = newNode;
	}
	
}

bool linkedList_char::removeFromBack() {
	if (first == NULL)
		return false;
	if (first == last) {
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
	if (!isEmpty()) {
		Node* newLast = first;
		while(newLast->next != last) 
			newLast = newLast->next;	
		delete last;
		last = newLast;
		return true;
	}	
	
}

void linkedList_char::print() {
	int s = 0;
	if (!isEmpty()) {
	Node* tmp = first;
	Node* newLast = last;
	cout << last->val;
	
	if (size() > 1) {
		cout << ",";
	while(tmp!=newLast){
		
		if(tmp->next == newLast) {
			cout << tmp->val;
			if (tmp != first)
				cout << ",";
			newLast = tmp;
			s++;
			
			tmp = first;
			continue;
		}
		s++;
		tmp = tmp->next;
	}
	
	}
	}
}

bool linkedList_char::isEmpty() {
	if (first == NULL)
		return true;
	else
		return false;

}

int linkedList_char::size() {
	int size = 0;
	if (isEmpty())
		return 0;
	Node* tmp = first;
	Node* nextNode = first;
	while(nextNode != last) {
		tmp = nextNode;
		nextNode = tmp->next;
		size++;
	}
	size++;
	return size;
}

void linkedList_char::clear() {
	Node* tmp = first;
	Node* nextNode = first;
	while(tmp != last) {
		
		nextNode = tmp->next;
		delete tmp;
		tmp = nextNode;
	}
	delete last;
	first = NULL;
	last = NULL;
}

void linkedList_char::insertAtFront(char value) {
	Node* newNode = new Node();
	newNode->val = value;
	newNode->next = first;
	first = newNode;
	if (last == NULL)
		last = newNode;
	
}

bool linkedList_char::removeFromFront() {
	if (first == NULL)
		return false;
	if (first == last) {
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
	if (!isEmpty()) {
		Node* tmp = first;
		first = tmp->next;
		delete tmp;
		return true;
	}
}
