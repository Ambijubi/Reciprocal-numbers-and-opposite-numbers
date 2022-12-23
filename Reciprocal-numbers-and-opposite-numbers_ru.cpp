//Прога для проверки на взаимно отрицательные числа и противоположные числа 

#include <iostream>

//Использую обьявления using, что-бы не писать каждый раз префикс std в командах, cout, cin, endl, и string
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int awnser;
    float num1, num2;

    //Устанавливаем поддержку кириллицы в Windows
    setlocale(LC_ALL, "Russian");

    cout << "Это программа для проверки чисел на то являются ли числа взаимно отрицательными или являются ли числа противоположными." << endl;
    //Спрашиваем у пользователя проверить на то являются ли числа взаимно отрицательными или являются ли числа противоположными
    cout << "Проверить на то являются ли числа взаимно отрицательными или являются ли числа противоположными?" << endl;
    cout << "1) Взаимно отрицательные\n2) Противоположные\nОтвет: ";
    cin >> awnser;
    
    //Просим пользователя ввести числа (если вводить дробь, то только десятичную)
    cout << "Введите первое число:";
    cin >> num1;
    cout << "Введите второе число:";
    cin >> num2;

    //Вычесленияяяяяяяяяяяя
    switch (awnser)
    {
        case 1:
            if (num1 * num2 == 1)
            {
                cout << "Числа являются взаимно отрицательными." << endl;
            }
            else
            {
                cout << "Числа не являются взаимно отрицательными." << endl;
            }
            break;
    
        case 2:
    
            if (num1 + num2 == 0)
            {
                cout << "Числа являются противоположными." << endl;
            }
            else
            {
                cout << "Числа не являются противоположными." << endl;
            }
            break;
    
        default:
            cout <<"Упс... Ошибка: Похоже вы ввели что-то не так, попробуйте запустить программу занаво." << endl;
            break;
    }
    return 0;
}