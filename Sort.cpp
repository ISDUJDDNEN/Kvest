#include <iostream>
#include<Windows.h>
#include<chrono>
#include<vector>
#include"Sort.h"
#include <functional>
#include <algorithm>
#include <iterator>
#include <limits>


#define �

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
		std::cout << "����� ����� " << duration.count() << " ������" << std::endl;
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
            numbers[i] = rand() % 400000; // ��������� ���������� ����� �� 0 �� 32000
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
        std::cout << "����������� ���������� ������ ����� ������ (10-13 secends)" << std::endl;

        size_t size = arr.size();
        int temp;

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // ������ �������� �������
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        return arr;
    }



    vector<int>  Vstavka(vector<int> arr) {
        std::cout << "���������� �������� ������ ����� ������ (9-11 secends)" << std::endl;
        SimpleTimer ad�;

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
            // ��������� ������ ������ ���� ������ ��������� ������� ��� ������� �� 2 � ����� ���������
            if (start >= end)
                return numbers;
            // ��������� ��� �������� ������������ �������� � �������� start
            size_t current{ start };
            for (size_t i{ start + 1 }; i <= end; i++)
            {
                // ���� i-�� ������� ������ ����������
                if (numbers[i] < numbers[start])
                {
                    swap(numbers, ++current, i); // ������ ��� � �����
                }
            }
            swap(numbers, start, current); // ������ ��������� (start) � ��������� ���������� ��������
            if (current > start)
            {
                Bustro(numbers, start, current - 1); // ��������� �������� �����
            }
            if (end > current + 1)
            {
                Bustro(numbers, current + 1, end); // ��������� �������� ������
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
       SimpleTimer ad�;
        vector<int> arr = random();

        std::sort(arr.begin(), arr.end());
        
    }

   

   int baza()
    {
        std::cout << "����� ���������� , ������� ����� ����������� ������ �� 40000   �������� ����� �� ����������� � �����������?" << std::endl;
        std::cout << "1.����������� ���������" << std::endl;
        std::cout << "2.���������� ����������" << std::endl;
        std::cout << "3.���������� ���������� STL sort(arr)" << std::endl;
        
        int poputku = 0;
        int value = 0;
        while (poputku < 10) {
            std::cin >> value;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
                poputku++;
                std::cout << "���������� ������ ����� ����������" << std::endl;
                std::cout << "�������� ������� " << 10 - poputku << "\n\n";                 // �����
            }
            else {
                if (1 != value || 2 != value || 3 != value)  {
                    switch (value) {
                    case(1):VstavkaSort();
                        std::cout << "��� ���������� �� ����� ����������� ,�� ���������� ����������" << std::endl;
                        std::cout << "������ ������ �����, ����������� ����������" << std::endl; break;
                    case(2):PuzirkovaSort();
                        std::cout << "��� ���������� ����� �� ����������� ,�� ����������" << std::endl;
                        std::cout << "������ ������ �����, ����������� ����������" << std::endl; break;
                    case(3):STLSort(); std::cout << "��� ���������� ����� ����������� � ����������"<<"\n\n" << std::endl;
                         return 0;
                    }
                } else { break;}
                }

            }

        }

    };
