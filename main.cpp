
#include <iostream>
#include "SimpleEvent.h"
// https://github.com/hammerinformation/

void print() {
    std::cout << "Hello" << std::endl;
}
int main()
{
    SimpleEvent e;
    e.AddListener(print);
    e.AddListener(print);
    e.Invoke();
    return 0;
}
