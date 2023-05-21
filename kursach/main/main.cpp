#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <windows.h>
#include <string>
#include <cstdio>
#include <fcntl.h>

using namespace std;

class Product {
    string name;
    int quantity;
    double price;
public:
    Product(string n, int q, double p)
    {
        name = n;
        quantity = q;
        price = p;
    }

    string getName() const 
    {
        return name;
    }

    int getQuantity() const 
    {
        return quantity;
    }

    double getPrice() const 
    {
        return price;
    }

    void setQuantity(int q) 
    {
        quantity = q;
    }

    void setPrice(double p) 
    {
        price = p;
    }

    double getTotalValue() const 
    {
        return price * quantity;
    }
};

class Inventory {
    vector<Product> products;
public:
    void addProduct(const Product& p) {
        products.push_back(p);
    }

    void deleteProduct(int index) {
        if (products.empty()) {
            
        }
        else {
            system("cls");
            products.erase(products.begin() + index);
        }
    }

    void editProduct(int index, const Product& p) {
        if (!products.empty()) {
            products[index] = p;
        }
    }

    void printProducts() const {
            cout << "______________________________________" << endl;
            cout << "|                                    |" << endl;
            cout << "|              Склад                 |" << endl;
            cout << "|____________________________________|" << endl;
        if (products.empty()) {
            cout << "|                                    |" << endl;
            cout << "|           Склад Пустой             |" << endl;
            cout << "|____________________________________|" << endl;
        }
        else {
            int lenN, lenQ, lenP;
            string quantity, price;
            for (int i = 0; i < products.size(); i++) {
                quantity = to_string(products[i].getQuantity());
                price = to_string(int(products[i].getPrice()));
                lenN = products[i].getName().length();
                lenQ = quantity.length();
                lenP = price.length();

                cout << "|" << i + 1 << ". " << products[i].getName();
                for (int j = 0; j < (32 + (to_string(i).length())) - lenN; j++) {
                    cout << " ";
                } cout << "|" << endl;

                cout << "|Количество: " << products[i].getQuantity() << " ед.";
                for (int j = 0; j < 20 - lenQ; j++) {
                    cout << " ";
                } cout << "|" << endl;

                cout << "|Стоимость: " << products[i].getPrice() << " руб./ед. ";
                for (int j = 0; j < 15 - lenP; j++) {
                    cout << " ";
                } cout << "|" << endl;
                cout << "|____________________________________|" << endl;

            }
        }
    }

    vector<Product> searchByName(const string& name) const {
        vector<Product> result;
        for (const auto& p : products) {
            if (p.getName() == name) {
                result.push_back(p);
            }
        }
        return result;
    }

    vector<Product> searchByPrice(double price) const {
        vector<Product> result;
        for (const auto& p : products) {
            if (p.getPrice() == price) {
                result.push_back(p);
            }
        }
        return result;
    }

    void sortByQuantity() {
        sort(products.begin(), products.end(), [](const Product& p1, const Product& p2) {
            return p1.getQuantity() > p2.getQuantity();
            });
    }

    void sortByPrice() {
        sort(products.begin(), products.end(), [](const Product& p1, const Product& p2) {
            return p1.getPrice() > p2.getPrice();
            });
    }

    void generateReport() const {
        double totalValue = 0;
        int totalSales = 0;
        ofstream report("inventory_report.txt");
        report << "Отчёт:" << endl << endl;
        for (const auto& p : products) {
            report << p.getName() << endl << "Количество: " << p.getQuantity() << " ед. " << " Стоимость: " << p.getPrice() << " руб./ед." << " Общая стоимость: " << p.getTotalValue() << endl;
            totalValue += p.getTotalValue();
            totalSales += p.getQuantity();
        }
        report << endl;
        report << "Общая стоимость товаров на складе: " << totalValue << endl;
        report << "Общее количесто товаров на складе: " << totalSales << endl;
        report.close();
        cout << "Отчёт сгенерирован" << endl;
    }

    void loadToFile() const {
        ofstream write("inventory.txt");
        for (const auto& p : products) {
            write << p.getName() << "," << p.getQuantity() << "," << p.getPrice() << endl;
        }
        write.close();
    }

    void loadFromFile(const string& filename) {
        ifstream inputFile(filename);
        if (inputFile.is_open()) {
            string line;
            while (getline(inputFile, line)) {
                string name;
                int quantity;
                double price;

                size_t commaPos = line.find(",");
                if (commaPos != string::npos) {
                    name = line.substr(0, commaPos);
                    line = line.substr(commaPos + 1);
                }

                commaPos = line.find(",");
                if (commaPos != string::npos) {
                    quantity = stoi(line.substr(0, commaPos));
                    line = line.substr(commaPos + 1);
                }

                price = stod(line);


                Product product(name, quantity, price);
                addProduct(product);
            }

            inputFile.close();
        }
    }
};

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Inventory inventory;
    inventory.loadFromFile("inventory.txt");

    bool exit = false;
    while (!exit) {
        cout << "--------------------------------------" << endl;
        cout << "|Меню действий:                      |" << endl;
        cout << "|1. Просмотреть содержимое склада    |" << endl;
        cout << "|2. Добавить товар на склад          |" << endl;
        cout << "|3. Удалить товар со склада          |" << endl;
        cout << "|4. Редактировать товар              |" << endl;
        cout << "|5. Найти товар по имени             |" << endl;
        cout << "|6. Найти товар по стоимости         |" << endl;
        cout << "|7. Сортировать товары по количеству |" << endl;
        cout << "|8. Сортировать товары по стоимости  |" << endl;
        cout << "|9. Сгенерировать отчёт              |" << endl;
        cout << "|10. Выход                           |" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Выберите действие: ";

        string choice;
        int a;

        cin >> choice;
        try {
            a = stoi(choice);
        }
        catch (invalid_argument)
        {
            cout << endl;
            a = 0;
        }

        cout << endl;
        switch (a) {
        case 2: {
            system("cls");
            bool add_exit = false;
            cout << "---------------------------------------" << endl;
            cout << "|       Добавление нового товара      |" << endl;
            cout << "---------------------------------------" << endl;
            cout << endl << "0 - вернуться в меню" << endl << endl;
            while (!add_exit) {
                cout << "Введите имя товара: ";
                string name;
                cin >> name;
                if (name == "0") {
                    break;
                }
                cout << "Введите количество товара: ";
                int quantity; string qua; bool n = false;
                while (!n) {
                    cin >> qua;
                    try {
                        quantity = stoi(qua);
                        n = true;
                    }
                    catch (invalid_argument) {
                        cout << "Ошибка: вы ввели не число, попробуйте ещё раз" << endl;
                        cout << "Введите количество товара: ";
                    }
                }
                n = false;
                cout << "Введите стоимость товара: ";
                double price; string pr;
                while (!n) {
                    cin >> pr;
                    try {
                        price = stod(pr);
                        n = true;
                    }
                    catch (invalid_argument) {
                        cout << "Ошибка: вы ввели не число, попробуйте ещё раз" << endl;
                        cout << "Введите стоимость товара: ";
                    }
                }
                inventory.addProduct(Product(name, quantity, price));
                cout << "Товар успешно добавлен" << endl << endl;
            }
            system("cls");
            inventory.loadToFile();
            break;
        }
        case 3: {
            system("cls");
            bool delete_exit = false;
            while (!delete_exit) {
                cout << "---------------------------------------" << endl;
                cout << "|           Удаление товара           |" << endl;
                cout << "---------------------------------------" << endl;
                inventory.printProducts();
                cout << endl << "0 - вернуться в меню" << endl;
                cout << endl << "Введите номер товара для удаления: ";
                int index; string ind; bool n = false;
                while (!n) {
                    cin >> ind;
                    try {
                        index = stoi(ind);
                        n = true;
                    }
                    catch (invalid_argument) {
                        cout << "Ошибка: вы ввели не число, попробуйте ещё раз" << endl;
                        cout << "Введите номер товара для удаления: ";
                    }
                }
                    if (index == 0) {
                        break;
                    }
                
                inventory.deleteProduct(index - 1);
                system("cls");
            }
            system("cls");
            break;
        }
        case 4: {
            system("cls");
            bool r_exit = false;
            while (!r_exit) {
                cout << "---------------------------------------" << endl;
                cout << "|       Редактирование товара         |" << endl;
                cout << "---------------------------------------" << endl;
                inventory.printProducts();
                cout << endl << "0 - вернуться в меню" << endl << endl;
                cout << "Введите номер товара для редактирования: ";
                int index; string ind; bool n = false;
                while (!n) {
                    cin >> ind;
                    try {
                        index = stoi(ind);
                        n = true;
                    }
                    catch (invalid_argument) {
                        cout << "Ошибка: вы ввели не число, попробуйте ещё раз" << endl;
                        cout << "Введите номер товара для редактирования: ";
                    }
                }
                if (index == 0) {
                    break;
                }
                n = false;
                cout << "Введите новое имя товара: ";
                string name;
                cin >> name;
                cout << "Введите новое количество товара : ";
                int quantity; string qua;
                while (!n) {
                    cin >> qua;
                    try {
                        quantity = stoi(qua);
                        n = true;
                    }
                    catch (invalid_argument) {
                        cout << "Ошибка: вы ввели не число, попробуйте ещё раз" << endl;
                        cout << "Введите новое количество товара: ";
                    }
                }
                n = false;
                cout << "Введите новую стоимость товара: ";
                double price; string pr;
                while (!n) {
                    cin >> pr;
                    try {
                        price = stoi(pr);
                        n = true;
                    }
                    catch (invalid_argument) {
                        cout << "Ошибка: вы ввели не число, попробуйте ещё раз" << endl;
                        cout << "Введите новую стоимость товара: ";
                    }
                }
                inventory.editProduct(index - 1, Product(name, quantity, price));
                system("cls");
            }
            system("cls");
            inventory.loadToFile();
            break;
        }
        case 5: {
            system("cls");
            bool findName_exit = false;
            cout << "---------------------------------------" << endl;
            cout << "|       Поиск товара по имени         |" << endl;
            cout << "---------------------------------------" << endl;
            cout << "0 - вернуться в меню" << endl << endl;
            while (!findName_exit) {
                cout << "Введите имя товара для поиска: ";
                string name;
                cin >> name;
                if (name == "0") {
                    break;
                }
                auto result = inventory.searchByName(name);
                if (result.empty()) {
                    cout << "Товар не найден" << endl;
                }
                else {
                    for (const auto& p : result) {
                        cout << p.getName() << endl << "Количество: " << p.getQuantity() << " ед. " << endl << "Стоимость: " << p.getPrice() << " руб./ед. " << endl << endl;
                    }
                }
            }
            system("cls");
            break;
        }
        case 6: {
            system("cls");
            bool findPrice_exit = false;
            cout << "---------------------------------------" << endl;
            cout << "|       Поиск товара по стоимости     |" << endl;
            cout << "---------------------------------------" << endl;
            cout << "0 - вернуться в меню" << endl << endl;
            while (!findPrice_exit) {
                cout << "Введите стоимость товара для поиска: ";
                double price; string pr; bool n = false;
                while (!n) {
                    cin >> pr;
                    try {
                        price = stoi(pr);
                        n = true;
                    }
                    catch (invalid_argument) {
                        cout << "Ошибка: вы ввели не число, попробуйте ещё раз" << endl;
                        cout << "Введите стоимость товара для поиска: ";
                    }
                }
                if (price == 0) {
                    break;
                }
                auto result = inventory.searchByPrice(price);
                if (result.empty()) {
                    cout << "Товар не найден" << endl;
                }
                else {
                    for (const auto& p : result) {
                        cout << p.getName() << endl << "Количество: " << p.getQuantity() << " ед." << endl << "Стоимость: " << p.getPrice() << " руб./ед. " << endl << endl;
                    }
                }
            }
            system("cls");
            break;
        }
        case 7: {
            system("cls");
            inventory.sortByQuantity();
            cout << "Склад отсортирован по количеству" << endl;
            break;
        }
        case 8: {
            system("cls");
            inventory.sortByPrice();
            cout << "Склад отсортирован по стоимости" << endl;
            break;
        }
        case 1: {
            system("cls");
            inventory.printProducts();
            break;
        }
        case 9: {
            system("cls");
            inventory.generateReport();
            break;
        }
        case 10: {
            exit = true;
            inventory.loadToFile();
            break;
        }
        default: {
            system("cls");
            cout << "Некорректный выбор, пожалуйста, попробуйте ещё раз" << endl;
            break;

        }
        }
    }
    return 0;
}