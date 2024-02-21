/*
 * File: CalculatAverage.h
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

#ifndef RTW_HEADER_CalculatAverage_h_
#define RTW_HEADER_CalculatAverage_h_
#ifndef CalculatAverage_COMMON_INCLUDES_
#define CalculatAverage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CalculatAverage_COMMON_INCLUDES_ */

#include "CalculatAverage_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Probe1;                       /* '<S1>/Probe1' */
} B_CalculatAverage_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_CalculatAverage_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
} ExtY_CalculatAverage_T;

/* Real-time Model Data Structure */
struct tag_RTM_CalculatAverage_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_CalculatAverage_T CalculatAverage_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_CalculatAverage_T CalculatAverage_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_CalculatAverage_T CalculatAverage_Y;

/* Model entry point functions */
extern void CalculatAverage_initialize(void);
extern void CalculatAverage_step(void);
extern void CalculatAverage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CalculatAverage_T *const CalculatAverage_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Divide' : Unused code path elimination
 * Block '<Root>/Max' : Unused code path elimination
 * Block '<Root>/Min' : Unused code path elimination
 * Block '<Root>/Probe' : Unused code path elimination
 * Block '<Root>/Sum of Elements' : Unused code path elimination
 * Block '<S1>/Max1' : Eliminated since input is scalar
 * Block '<S1>/Min1' : Eliminated since input is scalar
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
 * '<Root>' : 'CalculatAverage'
 * '<S1>'   : 'CalculatAverage/Subsystem'
 */
#endif                                 /* RTW_HEADER_CalculatAverage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
