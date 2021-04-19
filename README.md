# Predefination
**Some patches for __cplusplus macro.**
===================================
In MSVC 2017 **__cplusplus** macro returns **199711** value :( that is wrong! you can use this patch for fix this problem in Microsoft **MSVC2017** compiler. :)

```cpp
#include <iostream>
#include "include/macro.hpp"

using namespace std;
using namespace Utility;

int main()
{

  MacroPatch mPatch;
  cout << "Hello World!" << endl;
  cout << "C++ Standard Version : " << __cplusplus << endl;
  cout << "C++ Standard String : " << mPatch.__cPlusPlusStandard() << endl;
#if defined(__PROJECT_MSVC__)
  cout << "C++ Standard Version (with bug fix in MSVC : " << __PROJECT_CPP_VALUE__ << endl;
  cout << "C++ Standard Value (with bug fix in MSVC using function: " << mPatch.__cPlusPlusValue() << endl;
  cout << "C++ Standard Version (with bug fix in MSVC using function: " << mPatch.__cPlusPlusVersion() << endl;
  cout << "Compiler name using flag: " << mc.__cPlusPlus(true) << endl;
#else
  cout << "Standard value: " << mPatch.__cPlusPlusValue() << endl;
  cout << "Standard version: " << mPatch.__cPlusPlusVersion() << endl;
#endif
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
