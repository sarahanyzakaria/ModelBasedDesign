/*
 * File: Factorial_ForLoop.h
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

#ifndef RTW_HEADER_Factorial_ForLoop_h_
#define RTW_HEADER_Factorial_ForLoop_h_
#ifndef Factorial_ForLoop_COMMON_INCLUDES_
#define Factorial_ForLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_ForLoop_COMMON_INCLUDES_ */

#include "Factorial_ForLoop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S1>/Unit Delay' */
} DW_Factorial_ForLoop_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T In1;                        /* '<Root>/In1' */
} ExtU_Factorial_ForLoop_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T Out1;                       /* '<Root>/Out1' */
} ExtY_Factorial_ForLoop_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_ForLoop_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Factorial_ForLoop_T Factorial_ForLoop_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Factorial_ForLoop_T Factorial_ForLoop_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Factorial_ForLoop_T Factorial_ForLoop_Y;

/* Model entry point functions */
extern void Factorial_ForLoop_initialize(void);
extern void Factorial_ForLoop_step(void);
extern void Factorial_ForLoop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_ForLoop_T *const Factorial_ForLoop_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<S2>/Product' : Unused code path elimination
 * Block '<S2>/Unit Delay' : Unused code path elimination
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
 * '<Root>' : 'Factorial_ForLoop'
 * '<S1>'   : 'Factorial_ForLoop/For Iterator Subsystem'
 * '<S2>'   : 'Factorial_ForLoop/For Iterator Subsystem1'
 */
#endif                                 /* RTW_HEADER_Factorial_ForLoop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
