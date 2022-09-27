#include <iostream>
#include <string>

int main(void)
{
    std::string Brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &Brain;
    std::string &stringREF = Brain;

    std::cout << &Brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << Brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;


    return 0;
}