#include "Dpr/Battle/Logic/MainModule.h"
#include "Dpr/Battle/Logic/Exp.h"

#include "Pml/PokePara/CalcTool.h"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/PokePara/Accessor.h"

#include "Pml/Local/Random.h"

#include "logger.hpp"
#include "log.h"

void battleHook(Dpr::Battle::Logic::MainModule *mainModule, int *seq) {

     __asm("MOV X19, X0");
     __asm("MOV X20, X1");

     // not tested
     mainModule->m_regularMoney = 9999;

     __asm("MOV X1, X20");
     __asm("LDR X8, [X19,#0x40]");
}

int32_t monsHook(Pml::PokePara::Accessor *accessor) {
     
     uint randomPoke = Pml::Local::Random::GetValue(496);

     if(randomPoke <= 0) {
          randomPoke = 1;
     }

     return randomPoke;
}