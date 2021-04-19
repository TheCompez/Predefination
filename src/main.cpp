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
