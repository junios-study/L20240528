#include <iostream>
#include "Deck.h"
#include "Player.h"

using namespace std;

int main()
{
	FDeck Deck;
	FPlayer Player;

	Player.Draw(Deck.Draw());
	Player.Draw(Deck.Draw());


	cout << Player.Check() << endl;

	Player.Show();


	return  0;
}