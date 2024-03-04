// LTCB_FORLOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{


	int sodau, socuoi;
	cout << "Nhap so dau:";
	cin >> sodau;
	cout << "Nhap so cuoi:";
	cin >> socuoi;
	cout << "VONG LAP WHILE\n";
	while (sodau <= socuoi) //50<=40==> False
	{
		cout << sodau << "";
		sodau++;
	}
	cout << "\n Mhap so dau:";
	cin >> sodau;
	cout << "Nhap so cuoi:";
	cin >> socuoi;
	cout << "\NVONG LAP DO WHILE\n";
	do
	{
		cout << sodau << "";
		sodau++;
	} while (sodau <= socuoi); // 50<=40==> False

      return 0;
}
