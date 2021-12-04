#pragma once

#include "Pml/MonsNo.h"
#include "types.h"

namespace Pml
{
    namespace PokePara
    {
        class Accessor {
            public:
                MonsNo GetMonsNo(); // 0x26A0670
                ushort GetFormNo(); // 0x26A1CE0

        };
    } // namespace PokePara
    
} // namespace Pml


