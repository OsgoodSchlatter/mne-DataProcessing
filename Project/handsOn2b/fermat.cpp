#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int count = 0;
    int boundary = pow(10, 2);
    printf("boundary = %d\n", boundary);
    for (int exp = 0; exp < boundary; exp++)
    {
        for (int i = 0; i < boundary; i++)
        {
            for (int j = 0; j < boundary; j++)
            {
                if (pow(i, 3) + pow(j, 3) == pow(exp, 3))
                {
                    if (i != 0 && j != 0)
                    {
                        printf("pairs: a=%d, b=%d, a=%d, b=%d, a=%d, b=%d, a=%d, b=%d \n", i, j, -i, j, i, -j, -i, -j);
                        count++;
                    }
                }
                if (pow(i, 4) + pow(j, 4) == pow(exp, 4))
                {
                    if (i != 0 && j != 0)
                    {
                        printf("pairs: a=%d, b=%d, a=%d, b=%d, a=%d, b=%d, a=%d, b=%d \n", i, j, -i, j, i, -j, -i, -j);
                        count++;
                    }
                }
            }
        }
    }
    if (count == 0)
    {
        printf("no pair found");
    }
}
