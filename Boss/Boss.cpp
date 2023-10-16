#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 1F");

    cout << endl;
    string answer;

    do {
        cout << " Вы выполнили задание?" << endl << " ";
        getline(cin, answer);
    } while (answer != "Да, конечно выполнил!");
    cout << " Молодец!" << endl;


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}