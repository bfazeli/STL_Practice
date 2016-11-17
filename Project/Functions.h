/*
	Name header
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "DoublyList.h"



//Definition predicate function
bool negative(int num)
{
	return (num < 0);
}

//Definition function2
void function2(list<int>& l, queue<int> q)
{
	while (!q.empty())
	{
		l.push_front(q.front());
		q.pop();
	}

	replace_if(l.begin(), l.end(), negative, 0);

	list<int>::iterator iterList = remove(l.begin(), l.end(), 0);
}

//Definition function3
// => NOTE: Need to write declaration in DoublyList.h file
void DoublyList::function3()
{
	Node *temp = last->getPrev();
	temp->getPrev()->setNext(last);
	last->setPrev(temp->getPrev());
	delete temp;
	--count;
}

#endif