#include <iostream>
#include <string>
#include <ctime>

int main()
{
    bool stop;

    std::srand(std::time(0)); // usa o randomizador por tempo desde 1970

    std::cout << "What is your full name: ";
    std::string name;
    std::getline(std::cin, name);

    std::string wish;
    while (!stop) // wish loop
    {
        std::cout << "Want to know the future?\nY/y = yes e N/n = no.\n"
                  << std::endl;
        std::cin >> wish >> std::uppercase;

        if (wish == "Y" || wish == "y")
        {
            int num = std::rand() % 5; // resto sempre acima de 0 e abaixo de 5

            switch (num)
            {
            case 0:
                std::cout << name << ", someone won't give to you 1 million dollars"
                          << std::endl;
                break;
            case 1:
                std::cout << name << ", you will be rich"
                          << std::endl;
                break;
            case 2:
                std::cout << name << ", tomorrow you'll die"
                          << std::endl;
                break;
            case 3:
                std::cout << name << ", look behind... There's something uninteresting"
                          << std::endl;
                break;
            default:
                std::cout << "Sorry, " << name << ". I couldn't predict your future"
                          << std::endl;
                break;
            }
        }
        else if (wish == "N" || wish == "n")
        {
            std::cout << "It's enough by now. See you late, " << name << std::endl
                      << std::endl;
            break; // fim do loop / teste
        }
        else
        {
            std::cout << "Type just once Y or y to yes and N or n to NO" << std::endl;
            continue; // o loop repeats / se repete.
        }
    }
}