#include <iostream> 
#include <algorithm> 
using namespace std;

const int maxstr = 10;
const int maxstl = 10;

void  sortirovka(int matrica[maxstr][maxstl], int str, int stl)
{
	for (int i = 0; i < str; i++)
	{
		int p = 0;
		for (int j = 0; j < stl; i++)
		{
			if (matrica[i][j] > 0)
			{
				p++;
			}
		}
		if (p >= 2)
		{
			sort(matrica[i], matrica[i] + str, greater<int>());
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int matrica[maxstr][maxstl];
	int str, stl;
	cout << " Введите кол-во столбцов матрицы : ";
	cin >> stl;
	cout << " Введите кол-во строк матрицы : ";
	cin >> str;
	cout << " Введите элементы матрицы : ";
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stl; j++)
		{
			cin >> matrica[i][j];
		}
	}
	sortirovka(matrica, str, stl);
	cout << " Отсортированная матрица : ";
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stl; j++)
		{
			cout << matrica[i][j];
		}
		cout << " ";
	}

}//Рассортировать положительные элементы каждой строки матрицы по
//убыванию.Отрицательные элементы оставить на своих местах.