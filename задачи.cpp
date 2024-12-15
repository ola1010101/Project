//1
#include <iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "ru");
	double s, t, u;
	s = 0;
	t = 0;
	std::cout << "ведите растояние до аэропорта в километрах ";
	std::cin >> s;
	std::cout << "ведите время за которое надо доехать в часах ";
	std::cin >> t;
	u = s / t;
	std::cout << "скорость с которой надо ехать равна " << u << " килоиетров в час\n";
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
	std::cout << "ведите время начала в часах минутах и секундах \n";
	std::cin >> Tn1;
	std::cin >> Tn2;
	std::cin >> Tn3;
	std::cout << "ведите время окончания в часах минутах и секундах \n";
	std::cin >> Tk1;
	std::cin >> Tk2;
	std::cin >> Tk3;

	T1 = Tn1 * 60 + Tn2 + Tn3 / 60;
	T2 = Tk1 * 60 + Tk2 + Tk3 / 60;
	Tob = T2 - T1;
	std::cout << "стоимость поездки равна " << Tob / gr << " гривен\n";
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

	std::cout << "ведите расход бензина на 100 км ";
	std::cin >> r;
	std::cout << "ведите стоимость первого бензина ";
	std::cin >> c1;
	std::cout << "ведите стоимость второго бензина ";
	std::cin >> c2;
	std::cout << "ведите стоимость третьего бензина";
	std::cin >> c3;
	p1 = s / 100 * r * c1;
	p2 = s / 100 * r * c2;
	p3 = s / 100 * r * c3;
	std::cout << "стоимость при использовании первого бензина равна " << p1 << "\n";
	std::cout << "стоимость при использовании второго бензина равна " << p2 << "\n";
	std::cout << "стоимость при использовании третьего бензина равна " << p3 << "\n";
	if (p1 < p2 & p1 < p3)
	{
		std::cout << "выгоднее ехать на первом бензине";
	}
	else
	{
		if (p2 < p1 & p2 < p3)
		{
			std::cout << "выгоднее ехать на втором бензине";
		}
		else
		{
			std::cout << "выгоднее ехать на третьем бензине";
		}
	}
	return 0;
}