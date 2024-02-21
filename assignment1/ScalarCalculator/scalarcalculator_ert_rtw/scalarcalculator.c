/*
 * File: scalarcalculator.c
 *
 * Code generated for Simulink model 'scalarcalculator'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb  5 09:03:31 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "scalarcalculator.h"
#include "scalarcalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_scalarcalculator_T scalarcalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_scalarcalculator_T scalarcalculator_Y;

/* Real-time model */
static RT_MODEL_scalarcalculator_T scalarcalculator_M_;
RT_MODEL_scalarcalculator_T *const scalarcalculator_M = &scalarcalculator_M_;

/* Model step function */
void scalarcalculator_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S2>/Add'
   */
  scalarcalculator_Y.Out1 = scalarcalculator_U.In1 + scalarcalculator_U.In2;

  /* Outport: '<Root>/Out7' incorporates:
   *  Constant: '<S5>/FixPt Constant'
   *  Inport: '<Root>/In3'
   *  Sum: '<S5>/FixPt Sum1'
   */
  scalarcalculator_Y.Out7 = scalarcalculator_U.In3 - 1.0;

  /* Outport: '<Root>/Out6' incorporates:
   *  Constant: '<S6>/FixPt Constant'
   *  Inport: '<Root>/In3'
   *  Sum: '<S6>/FixPt Sum1'
   */
  scalarcalculator_Y.Out6 = scalarcalculator_U.In3 + 1.0;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S2>/Subtract'
   */
  scalarcalculator_Y.Out2 = scalarcalculator_U.In1 - scalarcalculator_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S2>/Product1'
   */
  scalarcalculator_Y.Out3 = scalarcalculator_U.In1 * scalarcalculator_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S2>/Divide1'
   */
  scalarcalculator_Y.Out4 = scalarcalculator_U.In1 / scalarcalculator_U.In2;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In3'
   *  UnaryMinus: '<S2>/Unary Minus1'
   */
  scalarcalculator_Y.Out5 = -scalarcalculator_U.In3;
}

/* Model initialize function */
void scalarcalculator_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void scalarcalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
