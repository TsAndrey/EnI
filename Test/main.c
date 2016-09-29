
#include "io430.h"

int main( void )
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD; // Остановка Watchdog
  while(1)
  {
  }
}
