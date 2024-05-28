#pragma once
#include <vector>

class FCard; //전방 선언

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	std::vector<FCard*> Cards;

	void Check();
};

