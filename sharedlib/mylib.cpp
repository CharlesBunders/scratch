#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

#include "mylib.h"


namespace mystaticlib
{
    void Say( const string& Something )
    {
        cout << Something << endl;
    }
}
