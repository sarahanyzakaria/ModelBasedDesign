/*
 * File: Odd_Even.c
 *
 * Code generated for Simulink model 'Odd_Even'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 11:07:57 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "Odd_Even.h"
#include "Odd_Even_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Odd_Even_T Odd_Even_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Odd_Even_T Odd_Even_Y;

/* Real-time model */
static RT_MODEL_Odd_Even_T Odd_Even_M_;
RT_MODEL_Odd_Even_T *const Odd_Even_M = &Odd_Even_M_;
real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Model step function */
void Odd_Even_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/In1'
   *  Math: '<S1>/Rem'
   *  Outport: '<Root>/Out1'
   *  SignalConversion generated from: '<S2>/Out1'
   *  SignalConversion generated from: '<S3>/Out1'
   */
  if (rt_remd_snf(Odd_Even_U.In1, 2.0) == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&Odd_Even_Y.Out1[0], &Odd_Even_ConstB.StringConstant_g[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    Odd_Even_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&Odd_Even_Y.Out1[0], &Odd_Even_ConstB.StringConstant[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    Odd_Even_Y.Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void Odd_Even_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
}

/* Model terminate function */
void Odd_Even_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
