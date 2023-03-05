#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * main - Entry point
 * Return: Always 0 (Success)
 * Created by mahiuha on 3/2/23.
 */

int dice()
{
    const short max_number = 6;
    const short min_number = 1;
    ::srand(time(0));
    short first_number = (::rand() % (max_number - min_number + 1)) + min_number;
    short second_number = (::rand() % (max_number - min_number + 1)) + min_number;
    cout << first_number
         << ", "
         << second_number
         << endl;

    return 0;
}
