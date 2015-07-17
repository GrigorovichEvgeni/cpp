#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

class One_hand
{
	int * BarabanLine_1;
	int * BarabanLine_2;
	int * BarabanLine_3;
	int MaxNumber;
	int CurrentNumber;

public:
	One_hand(int m);
	~One_hand();
	bool Extract1();
	bool Extract2();
	bool Extract3();
	bool isEmpty();
	bool isFull();
	int GetCount();
	void Show();
	void clear();
	void Add(int b);
};

void One_hand::Show()
{
	//cout << "| 1 |" << "\t" <<"| 2 |"<< "\t" <<"| 3 |"<< "\t\n\n";
	for (int i = 3; i < 6; ++i)
	{
		if (i==4)
		cout << "| " << BarabanLine_1[i] << " |\t" << "| " << BarabanLine_2[i] << " |\t" << "| " << BarabanLine_3[i] << " |\t\n";
		else
		cout << "  " << BarabanLine_1[i] << " \t" << "  " << BarabanLine_2[i] << " \t" << "  " << BarabanLine_3[i] << " \t\n";
	}
	cout << "\n";
}

One_hand::~One_hand()
{
	delete[]BarabanLine_1;
	delete[]BarabanLine_2;
	delete[]BarabanLine_3;
}

One_hand::One_hand(int m)
{
	MaxNumber = m;
	BarabanLine_1 = new int[MaxNumber];
	BarabanLine_2 = new int[MaxNumber];
	BarabanLine_3 = new int[MaxNumber];
	CurrentNumber = 0;
	for (int i = 0; i < MaxNumber; ++i)
		BarabanLine_1[i] = (i + 1);

	for (int i = 0; i < MaxNumber; ++i)
		BarabanLine_2[i] = (i + 1);

	for (int i = 0; i < MaxNumber; ++i)
	{
		BarabanLine_3[i] = (i + 1);
		CurrentNumber++;
	}
}

void One_hand::clear()
{
	CurrentNumber = 0;
}

bool One_hand::isEmpty()
{
	return CurrentNumber == 0;
}

bool One_hand::isFull()
{
	return CurrentNumber == MaxNumber;
}

int One_hand::GetCount()
{
	return CurrentNumber;
}

void One_hand::Add(int b)
{
	if (!isFull()){
		BarabanLine_1[CurrentNumber++] = b;
		BarabanLine_2[CurrentNumber++] = b;
		BarabanLine_3[CurrentNumber++] = b;
	}
}

bool One_hand::Extract1()
{
	if (!isEmpty()){
		int temp = BarabanLine_1[0];
		for (int i = 1; i < 7; ++i)
			BarabanLine_1[i - 1] = BarabanLine_1[i];

		BarabanLine_1[6] = temp;
		return true;
	}
	else return false;
}
bool One_hand::Extract2()
{
	if (!isEmpty()){
		int temp = BarabanLine_2[0];
		for (int i = 1; i < 7; ++i)
			BarabanLine_2[i - 1] = BarabanLine_2[i];

		BarabanLine_2[7 - 1] = temp;
		return true;
	}
	else return false;
}

bool One_hand::Extract3()
{
	if (!isEmpty()){
		int temp = BarabanLine_3[0];
		for (int i = 1; i < 7; ++i)
			BarabanLine_3[i - 1] = BarabanLine_3[i];

		BarabanLine_3[7 - 1] = temp;
		return true;
	}
	else return false;
}


int main()
{
	One_hand Pirat(7);
	
	srand(time(NULL));
	for (int i = rand() % 32; i < 33;++i)
		Pirat.Extract1();
	for (int i = rand() % 16; i < 17; ++i)
		Pirat.Extract2();
	for (int i = rand() % 8; i < 9; ++i)
		Pirat.Extract3();
	Pirat.Show();

	return 0;
}
