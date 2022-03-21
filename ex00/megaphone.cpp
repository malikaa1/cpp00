#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
    int i;
    int j;
    char c;

    i = 1;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j] != '\0')
            {
                c = av[i][j];
                if (islower(c))
                    c = toupper(c);
                std::cout << c;
                j++;
            }
            i++;
        }
    }
    std::cout << std::endl;
    return 0;
}