#include <iostream>

int main()
{
    int val = 10;
    while (val >= 0) 
    {
        std::cout << "the " << val << "th number of 10 to 0 is "
            << val << std::endl;
        --val;
    }

    return 0;
}
