#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
if(setlength == 0)
    {
        s.average = NaN;
        s.min = NaN;
        s.max = NaN;
    }
    else
    {
        s.min=numberset[0];
        s.max=numberset[0];
        int sum =0;
        for(int i= 0;i<setlength;i++)
        {
           sum+= numberset[i];
           if(numberset[i]<s.min) s.min=numberset[i];
           if(numberset[i]>s.max) s.max=numberset[i];
        }
        s.average=sum/setlength;
    }
     return s;

}

