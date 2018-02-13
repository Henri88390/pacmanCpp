#pragma once
#include<string>
#include<iostream>
#include"Vecteur2D.h"

class Peinture
{
public:
	unsigned int fond;		// couleur du fond (ou sous-couche de peinture)
	unsigned int devant;	// couleur masquant  la couleur du fond. ou dernière couche de peinture.
							// Elle masque pas du tout, partiellement ou entièrement la couleur du fond
	Peinture(const unsigned int couleurFond, const unsigned int couleurDevant) : fond(couleurFond), devant(couleurDevant) {}

	virtual operator string () const { ostringstream o; o << "( " << fond << ", " << devant << ")"; return o.str(); }

	friend ostream & operator << (ostream & o, const Peinture & peinture) { return o << (string)peinture; }
};

