#pragma once

#include "types.h"

#include "Pml/MonsNo.h"

namespace Pml
{
    namespace PokePara
    {
        class CalcTool {
            public:

                static byte CalcLevel(MonsNo monsno, ushort formno, uint exp);

        };
    } // namespace PokePara
    
} // namespace Pml
