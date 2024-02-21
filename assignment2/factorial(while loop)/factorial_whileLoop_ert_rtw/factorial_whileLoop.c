/*
 * File: factorial_whileLoop.c
 *
 * Code generated for Simulink model 'factorial_whileLoop'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Feb 21 08:39:42 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "factorial_whileLoop.h"
#include "factorial_whileLoop_private.h"

/* Block states (default storage) */
DW_factorial_whileLoop_T factorial_whileLoop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_factorial_whileLoop_T factorial_whileLoop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_factorial_whileLoop_T factorial_whileLoop_Y;

/* Real-time model */
static RT_MODEL_factorial_whileLoop_T factorial_whileLoop_M_;
RT_MODEL_factorial_whileLoop_T *const factorial_whileLoop_M =
  &factorial_whileLoop_M_;

/* Model step function */
void factorial_whileLoop_step(void)
{
  int32_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* Inport: '<Root>/IC' */
  loopCond = factorial_whileLoop_U.IC;
  while (loopCond) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Delay: '<S1>/Delay'
     *  Product: '<S1>/Product'
     */
    factorial_whileLoop_Y.Out1 = s1_iter * factorial_whileLoop_DW.Delay_DSTATE;

    /* Update for Delay: '<S1>/Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    factorial_whileLoop_DW.Delay_DSTATE = factorial_whileLoop_Y.Out1;

    /* RelationalOperator: '<S1>/LessThanOrEqual' incorporates:
     *  Inport: '<Root>/In1'
     */
    loopCond = (s1_iter < factorial_whileLoop_U.In1);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void factorial_whileLoop_initialize(void)
{
  /* SystemInitialize for Iterator SubSystem: '<Root>/While Iterator Subsystem' */
  /* InitializeConditions for Delay: '<S1>/Delay' */
  factorial_whileLoop_DW.Delay_DSTATE = 1;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model terminate function */
void factorial_whileLoop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
