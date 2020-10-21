#include "Lista.h";
#pragma once
class Pila
{
private: Lista* internalList;
public:
	Pila();
	Node* Peek();
	int Value(int i);
	int Value_Extract_Peek();
	void Insert(int value);
	bool isEmpty();
};
