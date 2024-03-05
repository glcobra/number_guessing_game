#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100 ) + 1;

    cout<<"**********NUMBER GUESSING GAME**********\n";

    do{
        cout << "Enter a number 1-100\n";
        cin >> guess;
        tries++;

        if( guess > num )
        {
            cout<<"Too hihg, try again!\n";

        }
        else if( guess < num)
        {
            cout<<"Too low, try again!\n";
        }
        else
        {
            cout<<"CORRECT number of tries is: "<< tries <<"\n";
        }
    }
    while( guess != num );

    cout<<"*****************************************\n";

    return 0;

}

