/*
Author: Group B
Course: CS 370, Software Engineering
Date: 09/15/2020
Description: The Hand class header file.
*/

#ifndef __HAND_H_
#define __HAND_H_

#include "Card.h"
#include <vector>
using std::vector;

class Hand
{
public:
	Hand();
	//Default constructor. An empty hand.
	static Hand fullDeck();
	//Returns a full deck of cards
	void shuffle();
	//Mixes up the cards
	Card drawTop();
	Card drawBottom();
	//Returns the card from the top or bottom of the hand, removes that card
	void placeTop(Card c);
	void placeBottom(Card c);
	//Places the card on the top or bottom of the hand
	bool empty();
	//Returns true if the hand is empty, returns false otherwise
	int size();
	//Returns how many cards are in the hand
private:
	vector<Card> cards;
};

#endif
