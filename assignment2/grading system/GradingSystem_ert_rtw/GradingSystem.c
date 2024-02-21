/*
 * File: GradingSystem.c
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 12:44:10 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "GradingSystem.h"
#include "GradingSystem_private.h"

/* Block signals (default storage) */
B_GradingSystem_T GradingSystem_B;

/* External inputs (root inport signals with default storage) */
ExtU_GradingSystem_T GradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_GradingSystem_T GradingSystem_Y;

/* Real-time model */
static RT_MODEL_GradingSystem_T GradingSystem_M_;
RT_MODEL_GradingSystem_T *const GradingSystem_M = &GradingSystem_M_;

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem'
 *    '<S2>/If Action Subsystem'
 */
void GradingSystem_IfActionSubsystem(char_T rty_Out1[256], const
  ConstB_IfActionSubsystem_Grad_T *localC)
{
  /* SignalConversion generated from: '<S3>/Out1' */
  strncpy(&rty_Out1[0], &localC->StringConstant[0], 255U);
  rty_Out1[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem1'
 *    '<S2>/If Action Subsystem1'
 */
void GradingSyste_IfActionSubsystem1(char_T rty_Out1[256], const
  ConstB_IfActionSubsystem1_Gra_T *localC)
{
  /* SignalConversion generated from: '<S4>/Out1' */
  strncpy(&rty_Out1[0], &localC->StringConstant[0], 255U);
  rty_Out1[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem2'
 *    '<S2>/If Action Subsystem2'
 */
void GradingSyste_IfActionSubsystem2(char_T rty_Out1[256], const
  ConstB_IfActionSubsystem2_Gra_T *localC)
{
  /* SignalConversion generated from: '<S5>/Out1' */
  strncpy(&rty_Out1[0], &localC->StringConstant[0], 255U);
  rty_Out1[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem3'
 *    '<S2>/If Action Subsystem3'
 */
void GradingSyste_IfActionSubsystem3(char_T rty_Out1[256], const
  ConstB_IfActionSubsystem3_Gra_T *localC)
{
  /* SignalConversion generated from: '<S6>/Out1' */
  strncpy(&rty_Out1[0], &localC->StringConstant[0], 255U);
  rty_Out1[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem4'
 *    '<S2>/If Action Subsystem4'
 */
void GradingSyste_IfActionSubsystem4(char_T rty_Out1[256], const
  ConstB_IfActionSubsystem4_Gra_T *localC)
{
  /* SignalConversion generated from: '<S7>/Out1' */
  strncpy(&rty_Out1[0], &localC->StringConstant[0], 255U);
  rty_Out1[255] = '\x00';
}

/* Model step function */
void GradingSystem_step(void)
{
  char_T Merge_o[256];

  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In1'
   */
  if (GradingSystem_U.In1 < 50.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    GradingSystem_IfActionSubsystem(&GradingSystem_B.Merge[0],
      &GradingSystem_ConstB.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else if ((GradingSystem_U.In1 >= 50.0) && (GradingSystem_U.In1 < 65.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    GradingSyste_IfActionSubsystem1(&GradingSystem_B.Merge[0],
      &GradingSystem_ConstB.IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  } else if ((GradingSystem_U.In1 >= 65.0) && (GradingSystem_U.In1 < 75.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    GradingSyste_IfActionSubsystem2(&GradingSystem_B.Merge[0],
      &GradingSystem_ConstB.IfActionSubsystem2);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
  } else if ((GradingSystem_U.In1 >= 75.0) && (GradingSystem_U.In1 < 85.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    GradingSyste_IfActionSubsystem3(&GradingSystem_B.Merge[0],
      &GradingSystem_ConstB.IfActionSubsystem3);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
  } else if ((GradingSystem_U.In1 >= 85.0) && (GradingSystem_U.In1 <= 100.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    GradingSyste_IfActionSubsystem4(&GradingSystem_B.Merge[0],
      &GradingSystem_ConstB.IfActionSubsystem4);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
  }

  /* End of If: '<S1>/If' */

  /* Outport: '<Root>/Out1' */
  strncpy(&GradingSystem_Y.Out1[0], &GradingSystem_B.Merge[0], 255U);
  GradingSystem_Y.Out1[255] = '\x00';

  /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
   *  ActionPort: '<S11>/Action Port'
   */
  /* If: '<S2>/If' */
  GradingSyste_IfActionSubsystem3(&Merge_o[0],
    &GradingSystem_ConstB.IfActionSubsystem3_k);

  /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */
}

/* Model initialize function */
void GradingSystem_initialize(void)
{
  /* SystemInitialize for Merge: '<S1>/Merge' */
  strncpy(&GradingSystem_B.Merge[0], &GradingSystem_ConstP.pooled6[0], 255U);
  GradingSystem_B.Merge[255] = '\x00';
}

/* Model terminate function */
void GradingSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
