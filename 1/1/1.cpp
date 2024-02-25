#include <iostream>

class Calculator{
public:
	double num1;
	double num2;

		double add() {
			std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
			return num1 + num2;
		}
		double multiply() {
			std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
			return num1 * num2;
		}
		double subtract_1_2() {
			std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
			return num2 - num1;
		}
		double subtract_2_1() {
			std::cout << "num1 - num2 = "<< num1 - num2 << std::endl;
			return num1 - num2;
		}
		double divide_1_2() {
			std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
			return num1 / num2;
		}
		double divide_2_1() {
			std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
			return num2 / num1;
		}
		bool set_num1(double num1) {
			if (num1 == 0) {
				std::cout << "Неверный ввод!" << std::endl;
				std::cout << "Введите num1: ";
				std::cin >> num1;
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
				std::cout << "Введите num2: ";
				std::cin >> num2;
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
	cal.set_num1(num1);
	cal.set_num2(num2);
	cal.add();
	cal.multiply();
	cal.subtract_1_2();
	cal.subtract_2_1();
	cal.divide_1_2();
	cal.divide_2_1();
	
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