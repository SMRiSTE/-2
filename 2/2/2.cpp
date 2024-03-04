#include <iostream>
#include <string>


class Counter
{

private:
    
    int num1;

public:

    Counter(int num1) {

        this->num1 = num1;

    }

    int plus() {

        this->num1 += 1;
        return this->num1;

    }

    int minus() {

        this->num1 -= 1;
        return this->num1;

    }

    int equally() {
        return this->num1;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string pme;

    int num;
    std::string yon;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите da или net: ";
    std::cin >> yon;

    if (yon == "da"){

        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> num;

    }

    else{
        num = 1;
    }

    Counter Counter(num);

    while (true) {

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> pme;

        if (pme == "+") {
            Counter.plus();
        }

        else if (pme == "-") {
            Counter.minus();
        }

        else if (pme == "=") {
            std::cout << Counter.equally() << std::endl;
        }

        else if (pme == "x") {
            std::cout << "До свидания!";
            break;
        }
    }
}
