/*
 * File: CalculatAverage.c
 *
 * Code generated for Simulink model 'CalculatAverage'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb  5 09:58:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "CalculatAverage.h"
#include "CalculatAverage_private.h"

/* Block signals (default storage) */
B_CalculatAverage_T CalculatAverage_B;

/* External inputs (root inport signals with default storage) */
ExtU_CalculatAverage_T CalculatAverage_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_CalculatAverage_T CalculatAverage_Y;

/* Real-time model */
static RT_MODEL_CalculatAverage_T CalculatAverage_M_;
RT_MODEL_CalculatAverage_T *const CalculatAverage_M = &CalculatAverage_M_;

/* Model step function */
void CalculatAverage_step(void)
{
  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   */
  CalculatAverage_Y.Out3 = CalculatAverage_U.In1;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Product: '<S1>/Divide1'
   */
  CalculatAverage_Y.Out4 = CalculatAverage_U.In1 / CalculatAverage_B.Probe1;

  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   */
  CalculatAverage_Y.Out1 = CalculatAverage_U.In1;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   */
  CalculatAverage_Y.Out2 = CalculatAverage_U.In1;
}

/* Model initialize function */
void CalculatAverage_initialize(void)
{
  /* Start for Probe: '<S1>/Probe1' */
  CalculatAverage_B.Probe1 = 1.0;
}

/* Model terminate function */
void CalculatAverage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
