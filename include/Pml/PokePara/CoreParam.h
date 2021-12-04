#pragma once

#include "types.h"
#include "Pml/MonsNo.h"

namespace Pml
{
    namespace PokePara
    {
        class CoreParam {
            public:
                // RVA: 0x23AC870 Offset: 0x23AC971 VA: 0x23AC870
	            void Evolve(MonsNo nextMonsno, uint routeIndex);
        };
    } // namespace PokePara
    
} // namespace Pml
