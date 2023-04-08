#include <iostream>
#include <algorithm>
#include <windows.h>

class Product // Объявление классa Product
{
private: // Объявление полей
	std::string name;
	int quantity;
	double price;
public: // Объявление конструктора Product и методов
	Product(std::string n, int q, double p)
	{
		name = n;
		quantity = q;
		price = p;
	}

	std::string getName() const
	{
		return name;
	}

	int getQuantity() const
	{
		return quantity;
	}

	int getPrice() const
	{
		return price;
	}

	void setQuantity(int q)
	{
		quantity = q;
	}

	void setPrice(int p)
	{
		price = p;
	}

	double getTotalValue() const
	{
		return price * quantity;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}