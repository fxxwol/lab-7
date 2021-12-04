#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void CreateRow(int** C, const int colCount, const int Low, const int High, int i, int j)
{
	C[i][j] = Low + rand() % (High - Low + 1);
	if (j < colCount - 1)
			CreateRow(C, colCount, Low, High, i, j + 1);
}
void CreateRows(int** C, const int rowCount, const int colCount, const int Low, const int High, int i)
{
	CreateRow(C, colCount, Low, High, i, 0);
	if (i < rowCount - 1)
		CreateRows(C, rowCount, colCount, Low, High, i + 1);
}
void PrintRow(int** C, const int rowCount, const int colCount, int i, int j)
{
	cout << setw(4) << C[i][j];
	if (j < colCount - 1)
		PrintRow(C, rowCount, colCount, i, j + 1);
	else
		cout << endl;
}
void PrintRows(int** C, const int rowCount, const int colCount, int i)
{
	PrintRow(C, rowCount, colCount, i, 0);
	if (i<rowCount - 1)
		PrintRows(C, rowCount, colCount, i + 1);
	else
		cout << endl;
}
void Change(int** C, const int row1, const int row2, const int colCount,int j)
{
	int tmp;
	tmp = C[row1][j];
	C[row1][j] = C[row2][j];
	C[row2][j] = tmp;
	if (j < colCount - 1)
		Change(C, row1, row2, colCount, j + 1);
	
}
void Sort(int** C, const int rowCount, const int colCount, int i0, int i1)
{
	if ((C[i1][0] > C[i1 + 1][0])
		||
		(C[i1][0] == C[i1 + 1][0] &&
			C[i1][1] < C[i1 + 1][1])
		||
		(C[i1][0] == C[i1 + 1][0] &&
			C[i1][1] == C[i1 + 1][1] &&
			C[i1][3] < C[i1 + 1][3]))
		Change(C, i1, i1 + 1, colCount, 0);
	if (i1 < rowCount - i0 - 2)
			Sort(C, rowCount, colCount, i0, i1 + 1);
}
void Calc(int** C, const int rowCount, const int colCount, int& S, int& k, int i, int j)
{
	if (C[i][j] % 6 == 0 && (i + j) % 5 != 0)
	{
		S += C[i][j];
		k++;
		C[i][j] = 0;
	}
	if (j < colCount - 1)
		if (i < rowCount - 1)
			Calc(C, rowCount, colCount, S, k, i + 1, j + 1);
}
int main()
{
	srand((unsigned)time(NULL));

	int Low = 11;
	int High = 74;

	int rowCount = 8;
	int colCount = 9;

	int** Ñ = new int* [rowCount];
	for (int i = 0; i < rowCount; i++)
		Ñ[i] = new int[colCount];

	CreateRows(Ñ, rowCount, colCount, Low, High,0);
	PrintRows(Ñ, rowCount, colCount, 0);
	Sort(Ñ, rowCount, colCount, 0, 0);
	PrintRows(Ñ, rowCount, colCount, 0);

	int S = 0;
	int k = 0;
	Calc(Ñ, rowCount, colCount, S, k, 0, 0);
	cout << "S = " << S << endl;
	cout << "k = " << k << endl;
	PrintRows(Ñ, rowCount, colCount, 0);

	for (int i = 0; i < rowCount; i++)
		delete[] Ñ[i];
	delete[] Ñ;

	return 0;
}

