#pragma once
#include<iostream>
using namespace std;
#include<string>
class NodoArbol
{

private:
	string _valor;
	NodoArbol* _izquierdo;
	NodoArbol* _derecho;
	

public:
	NodoArbol* _raizPadre;
	NodoArbol(string valor):_valor(valor) {
		SetDerecho(nullptr);
		SetIzquierdo(nullptr);
	}

	void SetValor(string value) {
		_valor = value;
	}

	string GetValor() {
		return _valor;
	}

	void SetIzquierdo(NodoArbol* nodo) {
		_izquierdo = nodo;

	}

	NodoArbol* GetIzquierdo() {
		return _izquierdo;
	}

	void SetDerecho(NodoArbol* nodo) {
		_derecho = nodo;

	}

	NodoArbol* GetDerecho() {
		return _derecho;
	}


};

