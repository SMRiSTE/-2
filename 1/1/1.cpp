#include <iostream>

class Calculator{
private:
	double num1;
	double num2;

public:
	Calculator() {
		this->num1 = 1;
		this->num2 = 2;
	}

		double add() {
			return num1 + num2;
		}
		double multiply() {
			return num1 * num2;
		}
		double subtract_2_1() {
			return num2 - num1;
		}
		double subtract_1_2() {
			return num1 - num2;
		}
		double divide_1_2() {
			return num1 / num2;
		}
		double divide_2_1() {
			return num2 / num1;
		}
		bool set_num1(double num1) {
			if (num1 == 0) {
				std::cout << "Неверный ввод!" << std::endl;
				return false;
			}
			else {
				this->num1 = num1;
				return true;
			}
		}
		bool set_num2(double num2) {
			if (num2 == 0) {
				std::cout << "Неверный ввод!" << std::endl;
				return false;
			}
			else {
				this->num2 = num2;
				return true;
			}
		}
	
};

void get(double num1, double num2) {
	Calculator cal;
	if (cal.set_num1(num1) == 1&& cal.set_num2(num2)==1) {
		std::cout << "num1 + num2 = " << cal.add() << std::endl;
		std::cout << "num1 * num2 = " << cal.multiply() << std::endl;
		std::cout << "num2 - num1 = " << cal.subtract_2_1() << std::endl;
		std::cout << "num1 - num2 = " << cal.subtract_1_2() << std::endl;
		std::cout << "num1 / num2 = " << cal.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << cal.divide_2_1() << std::endl;
	}
}

int main() {

	double num1;
	double num2;

	setlocale(LC_ALL, "Russian");
	while (true) {
		std::cout << "Введите num1: ";
		std::cin >> num1;
		std::cout << "Введите num2: ";
		std::cin >> num2;
		get(num1, num2);
	}
	

}