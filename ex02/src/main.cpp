#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
	{
		{
			try
			{
				Array<std::string> tab(80);
				for (size_t i = 0; i < tab.size(); i++)
				{
					tab[i] = "chaine";
					tab[i] += static_cast<char>('0'+ i);
				}
				for (size_t i = 0; i < tab.size() + 1; i++)
				{
					std::cout << tab[i] << " ";
				}
			} catch (MyException &e){
				std::cout << "\ntab.size() + 1 :" << e.what() << std::endl;
			}
		}

		std::cout << "\n-----------------------" << std::endl;

		{
			try
			{
				Array<char> tab(80);
				for (size_t i = 0; i < tab.size(); i++)
				{
					tab[i] = '0'+ i;
				}
				for (size_t i = 0; i < tab.size() + 10; i++)
				{
					std::cout << tab[i] << " " ;
				}

			} catch (MyException &e){
				std::cout << "\ntab.size() + 10; " <<e.what() << std::endl;
			}
		}
		std::cout << "\n-----------------------" << std::endl;
		{
			try
			{
				Array<size_t> tab(80);
				for (size_t i = 0; i < tab.size(); i++)
				{
					tab[i] = '0'+ i;
				}
				for (size_t i = 0; i < tab.size(); i++)
				{
					std::cout << tab[i] << " ";
				}
				std::cout << tab[-15] << " ";
			} catch (MyException &e){
				std::cout << "\nstd::cout << tab[-15] << '' '';" << e.what() << std::endl;
			}
		}
		std::cout << "\n-----------------------" << std::endl;
	}

	{

		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}

		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << "numbers[-2] = 0;  " << e.what() << '\n';
		}

		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << "numbers[MAX_VAL] = 0;  " << e.what() << '\n';
		}
		try
		{
			numbers[numbers.size()] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << "numbers[numbers.size()] = 0;  " << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	return 0;
}
