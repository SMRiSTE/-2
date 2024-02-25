#include <iostream>
#include <string>


class Counter
{

public:
    std::string inp;
    int num1=0;

    void stand()
    {
        std::string yon;
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> yon;
        if (yon == "Da")
        {
            std::cout << std::endl << "Введите начальное значение счётчика: ";
            std::cin >> this->num1;
        }
        else if(yon == "Net")
        {
            this->num1 = 1;
        }
        else {
            std::cout << "Некоректный ввод!" << std::endl;
            stand();
        }
    }

    void numcom()
    {
        while (true)
        {
            std::cout << std::endl << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> this->inp;
            if (this->inp == "+")
            {
                this->num1 += 1;
            }
            else if (this->inp == "-")
            {
                this->num1 -= 1;
            }
            else if (this->inp == "=")
            {
                std::cout << this->num1;
            }
            else if (this->inp == "x")
            {
                std::cout << std::endl << "До свидания!";
                break;
            }
        }

    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Counter coun;
    coun.stand();
    coun.numcom();
}
