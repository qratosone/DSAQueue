// DSAQueue.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include "ListNode.h"
#include <iostream>
using namespace std;
class Queue {
private:
	List<int> list;
public:
	void enqueue(int const& e) { list.insertAsLast(e); }
	int dequeue() { return list.remove(list.first()); }
	int  front() { return list.firstData(); }
	int returnMax() { return list.selectMaxData(); }
};
int main()
{
	Queue q;
	int t;
	for (int i = 0; i < 5; i++)
	{
		cin >> t;
		q.enqueue(t);
	}
	cout << q.front() << endl;
	cout << q.returnMax() << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << q.dequeue() << " ";
	}
	cout << endl;
	
    return 0;
}

