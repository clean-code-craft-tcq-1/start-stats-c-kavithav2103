#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
void emailAlerter()
{
  emailAlertCallCount = emailAlertCallCount +1;
}

void ledAlerter()
{
 ledAlertCallCount = ledAlertCallCount +1;
}
