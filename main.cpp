#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned long num;
    cin>>num;
    while (num != 0)
    {
        if (floor(sqrt(num)) == ceil(sqrt(num)))
        {
            printf("yes\n");
        } else {
            printf("no\n");
        }
        cin>>num;
    }

    return 0;
}
