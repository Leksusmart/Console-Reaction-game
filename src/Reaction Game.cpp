#include <iostream>
#include <chrono>
#include <Windows.h>
#include <string>
using namespace std;
void printYellowSignal();
void printGreenSignal();
void checkReaction();
void main() {
	setlocale(LC_ALL, "ru");
	cout << "\t\t\t\t\tДобро пожаловать в Проверку реакции!\n\t  В данной мини-игре вы должны после зелёного сигнала нажать на любую клавишу как можно быстрее.\n";
	bool wantsToPlay = true;
	string question;
	while (wantsToPlay) {
		cout << "\t\t\t\tГотовы начать? ";
		system("pause");
		printYellowSignal();
		Sleep(1000);
		printYellowSignal();
		Sleep(1000);
		printGreenSignal();
		checkReaction();
		cout << "Хотите продолжить играть? (Чтобы выйти напишите \"Нет\") Ответ: ";
		cin >> question;
		if (question == "ЌҐв") {
			wantsToPlay = false;
			system("cls");
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tСпасибо за игру!\n\n\n\n\n\n\n\n";
			cout << "\t\t\t\t"; system("pause");
		}
		else system("cls");
	}
}
void printYellowSignal() {
	cout << endl;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\t\t\t\t\t\t  " << "  ______" << endl;
	cout << "\t\t\t\t\t\t  " << " /"; SetConsoleTextAttribute(console, ((6 << 4) | 7)); cout << "      "; SetConsoleTextAttribute(console, 7); cout << '\\'<<endl;
	cout << "\t\t\t\t\t\t  " << '/'; SetConsoleTextAttribute(console, ((6 << 4) | 7)); cout << "        "; SetConsoleTextAttribute(console, 7); cout << '\\' << endl;
	cout << "\t\t\t\t\t\t  " << '|'; SetConsoleTextAttribute(console, ((6 << 4) | 7)); cout << "        "; SetConsoleTextAttribute(console, 7); cout << '|' << endl;
	cout << "\t\t\t\t\t\t  " << '\\'; SetConsoleTextAttribute(console, ((6 << 4) | 7)); cout << "        "; SetConsoleTextAttribute(console, 7); cout << '/' << endl;
	cout << "\t\t\t\t\t\t  " << " \\"; SetConsoleTextAttribute(console, ((6 << 4) | 7)); cout << "______"; SetConsoleTextAttribute(console, 7); cout << '/' << endl;
}
void printGreenSignal() {
	cout << endl;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\t\t\t\t\t\t  " << "  ______" << endl;
	cout << "\t\t\t\t\t\t  " << " /"; SetConsoleTextAttribute(console, ((2 << 4) | 7)); cout << "      "; SetConsoleTextAttribute(console, 7); cout << '\\' << endl;
	cout << "\t\t\t\t\t\t  " << '/'; SetConsoleTextAttribute(console, ((2 << 4) | 7)); cout << "        "; SetConsoleTextAttribute(console, 7); cout << '\\' << endl;
	cout << "\t\t\t\t\t\t  " << '|'; SetConsoleTextAttribute(console, ((2 << 4) | 7)); cout << "        "; SetConsoleTextAttribute(console, 7); cout << '|' << endl;
	cout << "\t\t\t\t\t\t  " << '\\'; SetConsoleTextAttribute(console, ((2 << 4) | 7)); cout << "        "; SetConsoleTextAttribute(console, 7); cout << '/' << endl;
	cout << "\t\t\t\t\t\t  " << " \\"; SetConsoleTextAttribute(console, ((2 << 4) | 7)); cout << "______"; SetConsoleTextAttribute(console, 7); cout << '/' << endl;
}
void checkReaction() {
	auto begin = chrono::steady_clock::now();
	cout << "\t\t\t\t  "; system("pause");
	auto end = chrono::steady_clock::now();
	auto elapsed_ms = chrono::duration_cast<chrono::milliseconds>(end - begin);
	cout << "Скорость реакции: " << elapsed_ms.count() << " мс\n";
}