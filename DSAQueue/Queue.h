#pragma once
#include "ListNode.h"
template<typename T>
class Queue :public List<T> {
public:
	Queue();
	~Queue();
	void enqueue(T const& e) { this->insertAsLast(e); }
	T dequeue() { return this->remove(this->first()); }
	T & front() { return this->first()->data; }

};

template<typename T>
inline Queue<T>::Queue()
{
}

template<typename T>
inline Queue<T>::~Queue()
{
}
