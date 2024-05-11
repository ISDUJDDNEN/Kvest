#include <iostream>
#include <string>
#include <random>
#include <limits>
#include<thread>



#define  ыва

inline int kvest1(int a1,int poisk,int rand) {
		int i = 0;
		int j = 0;

		std::cout << "задание " << 1 << std::endl;

#ifdef ALGoritn
		std::cout << "цыкл начался" << std::endl;
#endif		

		
		while (i < 10) {
			std::cin >> a1;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			i++;
			std::cout << "Ты не число написал!" << std::endl;
			std::cout << "Осталось попыток " << 10 - i << "\n\n";
		}
		else {

			
				
				if (rand <= a1 && a1 <= rand + 6) {}
				else { std::cout << "я же сказал от " << rand << " до " << rand + 6 << std::endl; }

				if (poisk == a1) {
					std::cout << "молодец , ты угадал с " << i << " попытки \n" << std::endl; return i;
				}
				else {
					std::cout << "попробуй снова" << std::endl; i++;
					std::cout << "попытка " << i << std::endl;
				}

				
			}
		}
#ifdef ALGoritn
		std::cout << "цыкл закончился" << std::endl;
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
		std::cout << "цыкл начался" << std::endl;
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
			std::cout << "сколько символов  $"  << std::endl;
			std::cin >> cuslo;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				poputku++;
				std::cout << "Ты не число написал!" << std::endl;
				std::cout << "Осталось попыток " << 10 - poputku <<"\n\n";
			}
			else {

				if (cuslo == sumvol3) {
					std::cout << "молодец с " << poputku << " попытки \n" << std::endl;
					break;
				}
				else {
					poputku++;
					std::cout << "неверный ответ , попробуй снова " << std::endl;
					std::cout << "Осталось попыток " << 10 - poputku << " , и смерть " << "\n\n";
				}
			}
		}

		while (poputku != 10) {

			std::cout << "какаого симовала больше всего" << std::endl;
			std::cout << "@-1 , #-2 , 3-$ , 4-% , 5-?  " << std::endl;
			std::cin >> cuslo;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');

				std::cout << "Ты не число написал!" << std::endl;
				std::cout << "Осталось попыток " << 10 - poputku++ << "\n\n";
			}
			else {
				
				
				switch (cuslo) {
				case 1: (std::cout << "неплох их больше всего , а точнее " << sumvol1 <<" штук"  << std::endl); return poputku;
				case 2: (std::cout << "символ # его всеволишь " << sumvol2 << " попробуй снова" << std::endl); break;
				case 3: (std::cout << "символ $ его всеволишь " << sumvol3 << " попробуй снова" << std::endl); break;
				case 4: (std::cout << "символ % его всеволишь " << sumvol4 << " попробуй снова" << std::endl); break;
				case 5: (std::cout << "символ ? его всеволишь " << sumvol5 << " попробуй снова" << std::endl); break;
				}
				poputku++;

			}
		}
		
#ifdef ALGoritn
		std::cout << "цыкл закончился" << std::endl;
#endif

		return poputku;
		
	}

	inline int kvest3() {
		int poputku = 0;
		int cuslo = 0;
		int balu = 0;
		while (poputku < 10) {

			std::cout << "" << std::endl;
			std::cout << "вопрос" << std::endl;
			std::cout << "какая сортировка самая быстрая :" << std::endl;
			std::cout << "1.Двоична сортировака" << std::endl;
			std::cout << "2.Бинарная сортировка" << std::endl;
			std::cout << "3.обе сортировки очень быстрые" << std::endl;
			std::cout << "4.обе сортировки очень медленые" << std::endl;
			std::cout << "5.Это одинаковые сортировки , реализацыя одинаоквая, но названия разные " << std::endl;
			std::cin >> cuslo;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				poputku++;
				std::cout << "Ты не число написал!" << std::endl;
				std::cout << "Осталось попыток " << 10 - poputku << "\n\n";
			}
			else {



				switch (cuslo) {
				case 1: (std::cout << "а чем тебе бинарнная сортировка не нравиться ?" << std::endl); break;
				case 2: (std::cout << "а чем тебе двочная сортировка не нравиться ?" << std::endl); break;
				case 3: (std::cout << "факт ,но не истина " << std::endl); break;
				case 4: (std::cout << "это не праельный ответ " << std::endl); break;
				case 5: (std::cout << "а ты очень умен" << std::endl); return poputku;
				}
				poputku++;
			}
		}
	}

	inline int kvest5()
		{

			return 0;

		};
		

	
	
	
