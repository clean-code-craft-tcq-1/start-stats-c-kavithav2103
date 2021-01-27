#include "stats.h"

struct Stats 
{
	float average;
	float min;
	float max;
}s;
struct Stats compute_statistics(const float* numberset, int setlength) {
    s.average = 0;
    for (int i =0 ;i<setlength;i++)
   {
	 s.average = s.average + numberset[i];
   }
   
   s.average = s.average /setlength;
   
    s.min = 0;
    s.max = 0;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
