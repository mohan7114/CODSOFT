#include<bits/stdc++.h>
#include<ctime>
using namespace std;
int main()
{
    int number;
    srand(time(0));
    int random=rand() %100 + 1;
    int attempt=0;
    while(true)
    {
        cout<<"Guess the Number between 1-100: ";
        cin>>number;
        attempt++;
        if(number==random)

        {
            cout<<"Congrats...!!!,You Have Guessed the correct number "<<random<<" in "<<attempt<<" attempts";
            break;
        }
        else if(number > random){
            cout<<"Your guess is too high\n";
        }
        else
        {
            cout<<"Your guess is too low\n";
        }
    }
}
