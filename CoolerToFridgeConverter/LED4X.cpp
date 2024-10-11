#include "LED4X.h"

LED4X::LED4X(int pins[NR_PINS])
{
  for (int i = 0; i < NR_PINS; i++)
  {
    m_pins[i] = pins[i];
    pinMode(m_pins[i], OUTPUT);
  }
}

LED4X::write_number(unsigned int number)
{
  switch(number) {
    case 1:
      
    case 2:
      break;
    default:
      // code block
}
}


