/*
 * File: Odd_Even.h
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

#ifndef RTW_HEADER_Odd_Even_h_
#define RTW_HEADER_Odd_Even_h_
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef Odd_Even_COMMON_INCLUDES_
#define Odd_Even_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Odd_Even_COMMON_INCLUDES_ */

#include "Odd_Even_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S3>/String Constant' */
  const char_T StringConstant_g[256];  /* '<S2>/String Constant' */
} ConstB_Odd_Even_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Odd_Even_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_Odd_Even_T;

/* Real-time Model Data Structure */
struct tag_RTM_Odd_Even_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Odd_Even_T Odd_Even_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Odd_Even_T Odd_Even_Y;
extern const ConstB_Odd_Even_T Odd_Even_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Odd_Even_initialize(void);
extern void Odd_Even_step(void);
extern void Odd_Even_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Odd_Even_T *const Odd_Even_M;

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
 * '<Root>' : 'Odd_Even'
 * '<S1>'   : 'Odd_Even/Subsystem'
 * '<S2>'   : 'Odd_Even/Subsystem/If Action Subsystem'
 * '<S3>'   : 'Odd_Even/Subsystem/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Odd_Even_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
