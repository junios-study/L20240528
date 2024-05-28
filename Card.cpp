#include "Card.h"
#include <iostream>

using namespace std;


FCard::FCard()
{
	Type = ECardType::None;
	Shape = "";
	Number = 0;
}

FCard::~FCard()
{
}

void FCard::SetType(ECardType NewCardType)
{
	Type = NewCardType;
}

void FCard::SetShape(std::string NewShape)
{
	Shape = NewShape;
}

void FCard::SetNumber(int NewNumber)
{
	if (NewNumber >= 1 && NewNumber <= 13)
	{
		Number = NewNumber;
	}
}

int FCard::GetScore()
{
	if (Number > 10)
	{
		return 10;
	}

	return Number;
}

void FCard::ShowNumber()
{
	switch (Number)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	default:
		cout << Number;
		break;
	}
}

void FCard::Show()
{
	string CardType[4] = {
		"¢À", "¢¼", "¢¾", "¡ß"
	};

	cout << CardType[static_cast<int>(Type)] << " ";

	ShowNumber();

	cout << endl;
}
