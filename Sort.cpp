#include <iostream>
#include<Windows.h>
#include<chrono>
#include<vector>
#include"Sort.h"
#include <functional>
#include <algorithm>
#include <iterator>
#include <limits>


#define ф

using namespace std;

class SimpleTimer
{
public:
	SimpleTimer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~SimpleTimer()
	{
		end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float>duration = end - start;
		std::cout << "Время цыкла " << duration.count() << " секунд" << std::endl;
	}
private:
	std::chrono::time_point<std::chrono::steady_clock>start, end;

};


class Sort {
private:


    vector<int> random()
    {

        /*SimpleTimer adasf;*/
        std::vector<int> numbers(40000);
        size_t size = numbers.size();

        std::srand(std::time(0));

        for (int i = 0; i < size; ++i) {
            numbers[i] = rand() % 400000; // Генерация случайного числа от 0 до 32000
        }
        
        return numbers;
    }
    void Print(vector<int> arr)
    {

        size_t  n = arr.size();
        for (int i = 0; i < n; i++)
        {
            std::cout << arr[i] << ",";
        }
    }

public:

    vector<int> Puzirkova(vector<int> arr)
    {
        SimpleTimer ads;
        std::cout << "пузырьковая сортировка начала всвою работу (10-13 secends)" << std::endl;

        size_t size = arr.size();
        int temp;

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // меняем элементы местами
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        return arr;
    }



    vector<int>  Vstavka(vector<int> arr) {
        std::cout << "сортировка вставкой начала всвою работу (9-11 secends)" << std::endl;
        SimpleTimer adа;

        int counter = 0;
        size_t n = arr.size();

        for (int i = 1; i < n; i++) {
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
                counter++;
                int tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;

            }
        }
        return arr;
    }

    vector<int>   Bustro(vector<int> numbers, size_t start, size_t end)
        {
            // начальный индекс должен быть меньше конечного индекса для массива из 2 и более элементов
            if (start >= end)
                return numbers;
            // проверяем все элементы относительно элемента с индексом start
            size_t current{ start };
            for (size_t i{ start + 1 }; i <= end; i++)
            {
                // если i-ый элемент меньше начального
                if (numbers[i] < numbers[start])
                {
                    swap(numbers, ++current, i); // меняем его с левым
                }
            }
            swap(numbers, start, current); // Меняем выбранный (start) и последний обмененный элементы
            if (current > start)
            {
                Bustro(numbers, start, current - 1); // Сортируем элементы слева
            }
            if (end > current + 1)
            {
                Bustro(numbers, current + 1, end); // Сортируем элементы справа
            }

        }
        void swap(vector<int> numbers, size_t first, size_t second)
        {
            auto temp{ numbers[first] };
            numbers[first] = numbers[second];
            numbers[second] = temp;
        }


    void  VstavkaSort() {

        vector<int> arr = random();

        vector<int> ar2 = Vstavka(arr);
    }
    

  void   PuzirkovaSort() {

        vector<int> arr = random();

        vector<int> ar2 = Puzirkova(arr);

    }
    void   BustroSort() {

        vector<int> arr = random();

        Bustro(arr, 0,size(arr) - 1);

        Print(arr);

       
    }
   void STLSort() {
       SimpleTimer adа;
        vector<int> arr = random();

        std::sort(arr.begin(), arr.end());
        
    }

   

   int baza()
    {
        std::cout << "какая сортировка , быстрее всего отсортирует вектор из 40000   случаных чисел от наименьшего к наибольшему?" << std::endl;
        std::cout << "1.Сортировака вставками" << std::endl;
        std::cout << "2.Пузырковая сортировка" << std::endl;
        std::cout << "3.Сортировка библиотеки STL sort(arr)" << std::endl;
        
        int poputku = 0;
        int value = 0;
        while (poputku < 10) {
            std::cin >> value;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                poputku++;
                std::cout << "Пожалуйста напиши номер сортировки" << std::endl;
                std::cout << "Осталось попыток " << 10 - poputku << "\n\n";                 // капец
            }
            else {
                if (1 != value || 2 != value || 3 != value)  {
                    switch (value) {
                    case(1):VstavkaSort();
                        std::cout << "эта сортировка не самая оптимальная ,но достаточно эфиктивная" << std::endl;
                        std::cout << "выбири другую более, оптимальную сортировку" << std::endl; break;
                    case(2):PuzirkovaSort();
                        std::cout << "эта сортировка самая не оптимальная ,не эфективная" << std::endl;
                        std::cout << "выбири другую более, оптимальную сортировку" << std::endl; break;
                    case(3):STLSort(); std::cout << "эта сортировка самая оптимальная и эфективная"<<"\n\n" << std::endl;
                         return 0;
                    }
                } else { break;}
                }

            }

        }

    };
