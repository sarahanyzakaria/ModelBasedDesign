/*
 * File: Calculator_subsystem.c
 *
 * Code generated for Simulink model 'Calculator_subsystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb  5 13:12:10 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "Calculator_subsystem.h"
#include "Calculator_subsystem_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_subsystem_T Calculator_subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_subsystem_T Calculator_subsystem_Y;

/* Real-time model */
static RT_MODEL_Calculator_subsystem_T Calculator_subsystem_M_;
RT_MODEL_Calculator_subsystem_T *const Calculator_subsystem_M =
  &Calculator_subsystem_M_;

/* Model step function */
void Calculator_subsystem_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Add'
   */
  Calculator_subsystem_Y.Out1 = Calculator_subsystem_U.In1 +
    Calculator_subsystem_U.In2;

  /* Outport: '<Root>/y1' incorporates:
   *  Constant: '<S2>/FixPt Constant'
   *  Inport: '<Root>/u'
   *  Sum: '<S2>/FixPt Sum1'
   */
  Calculator_subsystem_Y.y1 = Calculator_subsystem_U.u - 1.0;

  /* Outport: '<Root>/y' incorporates:
   *  Constant: '<S3>/FixPt Constant'
   *  Inport: '<Root>/u'
   *  Sum: '<S3>/FixPt Sum1'
   */
  Calculator_subsystem_Y.y = Calculator_subsystem_U.u + 1.0;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Subtract'
   */
  Calculator_subsystem_Y.Out2 = Calculator_subsystem_U.In1 -
    Calculator_subsystem_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Product1'
   */
  Calculator_subsystem_Y.Out3 = Calculator_subsystem_U.In1 *
    Calculator_subsystem_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Divide1'
   */
  Calculator_subsystem_Y.Out4 = Calculator_subsystem_U.In1 /
    Calculator_subsystem_U.In2;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/u'
   *  UnaryMinus: '<S1>/Unary Minus1'
   */
  Calculator_subsystem_Y.Out5 = -Calculator_subsystem_U.u;
}

/* Model initialize function */
void Calculator_subsystem_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Calculator_subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
