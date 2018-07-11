# Predefination
Some patches for __cplusplus macro.

How to use :

```
#include <iostream>

using namespace std;

#include "macro.h"

int main()
{
    Macro mc;
    cout << "Hello World!" << endl;
    cout << "C++ Standard Version (MSVC : " << __cplusplus << endl;
    cout << "C++ Standard Version (with bug fix in MSVC : " << __GENESIS_CPP_VALUE__ << endl;
    cout << "C++ Standard Version (with bug fix in MSVC using function: " << mc.get__cplusplus(false) << endl;
    cout << "Compiler name using flag true: " << mc.get__cplusplus(true) << endl;
    return 0;
}

```
