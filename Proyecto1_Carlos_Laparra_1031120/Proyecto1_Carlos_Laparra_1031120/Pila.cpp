#include "Pila.h"

Pila::Pila() {
	internalList = new Lista();
	internalList->end = nullptr;
	internalList->start = nullptr;
	internalList->conta = 0;
}

void Pila::Insert(int value) {
	internalList->InsertAtEnd(value);
}

Node* Pila::Peek() {
	return internalList->ExtractAtEnd();
}

int Pila::Value(int i) {
	return internalList->GetValue(i);
}

bool Pila::isEmpty() {
	return internalList->isEmpty();
}

int Pila::Value_Extract_Peek() {
	return internalList->GetValueAtEnd();
}

