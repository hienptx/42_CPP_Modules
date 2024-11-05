#include <iostream>

// namespace example

namespace func1
{
    void print(int a)
    {
        std::cout << "a = " << a << std::endl;
    }
}

namespace func2
{
    void print(int *a)
    {
        *a = *a + 1;
        std::cout << "increment a = " << *a << std::endl;
    }

}

int main()
{
    int a = 2;

    func1::print(a);
    func2::print(&a);

    return(0);
}