#pragma once
#include <vector>

class FCard; //전방 선언

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	void Check();

	FCard* Draw();

protected:
	std::vector<FCard*> Cards;
	int CurrentPosition;

};

