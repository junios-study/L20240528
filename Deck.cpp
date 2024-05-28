#include "Deck.h"
#include "Card.h"

FDeck::FDeck()
{
	for (int Type = 0; Type < 4; ++Type)
	{
		for (int Number = 1; Number <= 13; ++Number)
		{
			FCard* Temp = new FCard();
			switch (Type)
			{
				case 0:
					Temp->SetShape("Dimamond");
					break;
				case 1:
					Temp->SetShape("Spade");
					break;
				case 2:
					Temp->SetShape("Clova");
					break;
				case 3:
					Temp->SetShape("Heart");
					break;
				default:
					break;
			}
			Temp->SetNumber(Number);

			Cards.push_back(Temp);
		}
	}
}

FDeck::~FDeck()
{
}

void FDeck::Check()
{
	//for (int i = 0; i < Cards.size(); ++i)
	//{
	//	Cards[i]->Show();
	//}

	for (auto Card : Cards)
	{
		Card->Show();
	}
}
