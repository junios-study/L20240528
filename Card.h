#pragma once

#include <string>


class FCard
{
public:
	FCard();
	virtual ~FCard();

	void SetShape(std::string NewShape);
	void SetNumber(int NewNumber);

protected:
	std::string Shape;
	int Number;

public:
	void Show();
};

