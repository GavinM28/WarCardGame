/*
Author: Group B
Course: CS 370, Software Engineering
Date: 09/15/2020
  Description:  This file implements the driver
                program for this assignment.
*/

#include "Card.h"
#include <stdexcept>
string Card::suitName (Suit s) {
	switch(s) {
		case clubs: return "Clubs";
		case diamonds: return "Diamonds";
		case hearts: return "Hearts";
		case spades: return "Spades";
		default: throw std::out_of_range("Suit value out of range");
	}
}

string Card::valueName (Value v) {
	switch(v) {
	case ace: return "Ace";
	case deuce: return "Deuce";
	case trey: return "Trey";
	case four: return "Four";
	case five: return "Five";
	case six:  return "Six";
	case seven: return "Seven";
	case eight: return "Eight";
	case nine: return "Nine";
	case ten: return "Ten";
	case jack: return "Jack";
	case queen: return "Queen";
	case king: return "King";
	default: throw std::out_of_range("Face value out of range");
	}
}
