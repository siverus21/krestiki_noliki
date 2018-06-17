#include <iostream>
#include <locale>
#include <string>

using namespace std;
int mas[3][3];
char name1[30];
char name2[30];

void pravilo() {
	cout << "Каждый игрок ходит по очереди." << endl;
	cout << "Первым ходит игрок1 и у него код '1'." << endl;
	cout << "После 1 игрока, ходит игрок2 и у него код '2'." << endl;
	cout << "[1] [2] [3] " << endl;
	cout << "[4] [5] [6] " << endl;
	cout << "[7] [8] [9] " << endl;
	cout << "Введи свое имя, игрок 1: ";
	  cin.getline(name1 , 30);
	cout << "Введи свое имя, игрок 2: ";
	cin.getline(name2 , 30);
	cout << endl;
}

void map() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mas[i][j] = 0;
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

void game() {
	int a = 0;
	cin >> a;
	if (a == 1) {
		mas[0][0] = 1;
	}
	else if (a == 2) {
		mas[0][1] = 1;
	}
	else if (a == 3) {
		mas[0][2] = 1;
	}
	else if (a == 4) {
		mas[1][0] = 1;
	}
	else if (a == 5) {
		mas[1][1] = 1;
	}
	else if (a == 6) {
		mas[1][2] = 1;
	}
	else if (a == 7) {
		mas[2][0] = 1;
	}
	else if (a == 8) {
		mas[2][1] = 1;
	}
	else if (a == 9) {
		mas[2][2] = 1;
	}
	else {
		cout << "nevernoe chislo" << endl;
	}
}

void game1() {
	int b = 0;
	cin >> b;
	if (b == 1) {
		mas[0][0] = 2;
	}
	else if (b == 2) {
		mas[0][1] = 2;
	}
	else if (b == 3) {
		mas[0][2] = 2;
	}
	else if (b == 4) {
		mas[1][0] = 2;
	}
	else if (b == 5) {
		mas[1][1] = 2;
	}
	else if (b == 6) {
		mas[1][2] = 2;
	}
	else if (b == 7) {
		mas[2][0] = 2;
	}
	else if (b == 8) {
		mas[2][1] = 2;
	}
	else if (b == 9) {
		mas[2][2] = 2;
	}
	else {
		cout << "nevernoe chislo" << endl;
	}
}

void obn() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	pravilo();
	map();
	bool d = false;
	int q = 0;
	q = rand() % 2 + 1;
	if (q == 1)
	{
		cout << "Первым ходит игрок: " << name1 << endl;
		while (d != true)
		{
			game();
			obn();
			if (((mas[0][0] == 1) && (mas[0][1] == 1) && (mas[0][2] == 1)) || ((mas[1][0] == 1) && (mas[1][1] == 1) && (mas[1][2] == 1)) || ((mas[2][0] == 1) && (mas[2][1] == 1) && (mas[2][2] == 1))
				|| ((mas[0][0] == 1) && (mas[1][0] == 1) && (mas[2][0] == 1)) || ((mas[0][1] == 1) && (mas[1][1] == 1) && (mas[2][1] == 1)) || ((mas[0][2] == 1) && (mas[1][2] == 1) && (mas[2][2] == 1))
				|| ((mas[0][0] == 1) && (mas[1][1] == 1) && (mas[2][2] == 1)) || ((mas[0][2] == 1) && (mas[1][1] == 1) && (mas[2][0] == 1))) {
				d = true;
				cout << "Победил: " << name1 << endl;
			}
			if (d == true) {
				break;
			}
			game1();
			obn();
			if (((mas[0][0] == 2) && (mas[0][1] == 2) && (mas[0][2] == 2)) || ((mas[1][0] == 2) && (mas[1][1] == 2) && (mas[1][2] == 2)) || ((mas[2][0] == 2) && (mas[2][1] == 2) && (mas[2][2] == 2))
				|| ((mas[0][0] == 2) && (mas[1][0] == 2) && (mas[2][0] == 2)) || ((mas[0][1] == 2) && (mas[1][1] == 2) && (mas[2][1] == 2)) || ((mas[0][2] == 2) && (mas[1][2] == 2) && (mas[2][2] == 2))
				|| ((mas[0][0] == 2) && (mas[1][1] == 2) && (mas[2][2] == 2)) || ((mas[0][2] == 2) && (mas[1][1] == 2) && (mas[2][0] == 2))) {
				d = true;
				cout << "Победил: " << name2 << endl;
			}
		}
	}
	else if (q == 2) {
		cout << "Первым ходит игрок: " << name2 << endl;
		while (d != true)
		{
			game1();
			obn();
			if (((mas[0][0] == 2) && (mas[0][1] == 2) && (mas[0][2] == 2)) || ((mas[1][0] == 2) && (mas[1][1] == 2) && (mas[1][2] == 2)) || ((mas[2][0] == 2) && (mas[2][1] == 2) && (mas[2][2] == 2))
				|| ((mas[0][0] == 2) && (mas[1][0] == 2) && (mas[2][0] == 2)) || ((mas[0][1] == 2) && (mas[1][1] == 2) && (mas[2][1] == 2)) || ((mas[0][2] == 2) && (mas[1][2] == 2) && (mas[2][2] == 2))
				|| ((mas[0][0] == 2) && (mas[1][1] == 2) && (mas[2][2] == 2)) || ((mas[0][2] == 2) && (mas[1][1] == 2) && (mas[2][0] == 2))) {
				d = true;
				cout << "Победил: " << name2 << endl;
			}
			if (d == true) {
				break;
			}
			game();
			obn();
			if (((mas[0][0] == 1) && (mas[0][1] == 1) && (mas[0][2] == 1)) || ((mas[1][0] == 1) && (mas[1][1] == 1) && (mas[1][2] == 1)) || ((mas[2][0] == 1) && (mas[2][1] == 1) && (mas[2][2] == 1))
				|| ((mas[0][0] == 1) && (mas[1][0] == 1) && (mas[2][0] == 1)) || ((mas[0][1] == 1) && (mas[1][1] == 1) && (mas[2][1] == 1)) || ((mas[0][2] == 1) && (mas[1][2] == 1) && (mas[2][2] == 1))
				|| ((mas[0][0] == 1) && (mas[1][1] == 1) && (mas[2][2] == 1)) || ((mas[0][2] == 1) && (mas[1][1] == 1) && (mas[2][0] == 1))) {
				d = true;
				cout << "Победил: " << name1 << endl;
			}

		}
	}
	system("pause");
	return 0;
}