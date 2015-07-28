#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

class Printer
{
	char * Wait;
	int * Pri;
	char * WaitCheck;
	int * PriCheck;
	int MaxWait;
	int CurrentWait;
	int CurrentCheck;
public:
	Printer(int m);
	~Printer();
	bool isEmpty();
	bool isFull();
	void Add(char c, int p);
	int Print();
	void Show();
	void Clear();
	void Sort();
	void Time();
	void Show_WaitCheck();
};

void Printer::Show()
{
	cout << "\n-------------------------------------\n";
	for (int i = 0; i < CurrentWait; i++){
		cout << Wait[i] << " - " << Pri[i] << "\n\n";
	}
	cout << "\n-------------------------------------\n";
}

Printer::Printer(int m)
{
	MaxWait = m;
	Wait = new char[MaxWait];
	Pri = new int[MaxWait];
	WaitCheck = new char[MaxWait];
	CurrentWait = 0;
	CurrentCheck = 0;
}

Printer::~Printer()
{
	delete[]Wait;
	delete[]Pri;
	delete[]WaitCheck;
	delete[]PriCheck;
}

void Printer::Clear()
{
	CurrentWait = 0;
}

bool Printer::isEmpty()
{
	return CurrentWait == 0;
}

bool Printer::isFull()
{
	return CurrentWait == MaxWait;
}

void Printer::Add(char c, int p)
{
	if (!isFull()){
		Wait[CurrentWait] = c;
		Pri[CurrentWait] = p;
		CurrentWait++;
		Sort();
		WaitCheck = new char[MaxWait];
		PriCheck = new int[MaxWait];
	}	
}
void Printer::Sort()
{
	long i, j, k, x, K;
	char X;
	for (i = 0; i < CurrentWait; ++i){
		k = i;
		x = Pri[i];
		K = i;
		X = Wait[i];
		for (j = i +1; j < CurrentWait; ++j)
			if (Pri[j] < x){
				k = j;
				x = Pri[j];
				K = j;
				X = Wait[j];
			}
		Pri[k] = Pri[i];
		Pri[i] = x;
		Wait[K] = Wait[i];
		Wait[i] = X;
	}
}

void Printer::Time()
{
	int CurrentTime = 0;
	time_t * t;
	t[CurrentTime++] = time(0);
	cout << puts(ctime(&t[CurrentTime]));
}

int Printer::Print()
{
	if (!isEmpty()){
		char temp1 = Wait[0];
		int temp2 = Pri[0];
		//Time();
		WaitCheck[CurrentCheck] = temp1;
		PriCheck[CurrentCheck] = temp2;
		CurrentCheck++;


		for (int i = 0; i < CurrentWait - 1; ++i){
			Wait[i] = Wait[i + 1];
			Pri[i] = Pri[i + 1];
		}
		CurrentWait--;
		return temp1;
	}
	else return -1;
}

void Printer::Show_WaitCheck()
{
	for (int i = 0; i < CurrentCheck; ++i){
		cout << WaitCheck[i] << " - " << PriCheck[i] << "\n";
	}	
}

int main()
{
	srand(time(NULL));
	Printer List(50);

	int Klient = rand() % 20 + 1;
	for (int i = 0; i < Klient; ++i){
		int c = rand() % 4 + 1;
		if (c == 3){
			char C = {'C'};
			List.Add(C, 3);
		}
		else if (c == 2){
			char B = {'B'};
			List.Add(B, 2);
		}
		else if(c == 1){
			char A = {'A'};
			List.Add(A, 1);
		}
				
	}
	
	List.Show();
	//List.Sort();
	List.Print();
	List.Print();
	List.Print();

	List.Show();
	
	List.Show_WaitCheck();
}