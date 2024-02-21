/*
 * File: ProgrammingCalculator.c
 *
 * Code generated for Simulink model 'ProgrammingCalculator'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb  5 11:23:16 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "ProgrammingCalculator.h"
#include "ProgrammingCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_ProgrammingCalculator_T ProgrammingCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ProgrammingCalculator_T ProgrammingCalculator_Y;

/* Real-time model */
static RT_MODEL_ProgrammingCalculato_T ProgrammingCalculator_M_;
RT_MODEL_ProgrammingCalculato_T *const ProgrammingCalculator_M =
  &ProgrammingCalculator_M_;

/* Model step function */
void ProgrammingCalculator_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND'
   */
  ProgrammingCalculator_Y.Out1 = ProgrammingCalculator_U.In1 &
    ProgrammingCalculator_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise OR'
   */
  ProgrammingCalculator_Y.Out2 = ProgrammingCalculator_U.In1 |
    ProgrammingCalculator_U.In2;

  /* S-Function (sfix_bitop): '<Root>/Bitwise XOR' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise XOR1'
   */
  ProgrammingCalculator_Y.Out3 = ProgrammingCalculator_U.In1 ^
    ProgrammingCalculator_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   */
  ProgrammingCalculator_Y.Out4 = ~ProgrammingCalculator_Y.Out3;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT1'
   */
  ProgrammingCalculator_Y.Out5 = ~ProgrammingCalculator_U.In1;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT2'
   */
  ProgrammingCalculator_Y.Out6 = ~ProgrammingCalculator_U.In2;
}

/* Model initialize function */
void ProgrammingCalculator_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void ProgrammingCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
