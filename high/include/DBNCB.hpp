#ifndef __DBNCB_HPP__
#define __DBNCB_HPP__

#include <string>
#include "pnlHighConf.hpp"
#include "NetCallBack.hpp"

class PNLHIGH_API DBNCallback: public NetCallback
{
public:
    DBNCallback() {}

    virtual pnl::CGraphicalModel *CreateModel(ProbabilisticNet &net);

    virtual void GenerateSamples(ProbabilisticNet &net,
      	pnl::pEvidencesVector *newSamples, int nSample, pnl::CEvidence *evid)  {}
     
};

#endif //__DBNCB_HPP__