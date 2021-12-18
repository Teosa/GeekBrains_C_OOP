
#include <iostream>
#include <regex>
using namespace std;

/* Задание 1
* Создать программу, которая считывает целое число типа int.
* И поставить «защиту от дурака»: если пользователь вводит что-то кроме одного целочисленного значения,
* нужно вывести сообщение об ошибке и предложить ввести число еще раз. Пример неправильных введенных строк:
    rbtrb
    nj34njkn
    1n
 */
void task01()
{
    bool correctInput = false;
    string value;
    const auto regexp = regex("^\\d{1,}$");
    
    while(!correctInput)
    {
        cout << "Enter value: ";
        cin >> value;

        if(regex_match(value, regexp))
        {
            cout << "Input " << value << " is correct." << endl;
            correctInput = true;
        } else
        {
            cout << "ERROR: Input " << value << " is incorrect." << endl;
        } 
    }
}

/* Задание 2
 * Создать собственный манипулятор endll для стандартного потока вывода, который выводит два перевода строки и сбрасывает буфер.
 */
ostream& custom_endl(ostream &stream) { 
    stream << endl << endl;
    return stream;
}

void task02()
{
    cout << "Test" << custom_endl;
    cout << "Test2" << endl;
    cout << "Test3" << custom_endl;
    cout << "Test4" << endl;

    /* Output:
    * Test
    *
    * Test2
    * Test3
    * 
    * Test4
    *
    * Process finished with exit code 0.
    */
}



int main()
{
    task01();
    task02();
    return 0;
}
