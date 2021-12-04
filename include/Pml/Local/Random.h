#pragma once

#include "types.h"

#include "Pml/MonsNo.h"

namespace Pml
{
    namespace Local
    {
        class Random {
            public:
                static uint GetValue(); // 0x269B8A0
                static uint GetValue(uint max); // 0x269BA10
        };
    } // namespace Local
    
} // namespace Pml
