#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
void name(void);
void date(void);
int main(void)
{
	// Настройка кодировки консоли для корректного отображения кириллицы
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	name();
	date();
	return 0;
}
void name(void)
{
	puts("* * * * * * * * * * * * * * * * * * * * * *");// вывод строки
	puts("*                                         *");// вывод строки
	puts("* тема: Разработка консольного приложения *");// вывод строки
	puts("*    Выполнила Чушкина А.И.               *");// вывод строки
	puts("*                                         *");// вывод строки
	puts("* * * * * * * * * * * * * * * * * * * * * *");// вывод строки
}
void date(void)
{
	puts("                                           ");// вывод строки
	puts("     . _      .  .    _   _   _   _        ");// вывод строки
	puts("    /| _|    /| /|     | | | | | |_|       ");// вывод строки
	puts("     | _| .   |  |.   /_ |_| |_| |_|       ");// вывод строки
	puts("                                           ");// вывод строки
}