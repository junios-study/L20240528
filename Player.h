#pragma once
#include <vector>

using namespace std;

class FCard;

class FPlayer
{
public:
	FPlayer();
	virtual ~FPlayer();

	vector<FCard*> Cards;

	void Draw(FCard* NewCard);
	int Check();
	void Show();
};

