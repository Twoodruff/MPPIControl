//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
// File: sampleTraj_MPPI_CartPole.h
//
// MATLAB Coder version            : 4.2
// C/C++ source code generated on  : 13-May-2019 22:36:12
//
#ifndef SAMPLETRAJ_MPPI_CARTPOLE_H
#define SAMPLETRAJ_MPPI_CARTPOLE_H

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Sample_MPPI_CartPole_types.h"

// Function Declarations
extern void sampleTraj_MPPI_CartPole(double k, double N, double variance, double
  Stk[1000], double x[400], double delta_u[100000], const double u[100], double
  R, double mc, double mp, double l, double g, double kd, double dt);

#endif

//
// File trailer for sampleTraj_MPPI_CartPole.h
//
// [EOF]
//
