#ifndef TAKPHASE_H
#define TAKPHASE_H

#include "JMat.h"

template <class T>
class GClass{
public:
  TakPhase(const T &in_F) : F(in_F){};
  JMat _F;
};

#endif
