/*Arculator 0.8 by Tom Walker
  ARM3 CP15 emulation*/
  
#include "arc.h"
#include "arm.h"
#include "cp15.h"
#include "mem.h"

int cp15_cacheon;

void resetcp15()
{
        arm3cp.ctrl = 0;
        cp15_cacheon = 0;
        arc_setspeed(arm_cpu_speed);
}

uint32_t readcp15(int reg)
{
        switch (reg)
        {
                case 0: /*ID*/
                return 0x41560300; /*VLSI ARM3*/
                case 2: /*CTRL*/
                return arm3cp.ctrl;
                case 3: /*Cacheable areas*/
                return arm3cp.cache;
                case 4: /*Updateable areas*/
                return arm3cp.update;
                case 5: /*Disruptive areas*/
                return arm3cp.disrupt;
        }
        return 0;
}

void writecp15(int reg, uint32_t val)
{
        switch (reg)
        {
		case 1:
		cache_flush();
		return;
                case 2: /*CTRL*/
                arm3cp.ctrl=val;
                arc_setspeed((val & 1) ? arm_cpu_speed : arm_cpu_speed);
                
                cp15_cacheon = val & 1;
                
                rpclog("CTRL %i\n", val & 1);
                vidc_redovideotiming();
//                redoioctiming();
                return;
                case 3: /*Cacheable areas*/
                arm3cp.cache=val;
                return;
                case 4: /*Updateable areas*/
                arm3cp.update=val;
                return;
                case 5: /*Disruptive areas*/
                arm3cp.disrupt=val;
                return;
        }
}

