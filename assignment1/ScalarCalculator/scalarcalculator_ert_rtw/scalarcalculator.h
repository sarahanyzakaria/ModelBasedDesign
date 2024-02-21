/*
 * File: scalarcalculator.h
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

#ifndef RTW_HEADER_scalarcalculator_h_
#define RTW_HEADER_scalarcalculator_h_
#ifndef scalarcalculator_COMMON_INCLUDES_
#define scalarcalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* scalarcalculator_COMMON_INCLUDES_ */

#include "scalarcalculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
} ExtU_scalarcalculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T Out5;                         /* '<Root>/Out5' */
  real_T Out6;                         /* '<Root>/Out6' */
  real_T Out7;                         /* '<Root>/Out7' */
} ExtY_scalarcalculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_scalarcalculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_scalarcalculator_T scalarcalculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_scalarcalculator_T scalarcalculator_Y;

/* Model entry point functions */
extern void scalarcalculator_initialize(void);
extern void scalarcalculator_step(void);
extern void scalarcalculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_scalarcalculator_T *const scalarcalculator_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
 * Block '<S1>/Add1' : Unused code path elimination
 * Block '<S3>/FixPt Constant' : Unused code path elimination
 * Block '<S3>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S3>/FixPt Sum1' : Unused code path elimination
 * Block '<S1>/Divide' : Unused code path elimination
 * Block '<S4>/FixPt Constant' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/FixPt Sum1' : Unused code path elimination
 * Block '<S1>/Product' : Unused code path elimination
 * Block '<S1>/Subtract1' : Unused code path elimination
 * Block '<S1>/Unary Minus' : Unused code path elimination
 * Block '<S5>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S6>/FixPt Data Type Duplicate' : Unused code path elimination
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
 * '<Root>' : 'scalarcalculator'
 * '<S1>'   : 'scalarcalculator/Subsystem'
 * '<S2>'   : 'scalarcalculator/Subsystem1'
 * '<S3>'   : 'scalarcalculator/Subsystem/Decrement Real World'
 * '<S4>'   : 'scalarcalculator/Subsystem/Increment Real World'
 * '<S5>'   : 'scalarcalculator/Subsystem1/Decrement Real World'
 * '<S6>'   : 'scalarcalculator/Subsystem1/Increment Real World'
 */
#endif                                 /* RTW_HEADER_scalarcalculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
