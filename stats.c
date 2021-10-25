#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int loopCount = 0;
    
    if((setlength == 0) || (numberset == 0) || (numberset == NULL))
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    else
    {
        s.average = 0;
        s.min = numberset[loopCount];
        s.max = numberset[loopCount];
        
        for(loopCount=0; loopCount < setlength; loopCount++)
        {
            s.average += numberset[loopCount];
            
            if(numberset[loopCount] > s.max)
                s.max = numberset[loopCount];
            
            if(numberset[loopCount] < s.min)
                s.min = numberset[loopCount];
        }
        
        s.average /= setlength;
    }
    
    return s;
}

