#ifndef ADAPTER_TRIMMER_H
#define ADAPTER_TRIMMER_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "overlapanalysis.h"
#include "filterresult.h"

using namespace std;

class AdapterTrimmer{
public:
    AdapterTrimmer();
    ~AdapterTrimmer();

    static bool trimByOverlapAnalysis(Read* r1, Read* r2, FilterResult* fr);

};


#endif