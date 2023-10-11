#include <iostream>
#include "LinkedList.h"
#include <cstddef>


LinkedList::LinkedList(){
  first = new Node;
  last = new Node;
  first->next = last;
  last->next = NULL;
}

LinkedList::~LinkedList(){
  while(!isEmpty()){
    removeFromBack();
  }
  delete first;
  delete last;
  
}

void LinkedList::insertAtBack(int valueToInsert){
  Node* v = new Node;
  Node* n = new Node;
  n = first;
  if(isEmpty()){
    v->val = valueToInsert;
    v->next = last;
    first = v;
  }else{
    
    while(n->next != last){
      n=n->next;
    }
    n->next = v;
    v->val = valueToInsert;
    v->next = last;
    last = v->next;

  }
}

bool LinkedList::removeFromBack(){
  if(!isEmpty()){

    if(first->next == last){
      first-> val = 0;
    }else{
      Node* v = new Node;
      Node* old = new Node;
      old = first;
      v = first;
      while(old->next != last){ 
        if(v->next->next != last){ 
          v = v->next;
        }
        old = old->next;
      }
  
      v->next = last;
  
      delete old;
    }
    
    return true;
  }
  return false;
}

void LinkedList::print(){
  Node* n = first;
  if(!isEmpty()){
    cout << n->val;
    n=n->next;
    while(n != last){
      cout << "," << n->val;
      n=n->next;
    }
  }
}

bool LinkedList::isEmpty(){
  return (first->val == 0 && first->next == last);
}

int LinkedList::size(){
  if(isEmpty()){
    return 0;
  }else{
    int ans = 1;
    Node* n = first;
    while(n->next != last){
      n= n->next;
      ans++;
    }
    return ans;
  }
}

void LinkedList::clear(){
  while(!isEmpty()){
    removeFromBack();
  }
}

void LinkedList::insertAtFront(int valueToInsert){
  if(!isEmpty()){
    Node* v = new Node;
    v->val = valueToInsert;
    v->next = first;
    first = v;
    
  }else{
    first->val = valueToInsert;
    
  }
}

bool LinkedList::removeFromFront(){
  if(!isEmpty()){
    
    Node* v = new Node;
    v = first;
    if(v->next == last){
      v->val = 0;
    }else{
      first = v->next;
      delete v;
    }
    return true;
  }
  return false;
}