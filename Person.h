#pragma once
#include <vector>

using namespace std;

class FCard;

class FPerson
{
public:
	FPerson();
	virtual ~FPerson();

	void Draw(FCard* NewCard);
	int Check();
	void Show();

protected:
	vector<FCard*> Cards;
};

