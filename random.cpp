#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * number_guess - Entry point
 * Return: Always 0 (Success)
 * Created by mahiuha on 3/2/23.
 */

int number_guess()
{
    short secret_number;
    short guess;

    ::srand(time(0));
    secret_number = ::rand() % 10 + 1;

    do
    {
        cout << "Guess a number (1 to 10): ";
        cin >> guess;
        if (secret_number < guess)
        {
            cout << "The secret number is lower" << endl;
        }
        else if (secret_number > guess)
        {
            cout << "The secret number is higher" << endl;
        }
    }
    while (secret_number != guess);
    cout << "Congratulations" << endl;

    return 0;
}

