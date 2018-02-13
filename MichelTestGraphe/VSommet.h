#pragma once
#include<string>
#include<iostream>
#include"Vecteur2D.h"

using namespace std;

class VSommet
{
public:
	constexpr static  int rayonDisquePixels = 10;
	constexpr static unsigned int couleurBord = 0xA10684FF; // couleur violine opaque
	string nom;
	Vecteur2D p;		  	// position
	unsigned int couleur; 	// couleur au format rgba


							/**
							par défaut, la couleur d'un sommet est rouge opaque
							*/
	VSommet(const string & nom, const Vecteur2D & p, const unsigned int couleur = 0xFF0000FF) : nom(nom), p(p), couleur(couleur) {}

	virtual
		operator string () const { ostringstream o; o << "( " << nom << ", " << p << ", " << couleur << ")"; return o.str(); }

	friend ostream & operator << (ostream & o, const VSommet & vSommet) { return o << (string)vSommet; }
};

