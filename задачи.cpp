//1
#include <iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "ru");
	double s, t, u;
	s = 0;
	t = 0;
	std::cout << "������ ��������� �� ��������� � ���������� ";
	std::cin >> s;
	std::cout << "������ ����� �� ������� ���� ������� � ����� ";
	std::cin >> t;
	u = s / t;
	std::cout << "�������� � ������� ���� ����� ����� " << u << " ���������� � ���\n";
	return 0;
}



//2
#include <iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "ru");
	double Tk1, Tk2, Tk3, Tn1, Tn2, Tn3, T1, T2, Tob, gr;
	gr = 2;
	std::cout << "������ ����� ������ � ����� ������� � �������� \n";
	std::cin >> Tn1;
	std::cin >> Tn2;
	std::cin >> Tn3;
	std::cout << "������ ����� ��������� � ����� ������� � �������� \n";
	std::cin >> Tk1;
	std::cin >> Tk2;
	std::cin >> Tk3;

	T1 = Tn1 * 60 + Tn2 + Tn3 / 60;
	T2 = Tk1 * 60 + Tk2 + Tk3 / 60;
	Tob = T2 - T1;
	std::cout << "��������� ������� ����� " << Tob / gr << " ������\n";
	return 0;
}



//3
#include <iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "ru");
	double s, r, c1, c2, c3, p1, p2, p3;
	s = 0;
	r = 0;

	std::cout << "������ ������ ������� �� 100 �� ";
	std::cin >> r;
	std::cout << "������ ��������� ������� ������� ";
	std::cin >> c1;
	std::cout << "������ ��������� ������� ������� ";
	std::cin >> c2;
	std::cout << "������ ��������� �������� �������";
	std::cin >> c3;
	p1 = s / 100 * r * c1;
	p2 = s / 100 * r * c2;
	p3 = s / 100 * r * c3;
	std::cout << "��������� ��� ������������� ������� ������� ����� " << p1 << "\n";
	std::cout << "��������� ��� ������������� ������� ������� ����� " << p2 << "\n";
	std::cout << "��������� ��� ������������� �������� ������� ����� " << p3 << "\n";
	if (p1 < p2 & p1 < p3)
	{
		std::cout << "�������� ����� �� ������ �������";
	}
	else
	{
		if (p2 < p1 & p2 < p3)
		{
			std::cout << "�������� ����� �� ������ �������";
		}
		else
		{
			std::cout << "�������� ����� �� ������� �������";
		}
	}
	return 0;
}