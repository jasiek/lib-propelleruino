/**
 * @file wiring.c
 * @brief Provides Arduino types and functions on the Propeller
 *
 * Copyright (c) 2013 by Martin Heermance
 * MIT Licensed
 */

#include <Arduino.h>

static const int Us = 1000000;
static const int Ms = 1000;

void delay(unsigned long Time)
{
  // Guard against zero or negative wait times which locks the processor.
  Time = max(1, Time);

  waitcnt( (Time * (CLKFREQ / Ms)) + CNT );
}

void delayMicroseconds(uint16_t Time)
{
  // Guard against zero or negative wait times which locks the processor.
  Time = max(1, Time);

  // LMM overhead means a 400 us wait is the smallest unit of delay
//  Time = max(400, (Time * (CLKFREQ / Us)) );
//  waitcnt( Time + CNT );

  waitcnt( (Time * (CLKFREQ / Us))  + CNT );
}
