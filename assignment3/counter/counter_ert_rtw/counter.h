/*
 * File: counter.h
 *
 * Code generated for Simulink model 'counter'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb 13 14:28:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_counter_h_
#define RTW_HEADER_counter_h_
#ifndef counter_COMMON_INCLUDES_
#define counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* counter_COMMON_INCLUDES_ */

#include "counter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_counter_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void counter_initialize(void);
extern void counter_step(void);
extern void counter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_counter_T *const counter_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<S1>/Subtract' : Unused code path elimination
 * Block '<S1>/Switch' : Unused code path elimination
 * Block '<S1>/Unit Delay' : Unused code path elimination
 * Block '<S2>/Add1' : Unused code path elimination
 * Block '<S2>/Constant2' : Unused code path elimination
 * Block '<S2>/GreaterThanOrEqual' : Unused code path elimination
 * Block '<S2>/Switch1' : Unused code path elimination
 * Block '<S2>/Unit Delay1' : Unused code path elimination
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
 * '<Root>' : 'counter'
 * '<S1>'   : 'counter/down counter'
 * '<S2>'   : 'counter/up counter'
 */
#endif                                 /* RTW_HEADER_counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
