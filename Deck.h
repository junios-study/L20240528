#pragma once
#include <vector>

class FCard; //���� ����

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	std::vector<FCard*> Cards;

	void Check();
};

