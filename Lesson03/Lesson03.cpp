#include "Circle.h"
#include "Fraction.h"
#include "Minivan.h"
#include "Rhombus.h"
#include "Square.h"
#include "Rectangle.h"

/* Задание 1
 * Создать абстрактный класс Figure (фигура).
 * Его наследниками являются классы Parallelogram (параллелограмм) и Circle (круг).
 * Класс Parallelogram — базовый для классов Rectangle (прямоугольник), Square (квадрат), Rhombus (ромб).
 * Для всех классов создать конструкторы.
 * Для класса Figure добавить чисто виртуальную функцию area() (площадь).
 * Во всех остальных классах переопределить эту функцию, исходя из геометрических формул нахождения площади.
 */
void task01()
{
    Rhombus rhombus(25, 6);
    Square square(10);
    Rectangle rect(6, 9);
    Circle circle(7);
    Parallelogram parallelogram(3, 2);

    rhombus.area();
    square.area();
    rect.area();
    circle.area();
    parallelogram.area();

    /* Output:
    * Rhombus area is: 150
    * Square area is: 100
    * Rectangle area is: 54
    * Circle area is: 153.86
    * Parallelogram area is: 6
    */
}

/* Задание 2
* Создать класс Car (автомобиль) с полями company (компания) и model (модель).
* Классы-наследники: PassengerCar (легковой автомобиль) и Bus (автобус).
* От этих классов наследует класс Minivan (минивэн).
* Создать конструкторы для каждого из классов, чтобы они выводили данные о классах.
* Создать объекты для каждого из классов и посмотреть, в какой последовательности выполняются конструкторы.
* Обратить внимание на проблему «алмаз смерти». 
* Примечание: если использовать виртуальный базовый класс, то объект самого "верхнего" базового класса создает самый "дочерний" класс.
*/
void task02()
{
    Car car("Bentley", "Bentayga");
    PassengerCar passengerCar("Fiat", "Cronos");
    Bus bus("Ikarus", "260");
    Minivan minivan("Volkswagen", "Caravelle");

    /* Output:
    * Instance of Car; Company name: Bentley; Model name: Bentayga
    * 
    * Instance of Car; Company name: Fiat; Model name: Cronos
    * Instance of PassengerCar; Company name: Fiat; Model name: Cronos
    * 
    * Instance of Car; Company name: Ikarus; Model name: 260
    * Instance of Bus; Company name: Ikarus; Model name: 260
    * 
    * Instance of Car; Company name: Volkswagen; Model name: Caravelle
    * Instance of PassengerCar; Company name: Volkswagen; Model name: Caravelle
    * Instance of Bus; Company name: Volkswagen; Model name: Caravelle
    * Instance of Minivan; Company name: Volkswagen; Model name: Caravelle
    */
}

/* Задание 3
    * Создать класс: Fraction (дробь). Дробь имеет числитель и знаменатель (например, 3/7 или 9/2).
    * Предусмотреть, чтобы знаменатель не был равен 0.
    * Перегрузить:
    *   - математические бинарные операторы (+, -, *, /) для выполнения действий с дробями
    *   - унарный оператор (-)
    *   - логические операторы сравнения двух дробей (==, !=, <, >, <=, >=). 
    * Примечание: Поскольку операторы < и >=, > и <= — это логические противоположности, попробуйте перегрузить один через другой.
    * Продемонстрировать использование перегруженных операторов.
 */
std::string boolToStr(bool value) { return value ? "true" : "false"; }

void task03()
{
    Fraction first(1, 10);
    Fraction second(4, 5);
    Fraction third(2, 3);
    
    Fraction x1 = first + second;   x1.print();     // 9/10
    Fraction x2 = first + third;    x2.print();     // 23/30
    Fraction x3 = first / second;   x3.print();     // 1/8
    Fraction x4 = third * second;   x4.print();     // 8/15
    Fraction x5 = second - first;   x5.print();     // 7/10

    std::cout << boolToStr(third == x4) << std::endl;   // false
    std::cout << boolToStr(x1 <= x5) << std::endl;      // false
    std::cout << boolToStr(x2 != second ) << std::endl; // true
    std::cout << boolToStr(x3 > first) << std::endl;    // false
    std::cout << boolToStr(third >= x4) << std::endl;   // false

    -x5; x5.print(); // 7/-10
}

int main()
{
    task01();
    task02();
    task03();

    return 0;
}
