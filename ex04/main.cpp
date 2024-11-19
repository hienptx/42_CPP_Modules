#include "Sed.hpp"

int main(int ac, char *ag[])
{
    if (ac == 4)
    {
        input_handling(ag);        
    }
    else
    {
        std::cout   << "Invalid command"
                    << "./sed filename \"string_1\" \"string_2\""
                    << std::endl;
    }
    return (0);
}
