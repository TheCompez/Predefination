#include "include/macro.hpp"

namespace Utility {

MacroPatch::MacroPatch() {

}

MacroPatch::~MacroPatch() {

}

std::string MacroPatch::__cPlusPlusValue() const noexcept
{
#if defined (_MSC_VER)
  return __PROJECT_CPP_VALUE__;
#else
  return std::to_string(__PROJECT_CPP_VALUE__);
#endif
}

std::string MacroPatch::__cPlusPlusVersion() const noexcept
{
#if defined (_MSC_VER)
  return __PROJECT_CPP_VERSION__;
#else
  return std::to_string(__PROJECT_CPP_VERSION__);
#endif
}

std::string MacroPatch::__cPlusPlusStandard() const noexcept
{
#if __PROJECT_CPP_VERSION__ == 199711L
  return "C++98";
  #elif __PROJECT_CPP_VERSION__ == 201103L
  return "C++11";
  #elif __PROJECT_CPP_VERSION__ == 201402L
  return "C++14";
  #elif __PROJECT_CPP_VERSION__ == 201703L || __PROJECT_CPP_VERSION__ == 201704L
  return "C++17";
  #elif __PROJECT_CPP_VERSION__ == 202002L
  return "C++20";
#endif
}

}
