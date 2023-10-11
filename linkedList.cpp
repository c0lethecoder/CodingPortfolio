#include "linkedList.h"
#include <cstdio>
#include "stack.h"
#include <iostream>

linkedList::linkedList()
{
    first = last = NULL;
}
linkedList::~linkedList()
{
    while(first != NULL)
    {
        Node temp;
        temp = first;
        first = first->next;
        free(temp);
    }
    last = NULL;
}
void linkedList::insertAtBack(int valueToInsert)
{
    Nodetemp = (Node )malloc(sizeof(Node));
    temp->val = valueToInsert;
    temp->next = NULL;
    if(last == NULL)
        first = last = temp;
    else
    {
        last->next = temp;
        last = temp;
    }
}
bool linkedList::removeFromBack()
{
    if(first == NULL)
        return false;
    else if(first == last)
    {
        free(first);
        first = last = NULL;
    }
    else
    {
        Nodetemp;
        temp = first;
        while(temp->next != last)
            temp = temp->next;
        last = temp;
        temp = temp->next;
        free(temp);
        last->next = NULL;
    }
    return true;
}
void linkedList::print()
{
    Node temp = first;
    while(temp != last)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    if(temp != NULL)
        cout<<temp->val;
}
bool linkedList::isEmpty()
{
    if(first == last)
        return true;
    return false;
}
int linkedList::size()
{
    int count = 0;
    Nodetemp = first;
    if(temp == NULL)
        return count;
    while(temp != last)
    {
        count++;
        temp = temp->next;
    }
    return count+1;
}
void linkedList::clear()
{
    while(first != NULL)
    {
        Node *temp;
        temp = first;
        first = first->next;
        free(temp);
    }
    last = NULL;
}
