#include <iostream>

namespace syc
{
    int show()
    {
        std::cout << "I am in syc";
        return 0;
    }
}

int main()
{
    syc::show();
    return 0;
}
