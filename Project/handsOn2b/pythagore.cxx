#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int c = 0;

    cout << "Type c: ";
    cin >> c;
    int boundary = pow(10, 3);
    printf("boundary = %d\n", boundary);

    for (int i = 0; i < boundary; i++)
    {
        for (int j = 0; j < boundary; j++)
        {
            if (pow(i, 2) + pow(j, 2) == c)
            {
                printf("pairs: a=%d, b=%d, a=%d, b=%d, a=%d, b=%d, a=%d, b=%d \n", i, j, -i, j, i, -j, -i, -j);
                // printf("proof: a2=%f, b2=%f, a2+b2  = %f and c= %d \n", pow(i, 2), pow(j, 2), pow(i, 2) + pow(j, 2), c);
            }
        }
    }
}
