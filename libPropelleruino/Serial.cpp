/**
 * @file Serial.cpp
 * @brief Provides Arduino Serial funtions on the Propeller
 *
 * Copyright (c) 2013 by Martin Heermance
 * MIT Licensed
 */


#include "Arduino.h"
#include <stdio.h>

void Serial_::begin(uint16_t baud_count)
{
}

void Serial_::end(void)
{
}

void Serial_::println(const char * str)
{
   printf("%s\n", str);
}

Serial_ Serial;