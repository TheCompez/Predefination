#include "macro.h"

Macro::Macro()
{

}

std::string Macro::get__cplusplus(const bool &flag)
{
    if(flag == 0) {
        return __GENESIS_CPP_VALUE__;
    } else if (1) {
        return __GENESIS_COMPILER__;
    }
}
