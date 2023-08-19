#include <iostream>

using namespace std;

/*
 * main -Entry point.
 * Return: Always 0 (Success)
 * Created by mahiuha on 3/2/23.
 */

int dice();
int number_guess();
bool is_logged_in();

int main()
{
    cout << dice() << endl
         << number_guess() << endl
         << is_logged_in() << endl;

    return 0;
}
