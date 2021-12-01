#include "Stack.h"

#include <iostream>

/*
* public-метод с именем push(), который будет добавлять значение в стек.
* push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
 */
bool Stack::push(int el)
{
    if (firstFreeIndex == ARRAY_SIZE) return false;

    array[firstFreeIndex] = el;
    firstFreeIndex++;
    return true;
}

/*
* public-метод с именем pop() для вытягивания и возврата значения из стека.
* Если в стеке нет значений, то должно выводиться предупреждение;
 */
int Stack::pop()
{
    // В условии не сказанно что возвращать если стек пуст. Поэтому ставлю -1
    if (firstFreeIndex == 0)
    {
        std::cout << "WARNING: stack is empty" << std::endl;
        return -1;
    }

    firstFreeIndex--;
    auto const value = array[firstFreeIndex];
    array[firstFreeIndex] = 0;
    return value;
}

// public-метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
void Stack::reset()
{
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        array[i] = 0;
    }

    firstFreeIndex = 0;
}

void Stack::print()
{
    std::cout << "(";
    
    for (auto const element : array)
    {
        if (element != 0) std::cout << element << " ";
    }

    std::cout << ")" << std::endl;
}
