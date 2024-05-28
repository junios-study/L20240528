#pragma once
#ifndef __PERSON_H__
#define __PERSON_H__
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
#endif //__PERSON_H__
