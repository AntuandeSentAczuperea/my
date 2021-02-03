
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    /*                      Оператор множественного выбора SWITCH                                          */   
    /*
                                    конструкция 
    
    switch 
    {
        case значение 1:
            действие 1;
            break;

        case значение 2:
            дуйствие 2;
            break;
        case значение 3:
            дейтсвие 3;
            break;

        default:                 <- \
            дейсвтие по умолчанию; <-|--этот блок не обязателен
            break;                <-/
    }
    
    *
    /* ДЗ */
    int a, b ;
    char name;
    cout << "Вас преветсвует К-20!" << endl;
    cout << "Пожалуйста введите 2 числа >> " << endl;
    cin >> a >> b;

    cout << "\t\t М Е Н Ю " << endl;
    cout << "1. Сложение <-- введите +" << endl;
    cout << "2. Вычитание <-- введите -" << endl;
    cout << "3. Деление <-- введите /" << endl;
    cout << "4. Умножение <-- введите *" << endl;
    cout << "5. Деление по модулю <-- %" << endl;
    cout << "Выберите одно из действий >>" << endl;
    cin >> name;

    switch (name)
    {
        case '+':
        { // кейс со сложением
            cout << a << " + " << b << " = " <<  a + b << endl;
        }
        break;

        //==========================

        case '-':
        { // кейс с вычитанием
            cout << a << " - " << b << " = " <<  a - b << endl;
        }
        break;

        //==========================

        case '/':
        { // кейс с делением
            cout << a << " / " << b << " = " << (float)a / b << endl;
        }

        break;
        //==========================

        case '*':
        { // кейс с умножением
            cout << a << " * " << b << " = " <<  a * b << endl;
        }
        break;

        //==========================

        case '%':
        { // кейс с делением по модулю
            cout << a << " % " << b << " = " << a % b << endl;
        }
        break;
        default:
            cout << "Ошибка Windows: закройте окно!!!" << endl;
            break;
    }
}

