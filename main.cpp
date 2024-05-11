#include <iostream>
#include "sum.cpp"   
#include "Sort.cpp"  


#include "sum.h"  
int main()
{
	
	int a = 10000;
	int b = 7;
	int varies1;
	Sort awe;

	setlocale(LC_ALL, "ru");
	

	std::cout << "задание " << 1 << " попробуй  его решить " << std::endl;
	std::cout << "если готов, введи любое число" << std::endl;

	std::cin >> varies1;
	std::cout << "угодай число от " << random1 << " до " << random1 + 6 << std::endl;

	kvest1(varies1,poisk,random1);

	std::cout << "задание " << 2 << " попробуй  его решить " << std::endl;
	
	std::cout << "" << kvest2() << std::endl;

	std::cout << "задание " << 3 << " попробуй  его решить " << std::endl;

	std::cout << "" << kvest3() << std::endl;
	
	std::cout << "задание " << 4 << " попробуй  его решить " << std::endl;
	
	awe.baza();
	
	std::cout << "задание " << 5 << " попробуй  его решить " << std::endl;
	std::cout << "в разработке" << std::endl;
	
	

}
