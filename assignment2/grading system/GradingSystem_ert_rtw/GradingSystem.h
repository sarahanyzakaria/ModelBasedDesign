/*
 * File: GradingSystem.h
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

#ifndef RTW_HEADER_GradingSystem_h_
#define RTW_HEADER_GradingSystem_h_
#include <string.h>
#ifndef GradingSystem_COMMON_INCLUDES_
#define GradingSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* GradingSystem_COMMON_INCLUDES_ */

#include "GradingSystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  char_T Merge[256];                   /* '<S1>/Merge' */
} B_GradingSystem_T;

/* Invariant block signals for system '<S1>/If Action Subsystem' */
typedef struct {
  const char_T StringConstant[256];    /* '<S3>/String Constant' */
} ConstB_IfActionSubsystem_Grad_T;

/* Invariant block signals for system '<S1>/If Action Subsystem1' */
typedef struct {
  const char_T StringConstant[256];    /* '<S4>/String Constant' */
} ConstB_IfActionSubsystem1_Gra_T;

/* Invariant block signals for system '<S1>/If Action Subsystem2' */
typedef struct {
  const char_T StringConstant[256];    /* '<S5>/String Constant' */
} ConstB_IfActionSubsystem2_Gra_T;

/* Invariant block signals for system '<S1>/If Action Subsystem3' */
typedef struct {
  const char_T StringConstant[256];    /* '<S6>/String Constant' */
} ConstB_IfActionSubsystem3_Gra_T;

/* Invariant block signals for system '<S1>/If Action Subsystem4' */
typedef struct {
  const char_T StringConstant[256];    /* '<S7>/String Constant' */
} ConstB_IfActionSubsystem4_Gra_T;

/* Invariant block signals (default storage) */
typedef struct {
  ConstB_IfActionSubsystem4_Gra_T IfActionSubsystem4_p;/* '<S2>/If Action Subsystem4' */
  ConstB_IfActionSubsystem3_Gra_T IfActionSubsystem3_k;/* '<S2>/If Action Subsystem3' */
  ConstB_IfActionSubsystem2_Gra_T IfActionSubsystem2_e;/* '<S2>/If Action Subsystem2' */
  ConstB_IfActionSubsystem1_Gra_T IfActionSubsystem1_h;/* '<S2>/If Action Subsystem1' */
  ConstB_IfActionSubsystem_Grad_T IfActionSubsystem_g;/* '<S2>/If Action Subsystem' */
  ConstB_IfActionSubsystem4_Gra_T IfActionSubsystem4;/* '<S1>/If Action Subsystem4' */
  ConstB_IfActionSubsystem3_Gra_T IfActionSubsystem3;/* '<S1>/If Action Subsystem3' */
  ConstB_IfActionSubsystem2_Gra_T IfActionSubsystem2;/* '<S1>/If Action Subsystem2' */
  ConstB_IfActionSubsystem1_Gra_T IfActionSubsystem1;/* '<S1>/If Action Subsystem1' */
  ConstB_IfActionSubsystem_Grad_T IfActionSubsystem;/* '<S1>/If Action Subsystem' */
} ConstB_GradingSystem_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/Merge'
   *   '<S2>/Merge'
   */
  char_T pooled6[256];
} ConstP_GradingSystem_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_GradingSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_GradingSystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_GradingSystem_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_GradingSystem_T GradingSystem_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_GradingSystem_T GradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_GradingSystem_T GradingSystem_Y;
extern const ConstB_GradingSystem_T GradingSystem_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_GradingSystem_T GradingSystem_ConstP;

/* Model entry point functions */
extern void GradingSystem_initialize(void);
extern void GradingSystem_step(void);
extern void GradingSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_GradingSystem_T *const GradingSystem_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'GradingSystem'
 * '<S1>'   : 'GradingSystem/Grading System'
 * '<S2>'   : 'GradingSystem/Grading System1'
 * '<S3>'   : 'GradingSystem/Grading System/If Action Subsystem'
 * '<S4>'   : 'GradingSystem/Grading System/If Action Subsystem1'
 * '<S5>'   : 'GradingSystem/Grading System/If Action Subsystem2'
 * '<S6>'   : 'GradingSystem/Grading System/If Action Subsystem3'
 * '<S7>'   : 'GradingSystem/Grading System/If Action Subsystem4'
 * '<S8>'   : 'GradingSystem/Grading System1/If Action Subsystem'
 * '<S9>'   : 'GradingSystem/Grading System1/If Action Subsystem1'
 * '<S10>'  : 'GradingSystem/Grading System1/If Action Subsystem2'
 * '<S11>'  : 'GradingSystem/Grading System1/If Action Subsystem3'
 * '<S12>'  : 'GradingSystem/Grading System1/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_GradingSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
