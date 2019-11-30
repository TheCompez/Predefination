# Predefination
**Some patches for __cplusplus macro.**
===================================
In MSVC 2017 **__cplusplus** macro returns **199711** value :( that is wrong! you can use this patch for fix this problem in Micorosoft **MSVC2017** compilers. :)

```cpp
#include <iostream>

using namespace std;

#include "macro.h"

int main()
{
    Macro mc;
    cout << "Hello World!" << endl;
    cout << "C++ Standard Version (MSVC) : " << __cplusplus << endl;
    cout << "C++ Standard Version (with bug fix in MSVC : " << __GENESIS_CPP_VALUE__ << endl;
    cout << "C++ Standard Version (with bug fix in MSVC using function: " << mc.get__cplusplus(false) << endl;
    cout << "Compiler name using flag true: " << mc.get__cplusplus(true) << endl;
    return 0;
}

```

**Note:**
Make sure the default language is set to version 17 in .pro file.

```
CONFIG += c++17
```
Or
```
CONFIG += c++1z
```

**Result:** 
```
Hello World!
C++ Standard Version (MSVC) : 199711
C++ Standard Version (with bug fix in MSVC : 201703
C++ Standard Version (with bug fix in MSVC using function: 201703
Compiler name using flag true: MSVC++
```
