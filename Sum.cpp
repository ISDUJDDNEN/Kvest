#include <iostream>
#include <string>
#include <random>
#include <limits>
#include<thread>



#define  ���

inline int kvest1(int a1,int poisk,int rand) {
		int i = 0;
		int j = 0;

		std::cout << "������� " << 1 << std::endl;

#ifdef ALGoritn
		std::cout << "���� �������" << std::endl;
#endif		

		
		while (i < 10) {
			std::cin >> a1;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			i++;
			std::cout << "�� �� ����� �������!" << std::endl;
			std::cout << "�������� ������� " << 10 - i << "\n\n";
		}
		else {

			
				
				if (rand <= a1 && a1 <= rand + 6) {}
				else { std::cout << "� �� ������ �� " << rand << " �� " << rand + 6 << std::endl; }

				if (poisk == a1) {
					std::cout << "������� , �� ������ � " << i << " ������� \n" << std::endl; return i;
				}
				else {
					std::cout << "�������� �����" << std::endl; i++;
					std::cout << "������� " << i << std::endl;
				}

				
			}
		}
#ifdef ALGoritn
		std::cout << "���� ����������" << std::endl;
#endif
	}

inline int kvest2() {
		int poputku = 0;
		int cuslo = 0;
		int sumvol1 = 0; //@
		int sumvol2 = 0; //#
		int sumvol3 = 0; //$
		int sumvol4 = 0; //%
		int sumvol5 = 0; //&
		int sumvol6 = 0; //?
		

#ifdef ALGoritn
		std::cout << "���� �������" << std::endl;
#endif

		for (int i = 0; i <=15; i++) {

			std::cout << "" << std::endl;
			for (int j = 0; j <= 20; j++) {

				if (sumvol4 <= 20) {
					std::cout << "%"; sumvol4++;
				}
				else if(sumvol5 <= 41){
					std::cout << "&"; sumvol5++;
				}
				else if (sumvol2 <= 83){
					std::cout << "#"; sumvol2++;
				}
				else if (sumvol6 <= 83) {
					std::cout << "?"; sumvol6++;
				}
				else {
					std::cout << "@"; sumvol1++;
				}
			}
		}



		std::cout << "" << std::endl;
		std::cout << "" << std::endl;

		while (poputku <= 10) {
			std::cout << "������� ��������  $"  << std::endl;
			std::cin >> cuslo;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				poputku++;
				std::cout << "�� �� ����� �������!" << std::endl;
				std::cout << "�������� ������� " << 10 - poputku <<"\n\n";
			}
			else {

				if (cuslo == sumvol3) {
					std::cout << "������� � " << poputku << " ������� \n" << std::endl;
					break;
				}
				else {
					poputku++;
					std::cout << "�������� ����� , �������� ����� " << std::endl;
					std::cout << "�������� ������� " << 10 - poputku << " , � ������ " << "\n\n";
				}
			}
		}

		while (poputku != 10) {

			std::cout << "������� �������� ������ �����" << std::endl;
			std::cout << "@-1 , #-2 , 3-$ , 4-% , 5-?  " << std::endl;
			std::cin >> cuslo;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');

				std::cout << "�� �� ����� �������!" << std::endl;
				std::cout << "�������� ������� " << 10 - poputku++ << "\n\n";
			}
			else {
				
				
				switch (cuslo) {
				case 1: (std::cout << "������ �� ������ ����� , � ������ " << sumvol1 <<" ����"  << std::endl); return poputku;
				case 2: (std::cout << "������ # ��� ��������� " << sumvol2 << " �������� �����" << std::endl); break;
				case 3: (std::cout << "������ $ ��� ��������� " << sumvol3 << " �������� �����" << std::endl); break;
				case 4: (std::cout << "������ % ��� ��������� " << sumvol4 << " �������� �����" << std::endl); break;
				case 5: (std::cout << "������ ? ��� ��������� " << sumvol5 << " �������� �����" << std::endl); break;
				}
				poputku++;

			}
		}
		
#ifdef ALGoritn
		std::cout << "���� ����������" << std::endl;
#endif

		return poputku;
		
	}

	inline int kvest3() {
		int poputku = 0;
		int cuslo = 0;
		int balu = 0;
		while (poputku < 10) {

			std::cout << "" << std::endl;
			std::cout << "������" << std::endl;
			std::cout << "����� ���������� ����� ������� :" << std::endl;
			std::cout << "1.������� �����������" << std::endl;
			std::cout << "2.�������� ����������" << std::endl;
			std::cout << "3.��� ���������� ����� �������" << std::endl;
			std::cout << "4.��� ���������� ����� ��������" << std::endl;
			std::cout << "5.��� ���������� ���������� , ���������� ����������, �� �������� ������ " << std::endl;
			std::cin >> cuslo;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				poputku++;
				std::cout << "�� �� ����� �������!" << std::endl;
				std::cout << "�������� ������� " << 10 - poputku << "\n\n";
			}
			else {



				switch (cuslo) {
				case 1: (std::cout << "� ��� ���� ��������� ���������� �� ��������� ?" << std::endl); break;
				case 2: (std::cout << "� ��� ���� ������� ���������� �� ��������� ?" << std::endl); break;
				case 3: (std::cout << "���� ,�� �� ������ " << std::endl); break;
				case 4: (std::cout << "��� �� ��������� ����� " << std::endl); break;
				case 5: (std::cout << "� �� ����� ����" << std::endl); return poputku;
				}
				poputku++;
			}
		}
	}

	inline int kvest5()
		{

			return 0;

		};
		

	
	
	
