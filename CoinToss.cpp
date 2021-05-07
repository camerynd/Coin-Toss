#include <iostream>
#include <cstdlib>//to allow random number generating function
#include <ctime>//to make the random number different each time program is run
using namespace std;

int coinToss(int& toss);//function prototype
//driver program
int main()
{   
    int tossTimes;//variable for storing user input
    srand(time(0));//necessary for random number generator to give different value each time its run

    cout << "How many times would you like to toss the coin? ";
    cin >> tossTimes;//user gets to decide how many random values to generate
    cout << endl;

    coinToss(tossTimes);//call coinToss function

    return 0;
}

int coinToss(int& toss)//generate heads or tales and return the value as many times as the user specified
{
    int result;
    for(int i = 1; i <= toss; i++)
    {   result = rand() % 2 + 1;
            if (result == 1)
                {cout << "heads.";}
            if (result == 2)
                {cout << "tales.";}
        cout << endl;
    }
    return result;
}