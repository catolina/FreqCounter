
#ifndef FreqCounter_h
#define FreqCounter_h


//#include <avr/interrupt.h>
#if defined (SPARK)
  #include "application.h"
#else
  #if defined(ARDUINO) && ARDUINO >= 100
    #include "Arduino.h"
  #else
    #include "WProgram.h"
  #endif
  // here could follow some of the includes only needed on Arduino
  // see bellow

#endif

namespace FreqCounter {

	extern unsigned long f_freq;
	extern volatile unsigned char f_ready;
	extern volatile unsigned char f_mlt;
	extern volatile unsigned int f_tics;
	extern volatile unsigned int f_period;
	extern volatile unsigned int f_comp;
	
	void start(int ms);
	
	
}

#endif





