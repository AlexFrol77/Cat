#include <iostream>
#include <string>

void request(std::string& cf_1, std::string& cf_2, std::string& cf_3, int& hf_1, int& hf_2, int& hf_3) {
	std::cout << "Введите цвет первого дома: ";
	std::cin >> cf_1;
	std::cout << "Введите количество этажей первого дома: ";
	std::cin >> hf_1;
	std::cout << "Введите цвет второго дома: ";
	std::cin >> cf_2;
	std::cout << "Введите количество этажей второго дома: ";
	std::cin >> hf_2;
	std::cout << "Введите цвет третьего дома: ";
	std::cin >> cf_3;
	std::cout << "Введите количество этажей третьего дома: ";
	std::cin >> hf_3;

	std::cout << "Дома: " << std::endl;
	std::cout << "1) " << cf_1 << " " << hf_1 << std::endl;
	std::cout << "2) " << cf_2 << " " << hf_2 << std::endl;
	std::cout << "3) " << cf_3 << " " << hf_3 << std::endl;
}

void user_request(std::string &user_answer_color, int &user_answer_floor) {
	std::cout << "Введите цвет дома: ";
	std::cin >> user_answer_color;
	std::cout << "Введите количества этажей: ";
	std::cin >> user_answer_floor;
}

void print(std::string& cf_1, std::string& cf_2, std::string& cf_3, int& hf_1, int& hf_2, int& hf_3) {
	std::cout << "Дома: " << std::endl;
	std::cout << "1) " << cf_1 << " " << hf_1 << std::endl;
	std::cout << "2) " << cf_2 << " " << hf_2 << std::endl;
	std::cout << "3) " << cf_3 << " " << hf_3 << std::endl;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	std::string color_first = "red",
				color_second = "green",
				color_three = "green",
				user_answer_color,
				temp;

	int floor_first = 3,
		floor_second = 3,
		floor_three = 2,
		user_answer_floor;

	print(color_first, color_second, color_three, floor_first, floor_second, floor_three);

	std::cout << "Хотите поменять искомые дома? yes или no: ";
	std::cin >> temp;
	
	if (temp == "yes") {
		request(color_first, color_second, color_three, floor_first, floor_second, floor_three);
	}

	user_request(user_answer_color, user_answer_floor);

	std::cout << std::endl;
	std::cout << "Не обходимо осмотреть дома:" << std::endl;
	
	if (user_answer_color != "?" && user_answer_floor != -1) {
		if (user_answer_color == color_first && user_answer_floor > 0) {
			std::cout << 1 << std::endl;
		}
		if (user_answer_color == color_second && user_answer_floor > 0) {
			std::cout << 2 << std::endl;
		}
		if (user_answer_color == color_three && user_answer_floor > 0) {
			std::cout << 3 << std::endl;
		}	
	}
	if (user_answer_color != "?" && user_answer_floor == -1) {
		if (user_answer_color == color_first && user_answer_floor == -1) {
			std::cout << 1 << std::endl;
		}
		if (user_answer_color == color_second && user_answer_floor == -1) {
			std::cout << 2 << std::endl;
		}
		if (user_answer_color == color_three && user_answer_floor == -1) {
			std::cout << 3 << std::endl;
		}
	}
	if (user_answer_color == "?" && user_answer_floor != -1) {
		if (user_answer_color == "?" && user_answer_floor == user_answer_floor) {
			std::cout << 1 << std::endl;
		}
		if (user_answer_color == "?" && user_answer_floor == user_answer_floor) {
			std::cout << 2 << std::endl;
		}
		if (user_answer_color == "?" && user_answer_floor == user_answer_floor) {
			std::cout << 3 << std::endl;
		}
	}

	return 0;
}