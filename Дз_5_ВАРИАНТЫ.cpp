// ну или же вы из другой группы тогда ищите :>

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <Windows.h>

using namespace std;

string strfor9 = "0123456789ABCDEF";
string filecontent = "Hello world! I am a string of text.";
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
void createfile(string filename) // подпрограмма, которая забирает переменную filename. её надо вносить при вызове
{
	setlocale(LC_ALL, "russian"); // установка русского языка
	ofstream textFile(filename + ".txt"); // файл создаёт
	ifstream file; // читает файл
	filename.append(".txt"); // добавляет к вводу пользователя .txt
	file.open(filename); // открывает файл filename.txt, где filename введён пользователем
	if (!file.is_open()) // если файл не может быть открыт
	{
		printf("Ошибка"); // вывести ошибку
		return; // завершить подпрограмму
	}
	else { // иначе
		textFile << filecontent; // в файл вносится данный текст :) 
		textFile.close(); // файл закрывается
	}
	return; // вернуть значение
}
string filevstroku(string filename) // подпрограмма, которая забирает переменную filename. её надо вносить при вызове
{
	setlocale(LC_ALL, "russian"); // установка русского языка
	ifstream file; // читается файл
	filename.append(".txt"); // к введённому filename добавляется .txt
	file.open(filename); // открыть файл с названием filename.txt, где filename ввёл пользователь
	string str; // строчная переменная
	if (file) { // если файл существует
		ostringstream strings; // переменная в виде out string stream
		strings << file.rdbuf(); // читает данные readbuffer
		str = strings.str(); // результат
	}
	return str; // вернуть результат программы
}
int letter_d_buf = 0;
string deleteletter(string filename) // подпрограмма, которая забирает переменную filename. её надо вносить при вызове
{
	setlocale(LC_ALL, "russian"); // установить русский язык
	string str = filevstroku(filename); // строчная переменная, которая равна вызову функции выше
	transform(str.begin(), str.end(), str.begin(), ::toupper); // вся строка переводится в заглавный реегстр. допустим текст станет ТЕКСТ
	for (int i = str.length(); i >= 0; i--) // цикл. число i равно длине строки, i больше 0 и после выполнения вычитается 1 от i
	{ // «A», «E», «I», «O», «U», «Y».
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
		{
			// если текущий символ строки равен гласной
			str[i] = ' '; // текущий символ переписывается в виртуальный 0. его не видно
			letter_d_buf++;
		}
	}
	return str; // вернуть строку
}
string filetostring()
{
	ifstream f("textfile.txt"); // input stream я хз чё тут объяснять
	string str;
	if (f) { // если ФАЙЛ !!
		ostringstream ss; // типо переменная в виде out string stream
		ss << f.rdbuf(); // читает данные типо readbuffer
		str = ss.str(); // результат
	}
	return str;
}
string findWordInFile(string str)
{
	ifstream file("textfile.txt");
	string str_word, word_store;
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
		cout << "\nWe found: " << str_word;
		printf("\nTimes found: %d", foundCalc);
	}
	else
	{
		printf("\nWe found no matching word.\n");
	}
	printf("\n");
	file.close();
	return str_word;
}
string findLineInFile(string str) // сделать чтобы линию читало
{
	string str_word, word_store;
	int foundCalc = 0;
	bool found = false;
	string s = filetostring(); // переписывается из функции выше. почему я разделил? хз
	size_t pos = s.find(str); // пришлось size_t юзать. типо может хранить в себе теоретически максимальное значение
	if (pos != string::npos) // если наше size_t не равен концу файла (?)
		cout << "Found:  " << str << "\n"; // pos >> есть; str. нету ; нету
	else
		cout << "Not found\n";
	printf("\n");
	return str_word;
}
string findUnderLineInFile(string str)
{
	string s = filetostring(); // переписывается из функции выше. почему я разделил? хз
	size_t pos = s.find(str); // пришлось size_t юзать. типо может хранить в себе теоретически максимальное значение
	if (pos !=  string::npos) // если наше size_t не равен концу файла (?)
		 cout << "Found at pos:  " << pos << "\n";
	else
		 cout << "Not found\n";
	return s;
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

void zadanie3_3() {
	// Преобразование разделителей: превращение строк в столбцы фраз.

	string words = "Hello world. I am a string of words! Is this code terrible?";
	// разделять будем при помощи точки. я без понятия как по-другому хотят разделять фразы

	ofstream textFile("textfile.txt"); // создаёт файл
	ofstream newFile("newfile.txt"); // создаёт файл
	ifstream file("textfile.txt"); // input stream
	string str; // наша новая строка из файла

	if (textFile.is_open()) { // если файл открыт
		textFile << words; // внести данные в файл. вместо ковычек можно ввести код выше в комментах. заменить ковычки на input
		textFile.close(); // закрыть файл
	}

	if (file) { // если файл открыт
		ostringstream out2str; // переменная в виде out string stream
		out2str << file.rdbuf(); // читает данные через функцию readbuffer
		str = out2str.str(); // результат
	}

	// логика для разделения
	for (int i = 0; i < words.length(); i++)
	{
		if (str[i] == '.' || str[i] == '!' || str[i] == '?')
		{
			str[i+1] = '\n';
		}
	}

	if (newFile.is_open()) {
		newFile << str;
		newFile.close();
	}
	cout << "Original string:\n--------------\n" << words << "\n--------------\n\nNew string:\n--------------\n" << str << "\n--------------\n\nCheck 'newfile.txt' and 'textfile.txt'.\n";
}
void zadanie3_16()
{
	// Поиск определенного сочетания слов в текстовом файле
	std::string str = " ", str_word = " ";
	printf("Please create a new file and enter random words.\n-> ");
	std::getline(std::cin, str);
	createfile(str); // найдите функцию с таким неймом
	printf("Enter a word or combination of words.\n-> ");
	std::getline(std::cin, str_word);
	findLineInFile(str_word); // находит ток слова а потом обсирается когда нужно искать линию
}
void zadanie3_17() {
	// сортировка слов в файле по алфавиту
	string words = "this is a line of text ";
	ofstream textFile("wordsort.txt"); // файл создаёт
	ifstream file("wordsort.txt");
	if (!file.is_open()) // если файл не может быть открыт
	{
		printf("Ошибка"); // вывести ошибку
		return; // завершить подпрограмму
	}
	else { // иначе
		textFile << words; // в файл вносится данный текст :) 
		textFile.close(); // файл закрывается
	}
	string str; // строчная переменная

	if (file) { // если файл существует
		ostringstream strings; // переменная в виде out string stream
		strings << file.rdbuf(); // читает данные readbuffer
		str = strings.str(); // результат
	}
	string words_from_file[6], buffer = "";
	int tracker = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			buffer += str[i];
		}
		else if (str[i] == ' ')
		{
			words_from_file[tracker] = buffer;
			buffer = "";
			tracker++;
		}
	}
	string temp;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 1; j < 6 - i; j++)
		{
			if (words_from_file[j - 1] > words_from_file[j])
			{
				temp = words_from_file[j - 1];
				words_from_file[j - 1] = words_from_file[j];
				words_from_file[j] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		cout << words_from_file[i] << endl;
	}
}
void zadanie3_18() {
	//Поиск вхождения подстроки в строку текстового файла
	 string str = " ", str_line = " ";
	printf("Please create a new file and enter random lines.\n-> ");
	 getline( cin, str);
	createfile(str); // найдите функцию под этим именем
	printf("Enter an under-line you wanna find.\n-> ");
	 getline( cin, str_line);
	findUnderLineInFile(str_line); // найдите функцию под этим именем
}
void zadanie3_23() {
	// Статистическая обработка текстового файла: поиск наиболее часто встречающейся согласной буквы.
	string filename, buffer; // название файла который задаёт пользователь
	int counter = 0;
	printf("Enter file name.\nFile includes: %s\n", filecontent.c_str()); // вывод текста
	cin >> filename; // ввод названия файла
	createfile(filename); // создать файл

	string soglbukvi = deleteletter(filename);// удаляет гласные
	char* arrsoglbukvi = new char[soglbukvi.size() + 2]; // создание динамичного массива. +2 указано для \0, чтобы не повредить память
	for (int i = 0; i < soglbukvi.size() + 1; i++) // цикл записи строки без гласных букв в массив
	{
		arrsoglbukvi[i] = soglbukvi[i];
		arrsoglbukvi[i + 1] = '\0';
	}
	int i = 0, alphabet[26] = { 0 }, j; // счёт по алфавиту
	while (arrsoglbukvi[i] != '\0') {
		if (arrsoglbukvi[i] >= 'A' && arrsoglbukvi[i] <= 'Z') {
			j = arrsoglbukvi[i] - 'A';
			++alphabet[j];
		}
		++i;
	}
	cout << "max: " << *max_element(alphabet, alphabet + 26); // БЕЗ * выдаёт адрес ячейки памяти
	delete[] arrsoglbukvi; // удаление утечки
}
void zadanie3_24() // подпрограмма самой домашки
{
	// ответ должен быть Д 1 или С 1
	//Статистическая обработка текстового файла: поиск наименее часто встречающейся согласной буквы.

	setlocale(LC_ALL, "russian"); // установить русский язык
	string filename, buffer; // название файла который задаёт пользователь
	int counter = 0;
	printf("Введите название файла на английском.\nФайл с которым вы работаете имеет в себе: %s\n", filecontent.c_str()); // вывод текста
	cin >> filename; // ввод названия файла
	createfile(filename); // создать файл
	string soglbukvi = deleteletter(filename);// удаляет гласные
	char* arrsoglbukvi = new char[soglbukvi.size() + 2]; // создание динамичного массива. +2 указано для \0, чтобы не повредить память
	for (int i = 0; i < soglbukvi.size() + 1; i++) // цикл записи строки без гласных букв в массив
	{
		arrsoglbukvi[i] = soglbukvi[i];
		arrsoglbukvi[i + 1] = '\0';
	}
	int i = 0, alphabet[26] = { 0 }, j; // счёт по алфавиту
	while (arrsoglbukvi[i] != '\0') {
		if (arrsoglbukvi[i] >= 'A' && arrsoglbukvi[i] <= 'Z') {
			j = arrsoglbukvi[i] - 'A';
			++alphabet[j];
		}
		++i;
	}
	int min = 0;
	for (int i = 0; i < 26; i++) // проверка на минимум
	{
		if (alphabet[i] > alphabet[i + 1] && alphabet[i] != 0)
		{
			min = alphabet[i];
		}
	}
	cout << "\nRESULT: " << min;
	delete[] arrsoglbukvi; // удаление утечки
}
void zadanie3_25()
{
	// Поиск подстроки в строке по заданному условию.
	string str = " ", str_line = " ";
	printf("Please create a new file and enter random lines.\n-> ");
	getline(cin, str);
	createfile(str); // найдите функцию под этим именем
	printf("Enter an under-line you wanna find.\n-> ");
	getline(cin, str_line);
	findUnderLineInFile(str_line); // найдите функцию под этим именем
}
void zadanie3_38() {


    // Проверка баланса скобок в текстовом файле.
	
	// коммент-код ниже позволяет пользователю ввести данные


    string input;
	cout << "Enter anything with brackets\n"; // brackets = скобки

	getline(cin, input); // ввод пользователя
	


	ofstream textFile("textfile.txt"); // создаёт файл
	if (textFile.is_open()) { // если файл открыт
		textFile << input; // внести данные в файл. вместо ковычек можно ввести код выше в комментах. заменить ковычки на input
		textFile.close(); // закрыть файл
	}

	ifstream file("textfile.txt"); // input stream
	string str; // наша новая строка из файла
	if (file) { // если файл открыт
		ostringstream out2str; // переменная в виде out string stream
		out2str << file.rdbuf(); // читает данные через функцию readbuffer
		str = out2str.str(); // результат
	}

	// debug, чтобы вывести что в str
	//cout << str;
	int skobka = 0;

	for (int i = 0; i < str.length(); i++) // цикл, который пробегает всю строку
	{
		if (str[i] == '(') // если скобка открылась
		{
			skobka++; // говорим переменной что надо добавить 1 скобку к параметру
		}
		else if (str[i] == ')') // иначе скобка закрылась
		{
			skobka--; // говорим что скобка закрылась
		}

		// логика такая: если скобки закрылись успешно, то значение скобки = 0. иначе оно будет не равно 0, а следовательно не сбалансированы
	}
	if (skobka == 0) // если все скобки закрыты
	{
		cout << "Brackets are balanced" << endl; // вывести что всё норм
	}
	else // иначе они не сбалансированы
	{
		cout << "Brackets are unbalanced" << endl; // сказать что не сбалансированы
	}
}
void zadanie4_17()
{
	// с уравнением
}
void zadanie4_25()
{
	std::string num;
	bool alert = false;

	printf("\nThe number is set in 5th numeral system and gets converted into binary.\n\nPlease enter a number you want to convert.\nEnter 0 to stop overwriting array\n");
	int5to2();
}
void zadanie4_35()
{
	int resetnum{}, buffer{}, maxSpacebars{};
	std::string str = "Hello world! I accidentally  placed a lot of    spacebars! :c  ";
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
}
void zadanie4_53()
{
	setlocale(LC_ALL, "russian"); // установить русский язык
	float usernum{}, avg{}, summ{}; // переменные
	cout << "Обработка последовательности дробных чисел. После ввода каждого числа нажимайте <Enter> ";
	for (int i = 1; i <= 5; i++) // цикл, лимитирующий ввод до 5
	{
		printf("-> ");
		cin >> usernum; // ввод числа
		summ += usernum;
		avg = (summ / i) + 0.0001; // среднее арифметическое
		printf("Введено чисел: %i Сумма: %.2f Сред.арифметическое: %.2f\n", i, summ, avg); // вывод результата
		// как работает printf? выводит текст, но можно вставить переменные с помощью %.
		//  %i = вставит int. %f = float ... .2f = float до точности в сотую. поле "" надо писать какие переменные вставить
	}
}
void zadanie5_17()
{
	// создать файл с вещественными N числами и посчитать их дробь и занести в другой файл
}
void zadanie5_50()
{
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
}
void zadanie5_58()
{
	setlocale(LC_ALL, "russian"); // установить русский язык
	float usernum{}, avg{}, summ{}; // переменные
	cout << "Обработка последовательности дробных чисел. После ввода каждого числа нажимайте <Enter> ";
	for (int i = 1; i <= 5; i++) // цикл, лимитирующий ввод до 5
	{
		printf("-> ");
		cin >> usernum; // ввод числа
		summ += usernum;
		avg = (summ / i) + 0.0001; // среднее арифметическое
		printf("Введено чисел: %i Сумма: %.2f Сред.арифметическое: %.2f\n", i, summ, avg); // вывод результата
		// как работает printf? выводит текст, но можно вставить переменные с помощью %.
		//  %i = вставит int. %f = float ... .2f = float до точности в сотую. поле "" надо писать какие переменные вставить
	}
}

int main()
{ // это меню, введите вместо zadanie3_23 чё угодно
	string str;
	 cout << "Choose Task\n"; // = "\n" == endl;

	while (true)
	{
		getline(cin, str);
		switch (str[0]) 
		{
		case '1': // при вводе 1 программа сделает следующее
			zadanie3_23();
			break;
		case '2':
			zadanie3_24();
			break;
		}
	}
}
