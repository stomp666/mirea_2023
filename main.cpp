/*
нужен _CRT_SECURE_NO_WARNINGS
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

std::string strfor9 = "0123456789ABCDEF";
std::string taskstr = "0123456789      QWERTYUIOPASDFGHJKLZXCVBNMq w e r t y u i o p a s d f g h j k l z x c v b n m ";
int script_e = 0; // это счётчик для выполненого кода. используется в script_executed()
const double pi = 3.14159265358979323846; // это число пи, используется в математических заданиях
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // а это для цвета консоли
int cConsole = 14; // это ЖЁЛТЫЙ цвет для консоли...
int haxConsole = 10;


// простите за то что ниже, листайте в строчку 147

std::string frame2 =
"          A\n"
"         @Aa\n"
"        @@Aaa\n"
"       @@@Aaaa\n"
"      @@@@Aaaaa\n"
"     @@@@@Aaaaaa\n"
"    @@@@@@Aaaaaaa\n"
"   @@@@@@@Aaaaaaaa\n"
"  @@@@@@@@Aaaaaaaaa\n"
" @@@@@@@@@Aaaaaaaaaa\n"
"@@@@@@@@@@Aaaaaaaaaaa\n"
"   @@@@@@@Aaaaaaaa\n"
"        @@Aaa\n"
"          \n";
std::string frame3 =
"          A\n"
"         @Aa\n"
"        @@Aaa\n"
"       @@Aaaaa\n"
"      @@Aaaaaaa\n"
"     @@Aaaaaaaaa\n"
"    @@Aaaaaaaaaaa\n"
"   @@Aaaaaaaaaaaaa\n"
"  @@Aaaaaaaaaaaaaaa\n"
" @@Aaaaaaaaaaaaaaaaa\n"
"@@Aaaaaaaaaaaaaaaaaaa\n"
" @Aaaaaaaaaaaaaa\n"
"  \n";
std::string frame4 =
"          A\n"
"         Aaa\n"
"        Aaaaa\n"
"       Aaaaaaa\n"
"      Aaaaaaaaa\n"
"     Aaaaaaaaaaa\n"
"    Aaaaaaaaaaaaa\n"
"   Aaaaaaaaaaaaaaa\n"
"  Aaaaaaaaaaaaaaaaa\n"
" Aaaaaaaaaaaaaaaaaaa\n"
"Aaaaaaaaaaaaaaaaaaaaa\n"
"                   \n";;
std::string frame1 =
"          A\n"
"         @Aa\n"
"        @@Aaa\n"
"       @@@@Aaa\n"
"      @@@@@@Aaa\n"
"     @@@@@@@@Aaa\n"
"    @@@@@@@@@@Aaa\n"
"   @@@@@@@@@@@@Aaa\n"
"  @@@@@@@@@@@@@@Aaa\n"
" @@@@@@@@@@@@@@@@Aaa\n"
"@@@@@@@@@@@@@@@@@@Aaa\n"
"     @@@@@@@@@@@@@Aa\n"
"                  \n";
std::string frame5 =
"          A\n"
"         aA@\n"
"        aaA@@\n"
"       aaaaA@@\n"
"      aaaaaaA@@\n"
"     aaaaaaaaA@@\n"
"    aaaaaaaaaaA@@\n"
"   aaaaaaaaaaaaA@@\n"
"  aaaaaaaaaaaaaaA@@\n"
" aaaaaaaaaaaaaaaaA@@\n"
"aaaaaaaaaaaaaaaaaaA@@\n"
"     aaaaaaaaaaaaaA@\n"
"                  \n";
std::string frame6 =
"          A\n"
"         aA@\n"
"        aaA@@\n"
"       aaaA@@@\n"
"      aaaaA@@@@\n"
"     aaaaaA@@@@@\n"
"    aaaaaaA@@@@@@\n"
"   aaaaaaaA@@@@@@@\n"
"  aaaaaaaaA@@@@@@@@\n"
" aaaaaaaaaA@@@@@@@@@\n"
"aaaaaaaaaaA@@@@@@@@@@\n"
"   aaaaaaaA@@@@@@@\n"
"        aaA@@\n"
"          \n";
std::string frame7 =
"          A\n"
"         aA@\n"
"        aaA@@\n"
"       aaA@@@@\n"
"      aaA@@@@@@\n"
"     aaA@@@@@@@@\n"
"    aaA@@@@@@@@@@\n"
"   aaA@@@@@@@@@@@@\n"
"  aaA@@@@@@@@@@@@@@\n"
" aaA@@@@@@@@@@@@@@@@\n"
"aaA@@@@@@@@@@@@@@@@@@\n"
" aA@@@@@@@@@@@@@\n"
"  \n";
std::string frame8 =
"          A\n"
"         A@@\n"
"        A@@@@\n"
"       A@@@@@@\n"
"      A@@@@@@@@\n"
"     A@@@@@@@@@@\n"
"    A@@@@@@@@@@@@\n"
"   A@@@@@@@@@@@@@@\n"
"  A@@@@@@@@@@@@@@@@\n"
" A@@@@@@@@@@@@@@@@@@\n"
"A@@@@@@@@@@@@@@@@@@@@\n"
"                   \n";
void loading()
{
	int percent = 0, current = 0;
	std::string spacebar = "";
	char square = (char)254u;
	for (int i = 0; i < 11; i++)
	{
		SetConsoleTextAttribute(hConsole, current);
		percent = (i * 10);
		spacebar += square;
		current++;
		std::cout << spacebar << "\n" << percent << "%";
		if (i == 10)
		{
			printf("\nHi! :D");
			Sleep(1000);
		}
		Sleep(10);
		system("CLS");
	}
}
void pyramid()
{
	SetConsoleTextAttribute(hConsole, 14);
	for (int i = 0; i < 2; i++)
	{
		std::cout << "\n" << frame1; Sleep(75); system("cls"); std::cout << "\n" << frame2; Sleep(75); system("cls"); std::cout << "\n\n" << frame3; Sleep(75); system("cls");  std::cout << "\n\n" << frame4; Sleep(75); system("cls");
		std::cout << "\n" << frame5; Sleep(75); system("cls"); std::cout << "\n" << frame6; Sleep(75); system("cls"); std::cout << frame7; Sleep(75); system("cls"); std::cout << frame8; Sleep(75); system("cls");
	}
	std::cout << frame1; Sleep(40); system("cls");
	std::cout << frame2; printf("\n@stomp666\n\n"); Sleep(1000); system("cls");
}
void limbo()
{
	// короче. в программе 4_1 есть ошибка при вводе слишком большого числа. я его не смог удалить НО смог убрать баг который уничтожает программу. Вместо бесконечного цикла я ввёл это предупреждение, которое длится очень много тиков... кто шарит, подскажите как нормально избавиться от прикола в 4_1?( 
	SetConsoleTextAttribute(hConsole, 12);
	system("CLS");
	std::cout << ">:/ If you see this, that means the program is going to be shut down soon.";
	Sleep(1000);
	std::cout << "\n>:/ If you are wondering what happened: the script has activated an alert system, that will put you in this state.";
	Sleep(1000);
	std::cout << "\n>:/ The script is going to be terminated now. Do not do that again.";
	Sleep(10000);
	system("CLS");
	std::cout << "Total scripts executions: " << script_e << "\n\n\n\n\n\n\n\n\n\n";
	exit(0);
}
void cin_fixer()
{
	std::string exitS; // для тех кто читает это - тут какой-то рофл происходит, если этого не будет то сломается код драйвера, НО эта штука даже не просится в программе? Костыли ещё те, но я глупенький... :c
	std::getline(std::cin, exitS); // для всех заданий которые имеют cin и потом ничего
}
void script_start()
{
	system("CLS");
	SetConsoleTextAttribute(hConsole, haxConsole); // задаёт цвет консоли. это крута :D... вернитесь наверх кода и почитайте что за hConsole и cConsole
	std::cout << "Script ready.\n";
}
void script_executed()
{
	script_e++;
	int enter{};
	printf("\nPress Enter to continue");
	std::cin.get() >> enter;
	std::cout << "\nWait... ";
	for (double a = 19; a > 0; a--)
	{
		std::cout << a / 10;
		Sleep(100);
		if (a != 10)
		{
			std::cout << "\b\b\b";
		}
		else
		{
			std::cout << "\b";
		}
	}
	system("CLS");
	SetConsoleTextAttribute(hConsole, haxConsole); // ресетает цвет консоли на зелень ... 28.10.2023 - я дурак ввёл 0 и в итоге было НИЧЕГО :D, 10 работает
	std::string scriptexec = ">:/ Script successfully executed, please select a new task...\b\n\n";
	char* array = new char[scriptexec.length() + 1];
	array[scriptexec.length()] = '\0';
	for (int i = 0; i < scriptexec.length(); i++)
	{
		array[i] = scriptexec[i];
	}
	for (int animate = 0; animate < 62; animate++)
	{
		std::cout << array[animate]; Sleep(2);
		if (animate > 59)
		{
			Sleep(100);
		}
	}
	delete[] array;
	system("CLS");
}
void choosecolor()
{
	system("cls");
	for (int k = 255; k > 0; k--)
	{
		SetConsoleTextAttribute(hConsole, k);
		std::cout << k << " Color hex you can input\n";
	}
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n\n\nEnter a color value\n\n");
	printf("-> "); std::cin >> cConsole;
	if (cConsole <= 0 || cConsole >= 256)
	{
		SetConsoleTextAttribute(hConsole, 10);
		printf("MALFUNCTION 1");
		script_executed();
	}
	int temp = cConsole, temp2 = 10, logic = 16, multi = 1;
	for (int i = 1; i < 255; i++)
	{
		if (i == temp && i > 16)
		{
			haxConsole = 10 + (logic * multi);
			break;
		}
		else if (i <= 16 && i == temp)
		{
			haxConsole = 10;
			break;
		}
		else
		{
			multi++;
		}
	}
	cin_fixer();
	SetConsoleTextAttribute(hConsole, haxConsole);
	system("cls");
}

void createfile(std::string str)
{
	std::ofstream textFile("textfile.txt"); // чисто файл создаёт
	if (textFile.is_open()) {
		textFile << str;
		textFile.close();
	}
}
void sortString(std::string& str)
{
	sort(str.begin(), str.end());
}
std::string filetostring()
{
	std::ifstream f("textfile.txt"); // input stream я хз чё тут объяснять
	std::string str;
	if (f) { // если ФАЙЛ !!
		std::ostringstream ss; // типо переменная в виде out string stream
		ss << f.rdbuf(); // читает данные типо readbuffer
		str = ss.str(); // результат
	}
	return str;
}
std::string findWordInFile(std::string str)
{
	std::ifstream file("textfile.txt");
	std::string str_word, word_store;
	int foundCalc = 0;
	bool found = false;
	if (file.is_open())
	{
		while (file >> word_store)
		{
			if (word_store == str)
			{
				str_word += str;
				str_word.push_back(' ');
				found = true;
				foundCalc += 1;
			}
		}

	}
	if (found == true)
	{
		std::cout << "\nWe found: " << str_word;
		printf("\nTimes found: %d", foundCalc);
	}
	else
	{
		printf("\nWe found no matching word.\n");
	}
	printf("\n");
	return str_word;
	file.close();
}
std::string findLineInFile(std::string str) // сделать чтобы линию читало
{
	//std::ifstream file("textfile.txt");
	std::string str_word, word_store;
	int foundCalc = 0;
	bool found = false;
	std::string s = filetostring(); // переписывается из функции выше. почему я разделил? хз
	size_t pos = s.find(str); // пришлось size_t юзать. типо может хранить в себе теоретически максимальное значение
	if (pos != std::string::npos) // если наше size_t не равен концу файла (?)
		std::cout << "Found:  " << str << "\n"; // pos >> есть; str. нету ; нету
	else
		std::cout << "Not found\n";
	printf("\n");
	return str_word;
}
std::string findUnderLineInFile(std::string str)
{
	std::string s = filetostring(); // переписывается из функции выше. почему я разделил? хз
	size_t pos = s.find(str); // пришлось size_t юзать. типо может хранить в себе теоретически максимальное значение
	if (pos != std::string::npos) // если наше size_t не равен концу файла (?)
		std::cout << "Found at pos:  " << pos+1 << "\n";
	else
		std::cout << "Not found\n";
	return s;
}
std::string circle_calc(double radius)
{
	std::string result;
	double result_calc = 0;
	if (radius > 0)
	{
		result_calc = pi * pow(radius, 2);
		result = std::to_string(result_calc);
	}
	else
	{
		std::cout << "Cannot calculate.\b\n";
	}
	return result;
}
std::string triangle_calc(double a, double b, double h, double degree)
{
	// условия = 180 градусов, прямой = 1 угол = 90, острый = один угол <90, тупой = один угол >90;
	// для прямого, формула a*b/2
	// для острого a*h/2
	// для тупого a*h/2
	std::string result;
	double result_calc = 0;
	double temp = a * sin(degree);
	if (a > 0 and h > 0 and b > 0 and degree <= 180 and degree > 0 && temp == h)
	{
		if (degree == 90)
		{
			result_calc = a * b / 2;
			result = std::to_string(result_calc);
		}
		else if (180 > degree > 0)
		{
			result_calc = a * h / 2;
			result = std::to_string(result_calc);
		}
	}
	else
	{
		std::cout << "Cannot calculate.\b\n";
	}
	return result;
}
std::string rectangle_calc(double a, double b)
{
	std::string result;
	double result_calc = 0;
	if (a > 0 and b > 0)
	{
		result_calc = a * b;
		result = std::to_string(result_calc);
	}
	else
	{
		std::cout << "Cannot calculate.\b\n";
	}
	return result;
}
std::string sign_x(int n) // подпрограмма для задания 2
{
	std::string na;
	if (n > 0)
	{
		na = "1";
	}
	else if (n == 0)
	{
		na = '0';
	}
	else
	{
		na = "-1";
	}
	return na;
}
std::string removal(std::string s) // крч алгоритм по удалению букв из строк, как он работает с.м. void task3_1()
{
	std::string ns; // создаётся новая строка
	for (int i = 0; i < s.length(); i++) // цикл 
	{
		if (s.at(i) >= '0' && s.at(i) <= '9' || s.at(i) == '.') // проверка, если текущий символ строки имеет в себе цифру от 0 до 9; 18.10.2023 ИЛИ . ПОТОМУ ЧТО ВТОРОЕ ЗАДАНИЕ =)
		{
			ns += s.at(i); // то ввести этот символ в новую строку ns
		}
	}
	return ns;
}
std::string dec_to_new_x(int x2d_res, int n_new_sys) // от пользователя нужно только система счисления. из 10 в x. x2d_res = x to dec result, берётся из задания
{
	std::string result;
	while (x2d_res > 0) {
		int rem = x2d_res % n_new_sys;
		result = strfor9[rem] + result;
		x2d_res /= n_new_sys;
	}
	return result;
}
std::string chargen(int limit)
{
	std::string generator;
	for (int i = 1; i < 1 + limit + 10; i++)
	{
		char x = taskstr[rand() % 94];
		generator += x;
	}
	return generator;
}
std::string regen(int limit, int gen)
{
	std::string keep;
	for (int i = 0; i < gen; i++)
	{
		chargen(limit);
		if (i == gen - 1)
		{
			keep = chargen(limit);
		}
	}
	return keep;
}
int x_to_dec(std::string num, int sys) {

	int result = 0;
	int len = num.size();
	for (int i = 0; i < len; i++) {
		char c = num[i];
		int value = strfor9.find(toupper(c));
		result += value * pow(sys, len - i - 1);
	}
	return result;
}
int number_conv(char number)
{
	// I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
	// if number1 < number2 ; number2-number1 todo
	// не больше 1 вычитания todo
	// не больше 3 прибавлений todo
	switch (number)
	{
	case 'I':
	case 'i':
		return 1;
	case 'V':
	case 'v':
		return 5;
	case 'X':
	case 'x':
		return 10;
	case 'L':
	case 'l':
		return 50;
	case 'C':
	case 'c':
		return 100;
	case 'D':
	case 'd':
		return 500;
	case 'M':
	case 'm':
		return 1000;
	default:
		return 0;
	}
}
int NOD(int a, int b) // нод = GCD на англе
{
	if (a == 0)
	{
		return abs(b); // если число а = 0 то типо делить дальше некуда
	}
	else
	{
		return abs(NOD(b % a, a)); // а если нет то можно делить на А
	}
}
int SOE(int a) // soe = sieve of erethosphetes, или же просто считает простые числа. как же меня бесит матан
{
	// тут рофло-баг, в конце всегда будет написана ерунда
	bool* prime = new bool[a+1]; 
	memset(prime, true, sizeof(prime)); // memset заполняет ячейки памяти. как расписано: заполняем prime, при условии true, в размере prime
	for (int p = 2; p * p < a+1; p++)
	{ // p = 2 потому что это первое праймовое число
		if (prime[p] == true)
		{
			for (int i = p * p; i < a+1; i += p) // по правилам матеши (круто)
				prime[i] = false;
		}
	}
	for (int p = 2; p <= a; p++) // для вывода числ
		if (prime[p])
			std::cout << p << " ";
	delete[] prime;
	return 0;
}
int int5to2()
{
	int num_in2{}, result{}, tracker = 0;
	bool alert = false;
	std::string temp, num, tempf;
	std::string arraytemp[2000]{};
	for (int j = 0; j < 2000; j++)
	{
		printf("-> "); std::cin >> num; printf("\n");

		if (num == "0")
		{
			break;
		}
		for (int i = 0; i < num.length(); i++)
		{
			if (num[i] <= 'f' && num[i] >= '5')
			{
				alert = true;
				printf("MALFUNCTION 1\n");
				return 0;
			}
		}
		arraytemp[j] = num;
		tracker++;
	}
	std::string* array5 = new std::string[tracker];
	int* array2 = new int[tracker];
	for (int i = 0; i < tracker; i++)
	{
		array5[i] = arraytemp[i];
	}

	for (int i = 0; i < tracker; i++)
	{
		temp = array5[i];
		num_in2 = x_to_dec(temp, 5);
		tempf = dec_to_new_x(num_in2, 2);
		result = stoi(tempf);
		array2[i] = result;
	}
	printf("Code result\n");
	for (int i = 0; i < tracker; i++)
	{
		std::cout << array2[i] << "\n";
	}
	delete[] array5; delete[] array2;
	return 0;
}

void menu() {
	system("cls");
	printf("You have chosen menu. Every task is written here.\nTask number is assigned by I-J, where I = homework number and J = task number\n\n\n");
	std::cout << "                                            Chapter I\n\n\n";
	printf("1-1: Print student name.\n1-2: User enters 2 numbers. Program needs to calculate summary, subtraction, multiplication and if possible division \n1-3: User enters b and c. Calculate the equation bx + c = 0\n1-4: User enters a b and c. Calculate the equation ax^2 + bx + c = 0\n1-5: Program asks user some questions. User enters 'yes' or 'no'. Determine if user has light in their room.\n");
	printf("\n2-1: User enters a number. Calculate cone value.\n2-2: User enters a number. Calculate a complex number with ln and roots.\n2-3: User enters a number. Calculate the following function - z = ln(b-y) root(b-x)\n2-4: User enters a number. Print 10 numbers starting from user number.\n2-5: User enters a number. Print out values for equation from -4 to 4 with a step of 0.5\n");
	printf("\n3-1: User enters some numbers. Calculate how much he took from bank\n3-2: User enters some numbers. Calculate debt percent using an algorithm.\n3-3: Copy file data from disk.\n3-4: File filtering.\n3-5: Letter sort.\n");
	printf("\n4-1: User enters 10 numbers. Copy them into a file and print out summary of all numbers.\n4-2: User enters a number. Print out 1 if number is over 0, 0 if number is equal to 0 and -1 if number is less than 0.\n4-3: User enters a shape and number. Calculate shape value.\n4-4: Print 1912 US flag.\n4-5: Print out a sin(x) function.\n4-6: Rome number calculator.\n4-7: Random number generator.\n4-8: After collecting data about sellers, calculate other data.\n4-9: Binary to HEX calculator. User can choose any system of numbers from 2 to 16.\n");
	printf("\n5-1: Euclid algorithm.\n5-2: Sieve of Erethosphetes.\n5-3-1: Search for a specific combination of words in a text file. (Var16)\n5-3-2: Search for a substring in a string based on a given condition. (Var25)\n5-3-3: Convert an array of numbers in 5th SON to Binary. (Var25)\n5-3-4: String is given of S length with N characters. Calculate maximum amount of spacebar characters. (Var35)\n5-3-5: Create a file and calculate how many strings of characters go from least to most. (Var25)\n5-3-6: User enters matrix numbers. Calculate summary of columns.(Var50)\n\n\n");
	std::cout << "                                            Chapter II\n\n\n";
	printf("6-1: A[1] < A[i] < A[10] (Var33)\n6-2: Invert array (Var43)\n6-3: Rotate M matrix 270 degrees (Var62)\n6-4: User enters numbers. Program takes max from given rules and calculates an equation (Var69)\n6-5: Print every correct parenthesis equation with length of 10 (Var87)\n");
	std::cout << "                                            Chapter III\n\n\n";
	printf("7-any_char: b a l l s\n");
	script_executed();
}
// дз 1
void task1_1()
{
	script_start(); // вкратце цвет + вывод готовности скрипта
	std::string bromhexine = "Made by Alexander Tolstov...";
	char* char_array = new char[bromhexine.length() + 1]; // создание переменной массива, которая будет равна новому символу взятой из всей длины строки (а если легче то это как задание 3_5 из прошлой дз)
	char_array[bromhexine.length()] = '\0'; // детерминация массива 
	for (int anim = 0; anim < bromhexine.length(); anim++) // пробегает всю строчку
	{
		char_array[anim] = bromhexine[anim]; // перезаписывает символы
	}
	for (int b = 0; b < 28; b++)
	{
		std::cout << char_array[b]; Sleep(10); // анимация
		if (b > 24)
		{
			Sleep(200);
		}
	}
	delete[] char_array; // я додумался написать это чтоб не было утечки памяти
	std::cout << std::endl;
	script_executed();
}
void task1_2()
{
	script_start(); // вкратце цвет + вывод готовности скрипта
	std::cout << "      Enter two numbers...\b\n";
	int number1 = 0, number2 = 0;
	std::cout << "-> "; std::cin >> number1;  std::cout << "\n-> "; std::cin >> number2;
	std::cout << "   Select an operation...\b\n\n" << "1: +, 2: -, 3: *, 4: /\b\n\nTo exit this script, press 5.\n\n";
	std::string selector;
	while (selector[0] != '5')
	{
		switch (selector[0])
		{
		case '1':
			std::cout << "Result: " << number1 + number2 << std::endl;
			break;
		case '2':
			std::cout << "Result: " << number1 - number2 << std::endl;
			break;
		case '3':
			std::cout << "Result: " << number1 * number2 << std::endl;
			break;
		case '4':
			if (number1 != 0 && number2 != 0)
			{
				std::cout << "Result: " << number1 / number2 << std::endl;
			}
			else
			{
				std::cout << "The sun smiles at you with eternal malice." << std::endl;
			}
			break;
		default:
			break;
		}
		std::cout << "-> "; std::getline(std::cin, selector);
	}
	script_executed();
}
void task1_3()
{
	//задача bx+c = 0 !!! x = -c/b
	script_start(); // вкратце цвет + вывод готовности скрипта
	std::cout << "Enter 2 number to solve for X...\b\n\n              bx+c = 0\b\n\n";
	double b = 0, c = 0, x = 0;
	std::string bfix, cfix;
	std::cout << "-> "; std::getline(std::cin, bfix);
	std::cout << "-> "; std::getline(std::cin, cfix);
	std::string nb = removal(bfix);
	std::string nc = removal(cfix);
	if (std::empty(nc) == 1 || std::empty(nb) == 1)
	{
		std::cout << "Cannot execute.\nAre you sure you entered numerals?\n";
	}
	else
	{
		b = stod(nb);
		c = stod(nc);
		if (b != 0)
		{
			x = -c / b;
			std::cout << "Result: " << x << std::endl;
		}
		else
		{
			std::cout << "Cannot calculate...\b\n";
		}
	}
	script_executed();
}
void task1_4()
{
	// ужасный код но он взят с первого занятия и мне лень его переписывать
	// ax^2 + bx + c = 0... 
	script_start(); // вкратце цвет + вывод готовности скрипта
	double a = 0, b = 0, c = 0, disc = 0, x1 = 0, x2 = 0;
	std::string error = "Result: x = 0\b\n";
	std::string afix, bfix, cfix;
	std::cout << "Enter 3 number to solve a square equation...\b\n";
	std::cout << "-> "; std::getline(std::cin, afix);
	std::cout << "-> "; std::getline(std::cin, bfix);
	std::cout << "-> "; std::getline(std::cin, cfix);
	std::string afixed = removal(afix);
	std::string bfixed = removal(bfix);
	std::string cfixed = removal(cfix);
	if (std::empty(afixed) == 1 || std::empty(bfixed) == 1 || std::empty(cfixed) == 1)
	{
		std::cout << "Cannot execute.\nAre you sure you entered numerals?\n";
	}
	else
	{
		a = stod(afix);
		b = stod(bfix);
		c = stod(cfix);
		disc = pow(b, 2) - 4 * a * c; // дискриминант
		if (a != 0)
		{
			if (disc > 0)
			{
				x1 = (-b + sqrt(disc)) / (2 * a);
				x2 = (-b + sqrt(disc)) / (2 * a);
			}
			if (disc == 0)
			{
				if (b != 0)
				{
					x1 = -b / (2 * a);
				}
				else
				{
					std::cout << error;
				}
			}
			else
			{
				if (b != 0)
				{
					if (c == 0)
					{
						std::cout << error;
					}
					else
					{
						x1 = c / b;
						std::cout << "x = " << x1 << std::endl;
					}
				}
				else
				{

					std::cout << "Result: X can be anything\b\n";
				}
			}
		}
	}
	script_executed();
}
void task1_5()
{
	script_start(); // вкратце цвет + вывод готовности скрипта
	std::cout << "Answer the following question.\b\n 1 = yes\n 0 = no\n\n";
	bool outside, lamp, curtains;
	std::cout << "Is it sunny?\n\n";
	std::cout << "-> "; std::cin >> outside;
	if (outside == 1)
	{
		std::cout << "Are your curtains open?\n\n";
		std::cout << "-> "; std::cin >> curtains;

		if (curtains == 0)
		{
			std::cout << "Your divine light was severed.\n\n";
		}
		else
		{
			std::cout << "Divine light established.\n\n";
		}
	}
	else
	{
		std::cout << "Is your lamp on?\n\n";
		std::cout << "-> "; std::cin >> lamp;
		if (lamp == 0)
		{
			std::cout << "Your divine light was severed.\n\n";
		}
		else
		{
			std::cout << "Divine light established.\n\n";
		}
	}
	cin_fixer();
	script_executed();
}
// дз 2
void task2_1()
{
	script_start(); // вкратце цвет + вывод готовности скрипта
	std::cout << "Enter 2 radius values and height to solve cone volume and surface level...\b\n\n";
	float radius1{}, radius2{}, height{}, length{};
	std::cout << "radius 1 = "; std::cin >> radius1; std::cout << std::endl;
	std::cout << "radius 2 = "; std::cin >> radius2; std::cout << std::endl;
	std::cout << "height = "; std::cin >> height; std::cout << std::endl;
	if (radius1 <= 0 or radius2 <= 0 or height <= 0)
	{
		std::cout << "Unsolvable. Did you enter in values less than 0?" << std::endl;
	}
	else
	{
		length = sqrt((pow(radius1 - radius2, 2)) + pow(height, 2));
		std::cout << "Cone volume value (V) is equal to... " << 1.0 / (3.0 * pi * (pow(radius1, 2) + radius1 * radius2 + pow(radius2, 2) * height)) << std::endl;
		std::cout << "Cone surface value (S) is equal to... " << pi * (pow(radius1, 2) + (radius1 + radius2) * length + (pow(radius2, 2))) << std::endl;
	}
	cin_fixer();
	script_executed();
}
void task2_2()
{
	script_start(); // вкратце цвет + вывод готовности скрипта
	float numbera{}, numberx{}, numberw{};
	std::cout << "Enter 2 number, correlating to A and X. Solve a(ln|x|), if |x| < 1, or sqrt(a-x^2), if |x|>1" << std::endl;
	std::cout << "a = "; std::cin >> numbera; std::cout << std::endl;
	std::cout << "x = "; std::cin >> numberx; std::cout << std::endl;
	if (abs(numberx) < 1 and numberx != 0)
	{
		numberw = numbera * log(abs(numberx));
		std::cout << "Your W value is equal to... " << numberw << std::endl;
	}
	else if (numberx == 0)
	{
		std::cout << "Undefined" << std::endl;
	}
	else
	{
		if (numbera > pow(numberx, 2))
		{
			numberw = sqrt(numbera - pow(numberx, 2));
			std::cout << "Your W value is equal to... " << numberw << std::endl;
		}
		else
		{
			std::cout << "Undefined" << std::endl;
		}
	}
	cin_fixer();
	script_executed();
}
void task2_3()
{
	script_start(); // вкратце цвет + вывод готовности скрипта
	std::cout << "Enter 3 number values to solve z = ln(b-y)*sqrt(b-x). " << std::endl;
	float numberX{}, numberY{}, numberB{}, numberZ;
	int check = 0;
	std::cout << "X = "; std::cin >> numberX; std::cout << std::endl;
	std::cout << "Y = "; std::cin >> numberY; std::cout << std::endl;
	std::cout << "B = "; std::cin >> numberB; std::cout << std::endl;
	if (numberB < numberX)
	{
		std::cout << "Does not exist." << std::endl;
		check += 1;
	}
	else if (check == 0 and numberB <= numberY)
	{
		std::cout << "Undefined." << std::endl;
		check += 1;
	}
	else
	{
		numberZ = log(numberB - numberY) * sqrt(numberB - numberX);
		std::cout << numberZ << std::endl;
	}
	cin_fixer();
	script_executed();
}
void task2_4()
{
	script_start();
	float numberN{}, Xnumber{};
	Xnumber = 0.0;
	std::cout << "Enter a number to get 10 new numbers. The calculation is x+=n, 10 times... " << std::endl;
	std::cout << "-> "; std::cin >> numberN;
	std::cout << "Your number list is... " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << Xnumber << std::endl;
		Xnumber += numberN;
	}
	cin_fixer();
	script_executed();
}
void task2_5()
{
	script_start();
	float finalnumberX, finalnumberY;
	finalnumberX = -4.0;
	while (finalnumberX <= 4)
	{
		if ((finalnumberX - 1) != 0)
		{
			finalnumberY = (pow(finalnumberX, 2) - 2 * finalnumberX + 2) / (finalnumberX - 1);
			std::cout << finalnumberY << std::endl;

		}
		else
		{
			std::cout << "Cannot divide by 0" << std::endl;
		}
		finalnumberX += 0.5;
	}
	script_executed();
}
// дз 3
void task3_1()
{
	script_start();
	double m;
	std::string pfix, sfix, nfix; // для алгоримтма создаются ещё переменные

	std::cout << "Input the following values: p,S,n" << std::endl; std::cout << "-> "; std::cin >> pfix; std::cout << "\n-> "; std::cin >> sfix; std::cout << "\n-> "; std::cin >> nfix; // p = %, s = summ, n = time ... вводятся переменные ДЛЯ АЛГОРИТМА
	std::string pN = removal(pfix); // исполнение алгоритма для введённых пользователем переменных
	std::string sN = removal(sfix); // после выполнения этой хери останутся только цифры
	std::string nN = removal(nfix); // если цифр нет, то будет пустая строка
	if (std::empty(pN) == 1 || std::empty(sN) == 1 || std::empty(nN) == 1) // если строка пустая, прога не выполняется
	{
		std::cout << "Cannot calculate.\b\n";
	}
	else // иначе выполняется 1000000 (s) 15 (p) 20 (n)
	{ // 0 1200 4
		double p = stod(pN); // перевод строки в числовое
		double s = stod(sN);
		double n = stod(nN);
		double r = p / 100;
		double a;
		double b;
		a = s * r * pow(1 + r, n);
		b = 12 * (pow(1 + r, n) - 1);
		m = a / b;
		if (p == 0) {
			std::cout << s / 12 / n;
		}
		else {
			std::cout << "Successful execution, result: " << m << std::endl;
		}
	}
	cin_fixer();
	script_executed();
}
void task3_2()
{
	script_start();
	double summary = 0.0, money = 0.0, money_sequel, percent = -100, time = 0.0, step = 5, epsilon = 0.01; //S = SUMMARY, M = MONEY, N = TIME, P = PERCENT
	std::string summaryfix, moneyfix, timefix; // reference to algorithm above (string removal)
	std::cout << "Input the following values:S, m, time\b\n"; std::cout << "-> "; std::cin >> summaryfix; std::cout << "-> "; std::cin >> moneyfix; std::cout << "-> "; std::cin >> timefix; // ввод данных
	std::string ns = removal(summaryfix); // reference to algorithm above (string removal)
	std::string na = removal(moneyfix); // reference to algorithm above (string removal)
	std::string nb = removal(timefix); // reference to algorithm above (string removal)
	int inter = 0; // не нужно, вообще.

	if (std::empty(summaryfix) == 1 || std::empty(moneyfix) == 1 || std::empty(timefix) == 1) // reference to algorithm above (string removal)
	{
		std::cout << "Cannot calculate.\b\n";
	}
	else
	{
		double a = summary * (percent / 100) * (pow(1 + (percent / 100), time));  // числитель
		double b = 12 * (pow(1 + (percent / 100), time) - 1); // знаминатель
		money = a / b; // рофл
		double summary = stod(ns); // reference to algorithm above (string removal)
		double money = stod(na); // reference to algorithm above (string removal)
		double time = stod(nb); // reference to algorithm above (string removal)
		if (summary >= 0 && money >= 0 && time > 0) // 1000000 13313.5 20 otvet 15
		{
			while (true)
			{
				percent += step;
				std::cout << percent << std::endl; 
				//^^^ DEBUG ДЛЯ ВЫВОДА
				double a = summary * (percent / 100) * (pow(1 + (percent / 100), time));
				double b = 12 * (pow(1 + (percent / 100), time) - 1);
				if (percent != 0)
				{
					money_sequel = a / b;
					std::cout << money_sequel << std::endl; //DEBUG!!!!!!!!!!!
					inter++;
				}
				else
				{
					money_sequel = summary / 12 / time;
					std::cout << money_sequel << std::endl;
					inter++;
				}
				if (abs(money_sequel - money) < epsilon) // Модуль текущего "денежного состояния" не больше эпсилона денежного состояния заданного пользователем...
				{
					std::cout << money << money_sequel << std::endl;
					std::cout << "Executed successfully: " << percent << "%\n";
					std::cout << "Steps taken while calculating: " << inter << std::endl;
					break;
				}
				else if (money_sequel > money)
				{
					percent -= step;
					//std::cout << percent << std::endl;
					step /= 10;
					inter++;
				}
			}
		}
		else
		{
			std::cout << "MALFUNCTION\n";
		}

	}
	cin_fixer();
	script_executed();
}
void task3_3()
{
	script_start();
	char userinput[255];
	char text[259]; // можно было через string но меня уронили в детстве.
	std::cout << "Input file value. (maximum of 255 symbols)\b\n";
	std::cout << "-> "; std::cin.getline(userinput, 255); // ><> fish
	std::ofstream textFile("text.txt");
	if (textFile.is_open()) {
		textFile << userinput;
		textFile.close();
	}
	else
	{
		std::cout << "MALFUNCTION\n";
	}
	std::ifstream file("text.txt");
	if (!file.is_open())
	{
		std::cout << "MALFUNCTION\n";
	}
	else
	{
		file.getline(text, 255);
		std::cout << "File insides: " << text << std::endl;
	}
	file.close();
	script_executed();

	// дважды считать файл (через string, ломается проще), съестся последний символ файла todo

}
void task3_4()
{
	script_start();
	char userinput[1024];
	char text[1024]{};
	int i = 1024;
	std::cout << "Input file value. (maximum of 1024 symbols)\b\n";
	std::cout << "-> "; std::cin.getline(userinput, i);
	std::ofstream textFile("text.txt");
	if (textFile.is_open()) {
		textFile << userinput;
		textFile.close();
	}
	else
	{
		std::cout << "MALFUNCTION" << std::endl;
	}
	int c0 = 0;

	std::string s;
	std::ifstream inside;
	inside.open("text.txt");
	std::getline(inside, s);
	std::cout << "Only number string: ";
	for (int i = 0; i < s.length(); i++) // s == string
	{
		char character = s[i]; // переменная, которая сохраняет ТЕКУЩИЙ СИМВОЛ
		int c0 = character - '0';
		if ((c0 >= 0) and (c0 <= 9)) { // если текущий символ = 0 1 2 3 4 5 6 7 8 или 9, вывести c0
			std::cout << c0;
		}
		else {
			if (i == 0 and c0 > 9) { // иначе вместо букв выводим пробел
				std::cout << '\b'; // пробел)
			}
			else std::cout << " "; // проверка чтоб не спамило пробелы если ввести "asdasdasdasdasdasdasdasdasd1sdasdasdasdasdasdasd1"
			if ((i > 0) and (c0 > 9) and ((int(s[i - 1]) - '0') > 9)) { // ещё одна проверка (если круг начался и переменная c0 за гранью чисел и та же проверка для c0 которую я не понимаю
				std::cout << '\b';
			}
		}
	}
	inside.close(); // ВСЁ!
	script_executed();
}
void task3_5()
{
	script_start();
	char array[31]{}; // массив
	char userinput;

	std::cout << "### WARNING: ARRAY ONLY TAKES FIRST 30 SYMBOLS, TERMINATE ARRAY BY INPUTTING 0 ### " << std::endl << "Enter symbols: " << std::endl;
	for (int n = 0; n < 30; n++)
	{
		std::cout << "-> "; std::cin >> userinput;
		if (userinput == '0')
		{
			break;
		}
		array[n] = userinput;
		array[n + 1] = '\0';
	}

	for (int i = 0; array[i] != '\0'; i++) // цикл первый, который начинает с первого символа, доходит до конца, шагая по одному символу в раз
	{
		for (int j = i + 1; array[j] != '\0'; j++) // цикл второй, который начинает со следующего символа, относительно цикла первого
		{
			if ((char)tolower(array[i]) > ((char)tolower(array[j]))) // проверка приведённых к нижнему реегистру символов между собой (если первый нижний символ больше второго нижнего символа
			{
				char buffer = array[i]; // мы копируем текущий символ в буфер
				array[i] = array[j]; // заменяем текущий символ на следующий
				array[j] = buffer; // копируем информацию из буфера в следующий символ
			}
			else // иначе
			{ // фигурная скобка
				if ((char)tolower(array[i]) == (char)tolower(array[j]) and array[i] > array[j]) // проверка, в случае если нижний реегистр символа совпадает со следующим и текущий символ больше следующего;
				{
					char buffer = array[i]; // рокировка символов
					array[i] = array[j];
					array[j] = buffer;
				}
			}

		}
	}
	std::cout << "Sorted array: " << array << std::endl;
	cin_fixer();
	script_executed();
}
// дз 4
void task4_1()
{
	script_start();
	bool alert = false;
	std::ofstream file("file.txt");
	std::cout << "           If user inputs '0', the script will stop gaining numbers and calculate your result.\b\n\n           Do not enter anything above over 2^31!\n";
	int array[999]{};
	int calc_buffer = 0;
	int userinput;
	int check = 1;
	for (int n = 0; check != 0; n++)
	{
		std::cout << "-> "; std::cin >> userinput;
		if (userinput >= 2147483647 || userinput <= -858993460) // крч это чтобы сама прога не ломалась. я поизучал что будет если ввести число выше 2^31 и оно выводило эти два числа. этот скрипт - предохранитель, если пользователь ******* и воооот. прога вырубится
		{
			std::cout << "Processing ";
			for (int a = 5; a > 0; a--)
			{
				std::cout << "...";
				Sleep(100);
				printf("\b ");
				Sleep(100);
				printf("\b\b ");
				Sleep(100);
				printf("\b\b\b ");
			}
			printf("\b ");
			alert = true;
			check = 0;
			userinput = 0;
			calc_buffer = 0;
			file.close();
			std::cout << "\nCannot process!";
			Sleep(100);
			limbo(); // вот что выключает прогу, но модно
		}
		else
		{
			array[n] = userinput;
			array[n + 1] = '\0';
			calc_buffer++;
		}
		if (userinput == 0)
		{
			check = 0;
			break;
		}
	}
	for (int i = 0; calc_buffer != 0; i++)
	{
		file << array[i] << " ";
		calc_buffer--;
	}
	file.close(); // пользователь закончил записывать числа 

	std::vector<int> num_buffer; // за вектора наорут
	int summ = 0;
	std::ifstream ifile("file.txt");
	if (ifile.good()) // через open не робит :>
	{
		int current = 0;
		while (ifile >> current)
		{
			num_buffer.push_back(current); // push_back добавляет ячейку в конец вектора num_buffer, после current
		}
		ifile.close();
		for (int i = 0; i < num_buffer.size(); i++)
		{
			//std::cout << num_buffer[i] << " "; debug, вывести из файла
			summ += num_buffer[i];
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "MALFUNCTION" << std::endl;
	}
	SetConsoleTextAttribute(hConsole, 7);
	std::cout << "Result: " << summ << std::endl;
	cin_fixer();
	script_executed();
}
void task4_2()
{
	script_start();
	std::cout << "              Please enter any number.\b\n\n     If your number is over 0, result will be 1.\b\n\n    If your number is lesser 0, result will be -1\b\n\n       If your number is 0, result will be 0\b\n\n";
	int n;
	std::string result;

	std::cout << "-> "; std::cin >> n; std::cout << std::endl;
	std::string x = sign_x(n);
	result = x;
	SetConsoleTextAttribute(hConsole, 7);
	std::cout << "Result: " << result << "\n";

	cin_fixer();
	script_executed();
}
void task4_3()
{
	script_start();
	std::string selector;
	double a, b, radius, h, degree;
	std::string resulter;

	std::cout << "Please enter the name of a shape.\b\n Shapes available are:\b\n\n Circle\b\n Rectangle\b\n Triangle\b\n";
	std::cout << "-> "; std::getline(std::cin, selector);

	std::transform(selector.begin(), selector.end(), selector.begin(),  // я как понял, через алгоритм transform мы начинаем с первого символа selector, идём до конца и обратно в начало
		[](unsigned char c)
		{
			return std::tolower(c);
		});
	// сразу признаюсь, взял из stackoverflow. вставляем новые данные о строчным selector в c и возвращаем это значение в selector?
	if (selector == "rectangle") // это чисто чтоб пользователь мог ввести фигуру как слово, а не цифру. не знаю зачем я это делал но было весело и я уверен что это плохой метод решения этой проблемы
	{
		std::cout << "You have selected: rectangle.\b\n Please enter width and length value.\b\n";
		selector = '1';
	}
	else if (selector == "triangle")
	{
		std::cout << "You have selected: triangle.\b\n Please enter 2 cathetus, height and degrees value.\b\n";
		selector = '2';
	}
	else if (selector == "circle")
	{
		std::cout << "You have selected: circle.\b\n Please enter radius value.\b\n";
		selector = '3';
	}
	while (true)
	{
		switch (selector[0])
		{
		case '1':
			std::cout << "-> "; std::cin >> a; std::cout << "-> "; std::cin >> b;
			resulter = rectangle_calc(a, b);
			break;
		case '2':
			std::cout << "-> "; std::cin >> a; std::cout << "-> "; std::cin >> b; std::cout << "-> "; std::cin >> h; std::cout << "-> "; std::cin >> degree;
			resulter = triangle_calc(a, b, h, degree);
			break;
		case '3':
			std::cout << "-> "; std::cin >> radius;
			resulter = circle_calc(radius);
			break;
		default:
			limbo();
			break;
		}
		break;
	}
	std::cout << resulter;
	cin_fixer();
	script_executed();
}
void task4_4()
{
	script_start();
	char star = '*';
	char line = '_';
	char line2 = (char)254u;
	std::cout << "                  This script runs in 2 modes.\b\n Enter 1 to get the flag instantly, enter 0 to get a small animation.\b\n          Any other symbol will terminate the script.\b\n";
	int start;
	std::cout << "-> "; std::cin >> start;
	if (start == 1)
	{
		for (int i = 0; i < 13; i++) // сколько строк
		{
			for (int j = 0; j < 39; j++) // сколько может быть символов в строке
			{
				if (i < 4 && j < 8) // условие для звёзд
				{
					SetConsoleTextAttribute(hConsole, 12);
					std::cout << star;
				}
				else // для линий
				{
					SetConsoleTextAttribute(hConsole, 9);
					std::cout << line;
				}
			}
			std::cout << std::endl; // отступать после цикла
		}
	}
	else if (start == 0) // альтернатива, но с анимацией (команда sleep(); )
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 24; j++)
			{
				if (i < 2)
				{
					SetConsoleTextAttribute(hConsole, 15);
					std::cout << line2; Sleep(1);
				}
				else if (i < 4)
				{
					SetConsoleTextAttribute(hConsole, 9);
					std::cout << line2;  Sleep(1);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 12);
					std::cout << line2; Sleep(1);
				}
			}
			std::cout << std::endl; Sleep(1);
		}
		printf("\nYA RUSSKIY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	}
	else // Это БУКВАЛЬНО анимация для вывода текста.
	{
		std::string terminate_s = "Script terminated..."; // что должна вывести прога
		char* char_array = new char[terminate_s.length() + 1]; // создание переменной массива, которая будет равна новому символу взятой из всей длины строки (а если легче то это как задание 3_5 из прошлой дз)
		char_array[terminate_s.length()] = '\0'; // детерминация массива 
		for (int anim = 0; anim < terminate_s.length(); anim++) // пробегает всю строчку
		{
			char_array[anim] = terminate_s[anim]; // перезаписывает символы
		}
		for (int b = 0; b < 20; b++)
		{
			std::cout << char_array[b]; Sleep(10); // анимация
			if (b > 16)
			{
				Sleep(500);
			}
		}
		delete[] char_array; // я додумался написать это чтоб не было утечки памяти
	}
	cin_fixer();
	script_executed();
}

// ВОТ ЭТО ВСЁ ЗАДАНИЕ 5 =) 

int NUM = 100; // количество точек
LONG WINAPI WndProc(HWND, UINT, WPARAM, LPARAM); // WPARAM = WIDTH PARAMETER... LPARAM = LENGTH PARAMETER
double** x; // массив данных
// (двумерный массив, может содержать несколько рядов данных)
double** getData(int n)
{
	double** f;
	f = new double* [2];
	f[0] = new double[n];
	f[1] = new double[n];
	for (int i = 0; i < n; i++)
	{
		double x = (double)i * 0.1;
		f[0][i] = x;
		f[1][i] = -sin(x); // ЗДЕСЬ МОЖНО ПОМЕНЯТЬ СИН НА КОС :DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
	}
	return f;
}
// Функция рисования графика
void DrawGraph(HDC hdc, RECT rectClient,
	double** x, // массив данных
	int n, // количество точек
	int numrow = 1) // количество рядов данных (по умолчанию 1)
{
	double OffsetY, OffsetX;
	double MAX_X, MAX_Y;
	double ScaleX, ScaleY;
	double min, max;
	int height, width;
	int X, Y; // координаты в окне (в px)
	HPEN hpen;
	height = rectClient.bottom - rectClient.top;
	width = rectClient.right - rectClient.left;
	// Область допустимых значений X
	min = x[0][0];
	max = x[0][0];
	for (int i = 0; i < n; i++)
	{
		if (x[0][i] < min) min = x[0][i];
		if (x[0][i] > max) max = x[0][i];
	}
	// double temp = max - min;
	MAX_X = max - min; // отвечает за то чтобы синус распределялся по всему окну
	OffsetX = min * width / MAX_X; // смещение X
	ScaleX = (double)width / MAX_X; // масштабный коэффициент X
	// Область допустимых значений Y
	min = x[1][0];
	max = x[1][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= numrow; j++)
		{
			if (x[j][i] < min) min = x[j][i];
			if (x[j][i] > max) max = x[j][i];
		}
	}
	int color = RGB(255, 255, 255); // белое перо
	MAX_Y = max - min; // отвечает за то чтобы синус распределялся по всему окну
	OffsetY = max * height / (MAX_Y); // смещение Y
	ScaleY = (double)height / MAX_Y; // масштабный коэффициент Y
	// Отрисовка осей координат
	hpen = CreatePen(PS_SOLID, 0, color); //  белая линия, я кстати так и не понял почему слева появляется большая линия по Y ... 28.10.2023 - баг найден, с.м. ниже
	SelectObject(hdc, hpen);
	MoveToEx(hdc, 0, OffsetY, 0); // перемещение в точку (0;OffsetY)
	LineTo(hdc, width, OffsetY); // рисование горизонтальной оси
	MoveToEx(hdc, OffsetX, 0, 0); // перемещение в точку (OffsetX;0)
	LineTo(hdc, OffsetX, 0); // рисование вертикальной оси (не "видна") ... 28.10.2023 - я сидел над этим сломанным скриптом очень долго, если вместо 0 поставить height, как и было, то программа выведет большую белую линию, которая очень мешает. при 0 оно её не выводит
	DeleteObject(hpen); // удаление белого пера
	// Отрисовка графика функции
	color = RGB(114, 137, 218); // чёрноватое перо
	for (int j = 1; j <= numrow; j++)
	{
		hpen = CreatePen(PS_SOLID, 1, color); // формирование пера 1px
		SelectObject(hdc, hpen);
		X = (int)(OffsetX + x[0][0] * ScaleX); // начальная точка графика
		Y = (int)(OffsetY - x[j][0] * ScaleY);
		MoveToEx(hdc, X, Y, 0); // перемещение в начальную точку
		for (int i = 0; i < n; i++)
		{
			X = OffsetX + x[0][i] * ScaleX;
			Y = OffsetY - x[j][i] * ScaleY;
			Sleep(10); // 28.10.2023 добавлено, чтобы график красиво выводился, обожаю эту функцию...
			LineTo(hdc, X, Y);
		}
		color = color << 8; // изменение цвета пера для следующего ряда
		DeleteObject(hpen); // удаление текущего пера
	}
}
// Главная функция КОТОРУЮ НАДО ЕЩЁ ВЫЗВАТЬ !!!!!!!!!!!!!!!!!!!!!!!
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HWND hwnd;
	MSG msg;
	WNDCLASS w;
	x = getData(NUM); // задание исходны данных
	memset(&w, 0, sizeof(WNDCLASS));
	w.style = CS_HREDRAW | CS_VREDRAW;
	w.lpfnWndProc = (WNDPROC)WndProc;
	w.hInstance = hInstance;
	w.hbrBackground = CreateSolidBrush(RGB(40, 43, 48));
	w.lpszClassName = L"My Class";
	RegisterClass(&w);
	hwnd = CreateWindow(L"My Class", L"TASK 4_5",
		WS_OVERLAPPEDWINDOW,
		500, 300, 500, 380, NULL, NULL,
		hInstance, NULL);
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}
// Оконная функция
LONG WINAPI WndProc(HWND hwnd, UINT Message, WPARAM wparam, LPARAM lparam)
{
	HDC hdc;
	PAINTSTRUCT ps;
	switch (Message)
	{
	case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);
		DrawGraph(hdc, ps.rcPaint, x, NUM); // построение графика
		/* Вывод текста y = sin(x)
		SetTextColor(hdc, RGB(114, 137, 218)); // синий цвет букв
		TextOut(hdc, 0, 0, L"sin(x)", 7);
		EndPaint(hwnd, &ps); */
		// закомментил потому что плохо выводит. Почему тут фон белого цвета?
		break;
	case WM_DESTROY:
		PostQuitMessage(0); // ничё не возвращает, на подобии exit(0); но не очень... эта выйдет из функции а exit закроет
		break;
	default:
		return DefWindowProc(hwnd, Message, wparam, lparam);
	}
	return 0;
}

void task4_5()
{
	script_start();
	std::cout << "\nPlease input a number length for executing the script. If you don't know what's best, enter 95 or 64.\n";
	std::cout << "-> "; std::cin >> NUM;
	std::cout << "\nPlease close the pop-up window.\n";
	WinMain(0, 0, 0, 1);
	system("CLS");
	cin_fixer();
	script_executed();
}

// ура 5 задание завершено шок...

void task4_6()
{
	script_start();
	std::cout << "\nInput ROME NUMBER... It will be converted to the arabic numeral system.\b\n\n";
	int number_converted = 0;
	int buffer = 0, warning = 0;
	int next = 0,warning2=0,warning3=0;
	bool alert = false;
	std::string number;
	std::cout << "-> "; std::getline(std::cin, number);
	for (int i = 0; i < number.length(); i++)
	{
		if (number[i] == 'V' || number[i] == 'v')
		{
			warning++;
		}
		else if (number[i] == 'L' || number[i] == 'l') {
			warning2++;
		}
		else if (number[i] == 'D' || number[i] == 'd') {
			warning3++;
		}
	}
	if (number[0] < number[1] && warning == 1 || warning2 == 1 || warning3 == 1)
	{
		std::cout << "Number does not exist... (MALFUNCTION 3)\n";
		script_executed();
		return;
	}
	if (number[0] == 'V' && number.length() > 2 && number_conv(number[1]) < 2 && number_conv(number[2]) > 2)
	{
		std::cout << "Number does not exist... (MALFUNCTION 5)\n";
		script_executed();
		return;
	}
	if (warning > 1 || warning2 > 1 || warning3 > 1) // V L D rule
	{
		std::cout << "Number does not exist... (MALFUNCTION 4)\n";
		script_executed();
		return;
	}
	if (number_conv(number[0]) < number_conv(number[1]) && number_conv(number[1]) <= number_conv(number[2]))
	{
		std::cout << "Number does not exist... (MALFUNCTION 6)\n";
		script_executed();
		return;
	}
	for (int j = 0; j < number.length(); j++)
	{
		if (j + 3 < number.length())
		{
			if (number[j] == number[j + 1] && number[j] == number[j + 2] && number[j] == number[j + 3]) // больше 3 чисел одинаковых (типо XXXX)
			{
				std::cout << "Number does not exist... (MALFUNCTION 1)\n";
				script_executed();
				return;
			}
		}
		for (int k = j + 1; k < number.length(); k++)
		{
			if (number[k] == number[j]) // если след число = текущему
			{
				alert = true;
			}
		}
	}
	for (int i = 0; i < number.length(); i++)
	{
		buffer = number_conv(number[i]);
		next = i + 1 < number.length() ? number_conv(number[i + 1]) : 0; // ? == if (then), : == else 
		number_converted = buffer < next ? number_converted - buffer : number_converted + buffer;
	}
	if (number_converted != 0)
	{
		std::cout << "Result: " << number_converted << "\n";
	}
	script_executed();
}
void task4_7()
{
	script_start();

	int m = 0, c = 0, inputlast;
	const int i = 3;
	const int i2 = 13849;

	bool num_switch = 0;
	printf("Enter 1 for values of: 37 3 64\nEnter 0 for values 25173 13849 65537\n");
	std::cout << "-> ";  std::cin >> num_switch;
	if (num_switch != 0)
	{
		m = 37; c = 64;
		int S[i + 1]{};
		S[0] = 0;
		for (int count = 1; count <= i; count++)
		{
			S[count] = ((m * S[count - 1] + i) % c);
		}
		printf("\nInput a number from 1 to 3 to get a random number: \n-> "); std::cin >> inputlast;
		if (inputlast <= 3 && inputlast >= 1)
		{
			std::cout << S[inputlast];
		}
		else
		{
			printf("Number does not exist in array.\n");
		}
	}
	else
	{
		m = 25173; c = 65537;
		int S2[i2 + 1]{};
		S2[0] = 0;
		for (int count = 1; count <= i2; count++)
		{
			S2[count] = ((m * S2[count - 1] + i) % c);
		}
		printf("\nInput a number from 1 to 13849 to get a random number: \n-> "); std::cin >> inputlast;
		if (inputlast <= 13849 && inputlast >= 1)
		{
			std::cout << S2[inputlast];
		}
		else
		{
			printf("Number does not exist in array.\n");
		}
	}

	cin_fixer();
	script_executed();
}
void task4_8()
{
	script_start();
	double array1[3][4] = { {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0} };
	double array2[4][2] = { {1.2, 0.5}, { 2.8, 0.4 }, { 5, 1 }, { 2, 1.5 } };
	double result[3][2]; // результат умножения матриц. по правилам матрица 3 4 и 4 2 при умножении станут 3 2
	for (int i = 0; i < 3; i++) // 3 из result[3][2]
	{
		for (int j = 0; j < 2; j++) // 2 из result[3][2]
		{
			double resinput = 0; // result input, ввод в массив выше
			for (int k = 0; k < 4; k++)
			{
				resinput += array1[i][k] * array2[k][j];
			}
			result[i][j] = resinput;
		}
	}

	int max_t = 0, min_t = 0, max_s = 0, min_s = 0;
	double summary = 0, tax = 0, answer5 = 0;

	for (int i = 0; i < 3; i++)
	{
		summary += result[i][0];
		tax += result[i][1];
		answer5 = tax + summary;
		if (result[i][0] > result[max_s][0])
		{
			max_s = i;
		}
		if (result[i][1] > result[max_t][1])
		{
			max_t = i;
		}
		if (result[i][2] < result[min_s][2])
		{
			min_s = i;
		}
		if (result[i][1] < result[min_t][1])
		{
			min_t = i;
		}
		// конец задания ток вывести осталось
	}
	
	std::string userinput;
	std::cout << "\nPlease enter 0 to print C.\n1: Most/Least money earned.\n2:Most/Least CMM cash.\n3: Overall money earned.\n4:Overall CMM.\n5: Overall cashflow.\n";
	while (true)
	{
		std::getline(std::cin, userinput);
		switch (userinput[0])
		{
		case '0':
			printf("C:\n");
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					std::cout << result[i][j] << "\n";
				}
			}
			break;
		case '1':
			std::cout << "\nMax: " << max_s + 1 << "\nMin: " << min_s + 1 << "\n";
			break;
		case '2':
			std::cout << "\nMax: " << max_t + 1 << "\nMin: " << min_t + 1 << "\n";
			break;
		case '3':
			std::cout << "\nResult :" << summary << "\n";
			break;
		case '4':
			std::cout << "\nResult: " << tax << "\n";
			break;
		case '5':
			std::cout << "\nResult: " << answer5 << "\n";
			break;
		default:
			script_executed();
			return;
		}
	}
}
void task4_9()
{
	script_start();

	bool alert = false;
	char check_ch{}, ch{};
	std::string number;
	int n_sys = 2, n_new_sys = 16; // для контекста 2 и 16 выставлено для собственного удобства. можете ставить 0

	printf("Please enter a number\n");
	std::cout << "-> "; std::cin >> number; //почему cin а не getline? getline забирает всю строку, а cin до пробела. у мат. чисел не бывает пробела
	printf("\nEnter your old numeral system and preferable numeral system. (From 2 to 16)\n");
	std::cout << "-> "; std::cin >> n_sys; std::cout << "-> "; std::cin >> n_new_sys;
	if ((n_sys <= 1) or (n_sys > 16))
	{
		printf("MALFUNCTION 1");
		script_executed();
		return;
	}
	for (int i = 0; i < number.size(); i++)
	{
		char c0 = number[i];
		for (int j = 0; j < strfor9.size(); j++)
		{
			if (toupper(c0) < '0' || toupper(c0) > 'F')
			{
				printf("MALFUNCTION 2");
				script_executed();
				return;
			}
		}
	}
	
	if ((n_new_sys <= 1) or (n_new_sys > 16))
	{
		printf("MALFUNCTION 3");
		script_executed();
		return;
	}
	int dec = x_to_dec(number, n_sys);
	std::string s_result = dec_to_new_x(dec, n_new_sys);
	printf("from %d to %d is ", n_sys, n_new_sys); std::cout << s_result;

	cin_fixer();
	script_executed();
}
// все задания НИЖЕ имеют множество заданий подгрупп. 
// Расписано так: ДЗ_НОМЕР_ПОДНОМЕР или ДЗ_НОМЕР. 
// Мои номера 25 16 (3) 25 35 (4) 25 50 (5)
void task5_1()
{
	script_start();
	int a{}, b{}; // числа
	printf("Please enter 2 numbers to find their GCD.\n-> ");
	std::cin >> a; printf("-> "); std::cin >> b; // ввод
	if (a == 0 || b == 0) // условие чтобы на 0 не делить
	{
		printf("Cannot divide by 0");
	}
	else
	{
		printf("GCD(%d,%d) = %d\n", a, b, NOD(a, b)); // здесь я понял что %d вставляет ближайшее значение после ковычек (1 %d вставит а, 2 %d вставит b, 3 %d вставит nod) :D
	}

	cin_fixer();
	script_executed();
}
void task5_2()
{
	script_start();
	int a = 1;
	printf("Please enter a number, to calculate primes.\n-> "); std::cin >> a; printf("You have entered %d. Primes are: \n-> ", a);
	std::cout << SOE(a) << "\b ";
	
	cin_fixer();
	script_executed();
}
// вот эти задачи я сделал по приколу, удалять не буду мб кому пригодяться
void task5_3_15() // НАДО БЫЛО СДЕЛАТЬ НАХОЖДЕНИЕ СОЧИТАНИЙ СЛОВ НО Я СДЕЛАЛ ТОЛЬКО НАХОЖДЕНИЕ СЛОВА 
{
	cin_fixer();
	script_start();
	std::string str = " ", str_word = " ";
	printf("Please create a new file by enterring some characters\n-> ");
	std::getline(std::cin, str);
	createfile(str);
	printf("Enter a word or combination of words.\n-> ");
	std::getline(std::cin, str_word);
	findWordInFile(str_word);
	script_executed();
}
void task5_4_19()
{
	script_start();

	bool alert = false;
	double userinput = 1, array[999]{}, buffer{}, avg = 0;
	int temp = 1, people = 0;

	printf("**** Student Height Analysis ****\n Please enter student height and press <Enter>.\n When you are done, enter 0 and press <Enter>\n"); // Анализ роста студентов

	for (int i = 0; userinput != 0; i++)
	{
		std::cout << "-> "; std::cin >> userinput;
		if (userinput > -1)
		{
			buffer += userinput;
			array[i] = userinput;
			array[i + 1] = '\0';
			temp++;
			if (i != 0)
			{
				avg = buffer / i;
			}
		}
		else
		{
			alert = true;
			std::cout << "\nHeight cannot be below 0.\n";
			break;
		}
	}
	if (alert == false)
	{
		for (int i = 0; i < temp; i++)
		{
			if (array[i] > avg)
			{
				people += 1;
			}
		}
		std::cout << "\nAverage student height: " << avg << "\nStudent taller than average height: " << people;
	}

	cin_fixer();
	script_executed();
} // ненужное мне задача
void task5_4_28()
{
	script_start();

	std::string str, buffer;
	int current{}, summary{};

	printf("Please enter a string of numbers.\n-> ");
	std::cin >> str; // не getline чтобы не было пробелов в строке
	for (int count = 0; count < str.size(); count++)
	{
		buffer = str[count];
		current = stoi(buffer);
		summary += current;
	}
	std::cout << "Summary of each number: " << summary;

	cin_fixer();
	script_executed();
} // тоже ненужная
// конец прикола
void task5_3_16()
{
	cin_fixer();
	script_start();
	std::string str = " ", str_word = " ";
	printf("Please create a new file and enter random words.\n-> ");
	std::getline(std::cin, str);
	createfile(str);
	printf("Enter a word or combination of words.\n-> ");
	std::getline(std::cin, str_word);
	findLineInFile(str_word); // находит ток слова а потом обсирается когда нужно искать линию
	script_executed();
}
void task5_3_25()
{
	script_start();

	cin_fixer();
	std::string str = " ", str_line = " ";
	printf("Please create a new file and enter random lines.\n-> ");
	std::getline(std::cin, str);
	createfile(str);
	printf("Enter an under-line you wanna find.\n-> ");
	std::getline(std::cin, str_line);
	findUnderLineInFile(str_line);
	script_executed();
}
void task5_4_25()
{
	script_start();
	std::string num;
	bool alert = false;

	printf("\nThe number is set in 5th numeral system and gets converted into binary.\n\nPlease enter a number you want to convert.\nEnter 0 to stop overwriting array\n");
	int5to2();
	cin_fixer();
	script_executed();
}
void task5_4_35()
{
	script_start();
	// для этого задания я сделал рандомайзер строки через время. не осуждайте
	time_t currentTime{}; // в коде создаётся переменная, хранящая все данные про текущее время
	time(&currentTime); // вот, ток тут не в числовом формате
	struct tm* myTime = localtime(&currentTime); // теперь создаётся int переменная, в которой хранятся данные о времени в числовом формате
	// & = pointer 
	int limit = myTime->tm_hour + 10, gen = myTime->tm_sec, resetnum{}, buffer{}, maxSpacebars{};
	std::string str = regen(limit, gen);
	std::string pointer;
	// рандом строка сделана
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			buffer++;
			pointer += "^";
			if (buffer > maxSpacebars)
			{
				maxSpacebars = buffer;
			}
		}
		else
		{
			buffer = 0;
			pointer += " ";
		}
	}

	printf("String (starting after arrow) ->%s.\n                                %s\nSpacebars: %i\n", str.c_str(), pointer.c_str(), maxSpacebars);
	cin_fixer();
	script_executed();
}
void task5_5_25()
{
	script_start();

	std::string input = "hello ABCDEFG GHGSq ";
	std::ofstream textFile("task5.txt");
	if (textFile.is_open()) {
		textFile << input;
		textFile.close();
	}

	std::ifstream f("task5.txt"); // input stream я хз чё тут объяснять
	std::string str; 
	if (f) { // если ФАЙЛ !!
		std::ostringstream ss; // типо переменная в виде out string stream
		ss << f.rdbuf(); // читает данные типо readbuffer
		str = ss.str(); // результат
	}
	
	std::string wordarray[10],buffer,wordarraybuffer[10];
	int tracker = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			buffer += str[i];
		}
		else if (str[i] == ' ')
		{
			wordarray[tracker] = buffer;
			wordarraybuffer[tracker] = buffer;
			buffer = "";
			tracker++;
		}
	}
	int result = 0;
	for (int i = 0; i < 3; i++)
	{
		sortString(wordarray[i]);
		// std::cout << wordarraybuffer[i] << " " << wordarray[i] << std::endl; // <debug>
		if (wordarray[i] == wordarraybuffer[i])
		{
			result++;
		}
	}
	printf("\nFound already sorted lines: %i\n", result);
	cin_fixer();
	script_executed();
}
void task5_5_50()
{
	script_start();
	// пользователь введёт массив 1 и массив 2. потом сложить их столбцы
	int array[3][3]{}, updArr[3]{};
	printf("Please enter numbers corresponding to array position\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "Arr[" << i << "][" << j << "]\n";
			std::cin >> array[i][j];
		}
	}
	printf("Your array is: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}
	printf("\nCalculation result:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			updArr[i] = array[0][i] + array[1][i] + array[2][i];
		}
		std::cout << updArr[i] << " ";
	}

	cin_fixer();
	script_executed();
}

// ДЗ закончено
// начинается База Заданий
// BZ2 по рофлу сделано

void BZ2() {
	script_start();
	float n = 0;
	float powerof2 = 2;
	float tempPO2 = 0;
	std::string c1, c2, c3, c4;
	printf("Please enter a number\n-> ");
	std::cin >> n;
	int n2 = abs(n);
	if (n < 0)
	{
		printf("\nYour number is negative integer\n");
		c1 = "Yes";
	}
	else if (n == 0)
	{
		printf("\nYou have entered 0, which is not positive nor negative\n");
		c1 = "No";
	}
	else
	{
		printf("\nYour number is a positive integer\n");
		c1 = "No";
	}
	if (n2 % 2 != 0)
	{
		printf("\nYour number is an odd integer\n");
		c2 = "Yes";
	}
	else
	{
		printf("\nYour number is not an odd integer\n");
		c2 = "No";
	}
	if (n > -3)
	{
		printf("\nYour number is over -3\n");
		c3 = "Yes";
	}
	else
	{
		printf("\nYour number is less than -3\n");
		c3 = "No";
	}
	int i = 0;
	if (n > 0)
	{
		while (true)
		{
			tempPO2 = pow(powerof2, i);
			if (n == tempPO2)
			{
				printf("\nYour number is a power of 2\n");
				c4 = "Yes";
				break;
			}
			else if (n > 1)
			{
				i += 1;
				if (n < tempPO2)
				{
					printf("\nYour number is not a power of 2\n");
					c4 = "No";
					break;
				}
			}
			else if (n < 1)
			{
				i -= 1;
				if (n > tempPO2)
				{
					printf("\nYour number is not a power of 2\n");
					c4 = "No";
					break;
				}
			}
		}
	}
	else
	{
		printf("\nYour number is not a power of 2\n");
		c4 = "No";
	}
	printf("\nCritirea met: %s, %s, %s, %s\n",c1.c_str(), c2.c_str(), c3.c_str(), c4.c_str());
	cin_fixer();
	script_executed();
}
void BZ33() {
	script_start();
	float array[10]{ 5, 1, 0.5, 2, 3, 7, 5, 3.5, 8, 9 }; // вывести должно 7, берёт числа от 5 до 9
	float array2[10]{ 10, 0, 2, 4, 5, 1, 0.2, 4, 5, 20 }; // вевысти должно 0, т.к. не удовлетворяет
	float userarray[10]{}, input = 0;
	printf("The program returns first found value of:\nA[1] < A[current_number] < A[10]\nIf it returns 0, then no such number was found.\n\nPlease enter 10 numbers.\n");

	for (int i = 0; i < 10; i++)
	{
		std::cin >> input;
		userarray[i] = input;
	}
	int zerocheck = 0;

	for (int i = 0; i < 10; i++)
	{
		if (userarray[0] < userarray[i] && userarray[i] < userarray[9])
		{
			system("cls");
			std::cout << "Number " << userarray[i] << " was found!\n";
			break;
		}
		else {
			zerocheck++;
		}
	}
	if (zerocheck == 10)
	{
		system("cls");
		std::cout << "0";
	}
	cin_fixer();
	script_executed();
}
// это решение для 43 задания
// крч для этого задания решено сделать через рекурсию 
int arr[] = { 1,2,3,4,5,10,20,10,5,4,2,1,0,85,123,442,26,20 }; // сам массив
int aarr[] = {0,2,5,10,74,3}; // массив поменьше
int size = sizeof(arr) / sizeof(arr[0]); // считает размер массива 

void reverse(int arr[], int num) // забирает значения массива и числа, которое нужно ставить как 0
{
	// если число == размерности, то прекратить сортировку  
	if (num == size)
	{
		return;
	}
	int arrelement = arr[num]; // экстрация элементов  
	reverse(arr, num + 1); // сама рекурсия. ну типо сама себя вызывает :>
	arr[size - num - 1] = arrelement; // расстановка всего дела 
}
void BZ43()
{
	script_start();
	std::cout << "Current array: \n"; // вывод данных о массиве
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	reverse(arr, 0); // вызов рекурсии для замены
	std::cout << " \n Reversed array: \n"; // вывод отсортированного массива
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	script_executed();
}
void BZ62() {
	/*
	Типо сделать из матрицы
	1 1 1
	2 2 2
	3 3 3
	матрицу
	1 2 3
	1 2 3
	1 2 3
	*/
	script_start();
	int arr[3][3]{ {1,2,3},{1,2,3},{1,2,3} };
	int resultarr[3][3]{ {0,0,0},{0,0,0},{0,0,0} }; // сюда запишется перевёрнутая матрица
	// для будущего. В УСЛОВИИ НИЧЕГО НЕ НАПИСАНО ПРО ТО ЧТО ЭТО В ОДНОМ МАССИВЕ И Т.Д. 
	// если я правильно понял, порядок м тут просто математический термин который мне не нужен
	printf("\nMatrix M\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			resultarr[2 - i][j] = arr[j][i]; // заполнение перевёрнутого массива
		}
	}
	printf("Matrix M, rotated 270 degrees\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << resultarr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	script_executed();
}
void BZ69() {
	// крч тут вроде мат. уравнение в котором надо найти максимальное число
	script_start();
	float a = 0, b = 0, c = 0, num = 1.15;
	printf("Please enter some numbers\n"); std::cin >> a >> b >> c;
	float temp = max(a, b * c);
	float max1 = max(a, a + b), max2 = max(a, b + c), max3 = max(temp,num);
	float upper = max1 + max2, lower = 1+max3;

	std::cout << max1 << " + " << max2 << "\n------------------------\n1 + " << max3 << "\n";

	float equation = 0;
	if (lower != 0)
	{
		equation = upper / lower;
		std::cout << "Result: " << equation;
	}
	cin_fixer();
	script_executed();
}
void arraywith1and0(bool* array, int len)
{
	for (int i = len - 1; i >= 0; --i)
	{
		if (!array[i])
		{
			array[i] = true;
			return;
		}
		array[i] = false;
	}
}
void BZ87() {
	// вывести все скобочные выражения длины 10, должны начаться с (, закончится ), 5 ( и 5 )
	// есть  идея сделать через правило да/нет, то есть 1 = ( 0 = ). сделать цикл в котором 
	// проверка 1. является ли первое число 1
	// проверка 2. является ли последнее число 0
	// если да, вывести число и идти дальше по перебору

	// должно быть так, что идёт 1111000 но не 1110000
	script_start();
	bool* array = new bool[10]; // массив с true/false
	bool printnum = false; // вывод числа
	int hello = 0, lastresort = 0, total = 0;
	for (int j = 0; j < 1024; j++) // 2^10 = 1024
	{
		arraywith1and0(array, 10); // функция которая создаёт массив из 10 значений true/false, то есть бинарное
		for (int j = 0; j < 10; j++)
		{
			if (array[j] == true) // если скобка открылась
			{
				hello++; // проверка 1 добавляется
				if (array[0] != 0 && array[9] != 1 && lastresort >= 0) // тут более комплексное, но вкратце это проверка на 1110000 (чтоб такого не было)
				{
					lastresort++;
				}
			}
			else if (array[0] != 0 && array[9] != 1 && array[j] == false) // если стоит 0 то отнимает от 2 проверок. почему для lr нету спец. проверки, это потому что в выводе нас волнует только если оно равно 0. если оно меньше 0 то не выводим число
			{
				hello--;
				lastresort--;
			}
		}

		for (int i = 0; i < 10; i++) // вывод
		{
			if (array[0] != 0 && array[9] != 1 && hello == 0 && lastresort == 0) // если всё сработало
			{
				printnum = true; //это рил  для красоты
				std::cout << (array[i] ? "(" : ")"); // вывод скобок, т.к. array содержит в себе true / false, то true выводит ( и false )
			}
		}
		if (printnum == true)
		{
			printnum = false;
			total++; // для пользователя, чтоб легче было посчитать результат
			std::cout << std::endl; // вот тут красота используется
		}
	    // это чисто аннулирование всех проверок для следующего числа
		hello = 0;
		lastresort = 0;
	}
	printf("This script prints out every correct form of parenthesis equations. \nProgram found total of %i equations that met the criteria.\n",total);
	delete[] array;
	script_executed();
}


// final boss battle !!
int checkarrayswag[25]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
int swag[25]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
bool printball = false;
int answertoballs = 0;
void generate(int t, int n)
{
	if (t == n - 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (swag[i] == checkarrayswag[i])
			{
				printball = true;
			}
		}
		if (printball == true)
		{
			for (int s = 0; s < n; s++)
			{
				std::cout << swag[s] << " ";
			}
			std::cout << std::endl;
			answertoballs++;
			printball = false;
		}
	}
	else
	{
		for (int j = t; j < n; j++)
		{
			std::swap(swag[t], swag[j]);
			t++;
			generate(t, n);
			t--;
			std::swap(swag[t], swag[j]);
		}
	}
}
void balls() {
	script_start();
	int num = 0;
	printf("Please enter how many balls (!) you are willing to give\n"); std::cin >> num;
	if (num > 0 && num < 25)
	{
		generate(0, num);
		printf("\nTotal of %i balls were moved or smth idek\n",answertoballs);
	}
	else
	{
		printf("\nReally?\n");
	}
	answertoballs = 0; // если не аннулировать то прога начнёт выдавать неправильные ответы после 1 запуска
	cin_fixer();
	script_executed();
}

// driver
int main(int argc, char *argv[])
{
	pyramid();
	std::string key;
	std::string key_selector;

	while (true)
	{
		SetConsoleTextAttribute(hConsole, cConsole); std::cout << frame2 << "\n"; 
		std::cout << ">:/ Enter E into homework selection to shut the program off.\n>:/ If you want to see task menu, enter 'menu'.\n\n" << ">:/ Enter the Task number you wanna check out...\n";
		std::cout << ">:/ Entering homework number: "; std::getline(std::cin, key);
		if (key == "menu")
		{
			key = "m";
		}
		else if (key == "color")
		{
			key = "c";
		}
		std::cout << ">:/ Entering task number: "; std::getline(std::cin, key_selector);
		switch (key[0])
		{
		case 'm':
		case 'M':
			menu();
			break;
		case 'e':
		case 'E':
			return 0;
		case 'c':
		case 'C':
			choosecolor();
			break;
		case '1':
			switch (key_selector[0])
			{
			case '1':
				task1_1();
				break;
			case '2':
				task1_2();
				break;
			case '3':
				task1_3();
				break;
			case '4':
				task1_4();
				break;
			case '5':
				task1_5();
				break;
			default:
				system("CLS");
				printf("Task doesn't exist.\n");
				break;
			}
			break;
		case '2':
			switch (key_selector[0])
			{
			case '1':
				task2_1();
				break;
			case '2':
				task2_2();
				break;
			case '3':
				task2_3();
				break;
			case '4':
				task2_4();
				break;
			case '5':
				task2_5();
				break;
			default:
				system("CLS");
				printf("Task doesn't exist.\n");
				break;
			}
			break;
		case '3':
			switch (key_selector[0])
			{
			case '1':
				task3_1();
				break;
			case '2':
				task3_2();
				break;
			case '3':
				task3_3();
				break;
			case '4':
				task3_4();
				break;
			case '5':
				task3_5();
				break;
			default:
				system("CLS");
				printf("Task doesn't exist.\n");
				break;
			}
			break;
		case '4':
			switch (key_selector[0])
			{
			case '1':
				task4_1();
				break;
			case '2':
				task4_2();
				break;
			case '3':
				task4_3();
				break;
			case '4':
				task4_4();
				break;
			case '5':
				task4_5();
				break;
			case '6':
				task4_6();
				break;
			case '7':
				task4_7();
				break;
			case '8':
				task4_8();
				break;
			case '9':
				task4_9();
				break;
			default:
				system("CLS");
				printf("Task doesn't exist.\n");
				break;
			}
			break;
		case '5':
			switch (key_selector[0])
			{
			default:
				system("CLS");
				printf("Task doesn't exist.\n");
				break;
			case '1':
				task5_1();
				break;
			case '2':
				task5_2();
				break;
			case '3':
				std::string choose;
				printf("Please select task...\n 1: 5_3_16;\n 2: 5_3_25;\n 3: 5_4_25;\n 4: 5_4_35;\n 5: 5_5_25;\n 6: 5_5_50;\n");
				std::cout << "-> ";  std::cin >> choose;
				switch (choose[0])
				{
				case '1':
					task5_3_16();
					break;
				case '2':
					task5_3_25();
					break;
				case '3':
					task5_4_25();
					break;
				case '4':
					task5_4_35();
					break;
				case '5':
					task5_5_25();
					break;
				case '6':
					task5_5_50();
					break;
				}
				break;
			}
			break;
		case '6':
			switch (key_selector[0])
			{
			case '1':
				BZ33();
				break;
			case '2':
				BZ43();
				break;
			case '3':
				BZ62();
				break;
			case '4':
				BZ69();
				break;
			case '5':
				BZ87();
				break;
			}
			break;
		case '7':
			switch (key_selector[0])
			{
			default:
				balls();
				break;
			}
			break;
		default:
			system("CLS");
			printf("Homework doesn't exist.\n");
			break;
		}
	}
}
// int a = 1
/*
*/
