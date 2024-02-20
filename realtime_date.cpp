#include <iostream>

#include <ctime>

using namespace std;

int main()
{

    time_t timevariable=time(NULL);
    tm* tptr=localtime(&timevariable);
    cout << tptr->tm_mday<< "/";
    cout <<1+tptr->tm_mon<< "/";
    cout <<1900+ tptr->tm_year<<endl;

    //getting the current time using the computer

        cout << tptr->tm_hour<<":"<<tptr->tm_min<<":"<<tptr-> tm_sec<<endl;

    return 0;

}