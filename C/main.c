#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool _isPrime23(int number);

int main()
{
    int _range = 100000000;
    int max = 0;
    
    for (int number = 0; number <= _range; ++number)
    {
        if (_isPrime23(number))
        {
            max = number;
        }
    }

    printf("Max prime number is : %d : ", max);

    return 0;
}

bool _isPrime23(int number)
{
    if (number == 2)
    {
        return true;
    }
    else if (number <= 1 || (number > 2 && number % 2 == 0))
    {
        return false;
    }
    else
    {
        int upper_limit = (int)sqrt((double)number);
        int index = 3;

        while (index < upper_limit)
        {
            if (number % index == 0)
            {
                return false;
            }

            index += 2;
        }

        return true;
    }
}
