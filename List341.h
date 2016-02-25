#ifndef LIST341_H
#define LIST341_H

using namespace std;

template <class T> 
class List341
{
	protected:
		List341();
	   ~List341();
		virtual int 	Size	()		const	= 0;
		virtual bool	Empty	()		const	= 0;
		virtual bool	Push	(T obj)			= 0;
		virtual bool	Pop		()				= 0;
		virtual bool	Clear	()				= 0;
};

template  <class T>
class Node
{
	public:
		Node(T data);

		T* next;
		T* prev;

		T data;
}