#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    for (int i =0 ;i<setlength;i++)
   {
	 s.average = s.average + numberset[i];
   }
   
   s.average = s.average /setlength;
   s.min = numberset[0];
	for (int i =0;i<setlength;i++)
	{
		if (numberset[i]<s.min)
		{
			s.min = numberset[i];
		}
	}
    s.max = numberset[0];
	for (int i =0;i<setlength;i++)
	{
		if (numberset[i]>s.max)
		{
			s.max = numberset[i];
		}
	}
	
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
