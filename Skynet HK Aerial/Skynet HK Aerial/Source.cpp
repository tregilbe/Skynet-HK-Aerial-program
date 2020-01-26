#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(static_cast<unsigned int>(time(0)));
    //seed random number generator

    //int secretNumber = rand() % 100 + 1;
    //random number between 1-100


    int trueLocation = rand() % 64 + 1;
    int tries = 0;
    int searchGridHighNumber = 64;
    int searchGridLowNumber = 1;
    int predicted = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;

    bool solved = false;
    cout << "\tWelcome to Enemy Finder!!!\n\n";


    do
    {
        int predicted = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;


        cout << "\n\nThe AI has guessed :" << predicted;
        cout << "\n\nthe Target is at : " << trueLocation;

        ++tries;


        if (predicted > trueLocation)
        {


            cout << "\n\nToo high!!!\n\n";
            searchGridHighNumber = predicted;

        }

        else if (predicted < trueLocation)
        {

            cout << "\n\nToo low!!\n\n";
            searchGridLowNumber = predicted;
        }

        else
        {

            cout << "\nThats it!! The AI got it in " << tries << " Guesses!\n";
            solved = true;
        }

    } while (solved == false);





    return 0;
}