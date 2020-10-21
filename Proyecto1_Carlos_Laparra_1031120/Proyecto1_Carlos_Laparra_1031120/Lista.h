#include "Nodo.h"

#pragma once
class Lista
{
public:
	Node* start;
	Node* end;
	int conta;
	

	Lista();
	void InsertAtStart(int value);
	void InsertAtEnd(int value);
	void InsertAtPosition(int value, int position);
	Node* ExtractAtStart();
	Node* ExtractAtEnd();
	Node* ExtractAtPosition(int position);
	Node* GetNode(int value);
	int GetValueAtEnd();
	int GetValueAtStart();
	int GetValue(int position);
	bool isEmpty();
	int Total();
	void Limpiar();
	~Lista() {};
};


