#include "Card.h"
#include <iostream>

using namespace std;


FCard::FCard()
{
	Shape = "";
	Number = 0;
}

FCard::~FCard()
{
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

void FCard::Show()
{
	cout << Shape << " " << Number << endl;
}
