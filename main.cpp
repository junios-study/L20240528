#include <iostream>
#include <vector>//Data save, Container

using namespace std;

class Player
{
public:
	__forceinline int GetMoney() { return Money; }

private:
	int Money;
};

inline int Max(int A, int B)
{
	return ((A > B) ? A : B);
}

//c¾ð¾î, old style
#define MAX(A, B)			((A > B) ? A : B) ?

#define MAX3(A, B, C)	 (((A>B)? A : B) > C ? ((A>B)? A : B) : C )



#define DEFINE_MAX(A, B)			A + B


#include "Player.h"
#include "Dealer.h"

int main()
{
	int A = 1;
	int B = DEFINE_MAX(1, 2);

	cout << MAX3(3, 5, 4) << endl;


	return  0;
}