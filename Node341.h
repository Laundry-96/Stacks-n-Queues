#ifndef NODE341_H
#define NODE341_H

template  <class T>
class Node341
{
	public:
		Node(T _data);

		T* next;
		T* prev;

		T data;
};

#endif