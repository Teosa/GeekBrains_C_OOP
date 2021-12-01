#pragma once
class Stack
{
private:
    static constexpr  size_t ARRAY_SIZE = 10;
    
    size_t firstFreeIndex = 0;
    int array[ARRAY_SIZE] = {0};
public:
    bool push(int el);
    int pop();
    void reset();
    void print();
};
