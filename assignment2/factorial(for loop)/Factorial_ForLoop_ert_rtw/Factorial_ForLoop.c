/*
 * File: Factorial_ForLoop.c
 *
 * Code generated for Simulink model 'Factorial_ForLoop'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 11:59:28 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "Factorial_ForLoop.h"
#include "Factorial_ForLoop_private.h"

/* Block states (default storage) */
DW_Factorial_ForLoop_T Factorial_ForLoop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_ForLoop_T Factorial_ForLoop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_ForLoop_T Factorial_ForLoop_Y;

/* Real-time model */
static RT_MODEL_Factorial_ForLoop_T Factorial_ForLoop_M_;
RT_MODEL_Factorial_ForLoop_T *const Factorial_ForLoop_M = &Factorial_ForLoop_M_;

/* Model step function */
void Factorial_ForLoop_step(void)
{
  uint16_T s1_iter;
  uint16_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/In1' */
  tmp = Factorial_ForLoop_U.In1;
  if (Factorial_ForLoop_U.In1 > 65534) {
    tmp = 65534U;
  }

  /* End of Inport: '<Root>/In1' */
  for (s1_iter = 1U; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Factorial_ForLoop_Y.Out1 = (uint16_T)((uint32_T)s1_iter *
      Factorial_ForLoop_DW.UnitDelay_DSTATE);

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    Factorial_ForLoop_DW.UnitDelay_DSTATE = Factorial_ForLoop_Y.Out1;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_ForLoop_initialize(void)
{
  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Factorial_ForLoop_DW.UnitDelay_DSTATE = 1U;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void Factorial_ForLoop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
