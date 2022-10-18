#include <iostream>

int main()
{

    // FINDING THE ELEMENTS OF AN ARRAY dont count the repetitions
    int numbers[]{1, 2, 3, 4, 4, 5, 4, 2};
    const unsigned int collection_size{8};
    int uniquesCounter{0};
    int uniquesValues[20];

    for (size_t i{0}; i < collection_size; i++)
    {
        bool already_put = false;
        for (size_t j{0}; j < uniquesCounter; j++)
        {
            if (uniquesValues[j] == numbers[i])
            {
                already_put = true;
                break;
            }
        }

        if (already_put == false)
        {
            uniquesValues[uniquesCounter++] = numbers[i];
        }
    }

    std::cout << "Elements: " << uniquesCounter << " Values: ";
    for (size_t i{0}; i < uniquesCounter; i++)
    {
        std::cout << uniquesValues[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    return 0;
}