#include <iostream>

#include "Date.h"

/* Задание 1
 * Создайте класс Date с полями день, месяц, год и методами доступа к этим полям.
 * Перегрузите оператор вывода для данного класса.
 * Создайте два "умных" указателя today и date.
 * Первому присвойте значение сегодняшней даты. Для него вызовите по отдельности методы доступа к полям класса Date,
 * а также выведите на экран данные всего объекта с помощью перегруженного оператора вывода.
 * Затем переместите ресурс, которым владеет указатель today в указатель date.
 * Проверьте, являются ли нулевыми указатели today и date и выведите соответствующую информацию об этом в консоль.
 */
void task01()
{
    auto today = make_unique<Date>(18, 12, 2021);
    unique_ptr<Date> date;

    // "вызовите по отдельности методы доступа к полям класса Date" - непонятно зачем, но ладно
    today->getDay();
    today->getMonth();
    today->getYear();

    cout << *today << endl;

    date = move(today);

    cout << "today variable is " << (today ? "NOT NULL" : "NULL") << endl;
    cout << "date variable is " << (date ? "NOT NULL" : "NULL") << endl;

    /* Output:
    * 18-12-2021
    * today variable is NULL
    * date variable is NOT NULL
     */
}

/* Задание 2
* По условию предыдущей задачи создайте два умных указателя date1 и date2. 
* Создайте функцию, которая принимает в качестве параметра два умных указателя типа Date и сравнивает их между собой (сравнение происходит по датам).
* Функция должна вернуть более позднюю дату.
* Создайте функцию, которая обменивает ресурсами (датами) два умных указателя, переданных в функцию в качестве параметров.
* Примечание: обратите внимание, что первая функция не должна уничтожать объекты, переданные ей в качестве параметров.
 */
unique_ptr<Date>& compareDate(unique_ptr<Date>& first, unique_ptr<Date>& second)
{
    return *first > *second ? first : second;
}

void swapDate(unique_ptr<Date>& first, unique_ptr<Date>& second)
{
    swap(first, second);
}

void task02()
{
    auto today = make_unique<Date>(18, 12, 2021);
    auto date = make_unique<Date>(19, 12, 2021);
    
    cout << "MAX DATE: " << *move(compareDate(today, date)) << endl;

    cout << *today << endl;
    swapDate(today, date);
    cout << *today << endl;

    /* Output:
    * MAX DATE: 19-12-2021
    * 18-12-2021
    * 19-12-2021
    */
}

int main()
{
    task01();
    task02();
    return 0;
}
