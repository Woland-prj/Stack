#include <iostream>
#include "Stack.h"

int main()
{
    int TestArr[] = { 1, 2, 3, 4, 5 };
    int len = std::end(TestArr) - std::begin(TestArr);
    Stack St;
    for (int i = 0; i < len; i++) 
       St.Push(TestArr[i]);
    while (!St.isEmpty()) {
        std::cout << St.Pop() << std::endl;
    }
}
