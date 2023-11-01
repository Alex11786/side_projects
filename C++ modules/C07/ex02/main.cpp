#include <iostream>
#include "Array.hpp"


int main()
{

	Array<int> arr(7);
    arr[0] = 13;
    arr[1] = -3;
    arr[2] = 119;
    arr[3] = 0;
    arr[4] = -500;

    for(int i = 0; i < 8; i++)
    {
        try 
        {
            std::cout << arr[i] << std::endl;
        }
        catch(std::exception &ex)
        {
            std::cout << ex.what() << std::endl;
        }
    }

    std::cout << std::endl << std::endl;

    Array<char> arr_c(5);
    arr_c[0] = 'h';
    arr_c[1] = '*';
    arr_c[2] = '3';
    arr_c[3] = 'N';
    for(int i = 0; i < 7; i++)
        std::cout << arr_c[i] << std::endl;

    std::cout << "-----------" << std::endl;
    return(0);
}