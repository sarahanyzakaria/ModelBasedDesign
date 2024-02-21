/*
 * File: factorial_whileLoop.h
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

#ifndef RTW_HEADER_factorial_whileLoop_h_
#define RTW_HEADER_factorial_whileLoop_h_
#ifndef factorial_whileLoop_COMMON_INCLUDES_
#define factorial_whileLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                /* factorial_whileLoop_COMMON_INCLUDES_ */

#include "factorial_whileLoop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T Delay_DSTATE;                /* '<S1>/Delay' */
} DW_factorial_whileLoop_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T In1;                         /* '<Root>/In1' */
  boolean_T IC;                        /* '<Root>/IC' */
} ExtU_factorial_whileLoop_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T Out1;                        /* '<Root>/Out1' */
} ExtY_factorial_whileLoop_T;

/* Real-time Model Data Structure */
struct tag_RTM_factorial_whileLoop_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_factorial_whileLoop_T factorial_whileLoop_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_factorial_whileLoop_T factorial_whileLoop_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_factorial_whileLoop_T factorial_whileLoop_Y;

/* Model entry point functions */
extern void factorial_whileLoop_initialize(void);
extern void factorial_whileLoop_step(void);
extern void factorial_whileLoop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_factorial_whileLoop_T *const factorial_whileLoop_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Delay1' : Eliminated Zero Delay block after compile
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
 * '<Root>' : 'factorial_whileLoop'
 * '<S1>'   : 'factorial_whileLoop/While Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_factorial_whileLoop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
