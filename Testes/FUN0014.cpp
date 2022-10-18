#include <iostream>

int main()
{

    // FINDING THE ELEMENTS OF AN ARRAY dont count the repetitions
    int numbers[]{1, 2, 4, 5};

    for (unsigned int i{0}; i <= sizeof(numbers) / sizeof(numbers[0]); i++) // old way to find the size of an array
    // instead of sizeof(array) / sizeof (array[0]) now we use size()
    {
        if (i != std::size(numbers))
        {
            std::cout << "[" << i << "] value: " << numbers[i] << std::endl;
        }
        else
        {
            std::cout << "!!!out of array bound \n[" << i << "] Garbage value: " << numbers[i] << std::endl;
            numbers[i + 1] = 1000;
            std::cout << "!!!out of array bound \n[" << i + 1 << "] Changed value: " << numbers[i + 1] << std::endl;
            // C++ allows us to use out of range like this and the changes are unreliable
        }
    }

    return 0;
}