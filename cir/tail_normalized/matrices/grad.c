#include "math.h"

#include "WolframRTL.h"

static WolframCompileLibrary_Functions funStructCompile;

static const mint UnitIncrements[3] = {1, 1, 1};

static UnaryMathFunctionPointer FP0;


static mint I0_0;

static mint I0_1;

static mreal R0_17;

static mreal R0_22;

static mint I1_0;

static mreal R1_11;

static mint I2_0;

static mreal R2_13;

static mbool initialize = 1;

#include "grad.h"

DLLEXPORT int Initialize_grad1(WolframLibraryData libData) {
    if (initialize) {
        funStructCompile = libData->compileLibraryFunctions;
        R0_17 = (mreal) -0.25;
        I0_0 = (mint) 2;
        I0_1 = (mint) 3;
        R0_22 = (mreal) 0.5;
        R1_11 = (mreal) -0.25;
        I1_0 = (mint) 2;
        R2_13 = (mreal) -0.25;
        I2_0 = (mint) 2;
        FP0 = funStructCompile->getUnaryMathFunction(59, 3);/*  Internal`ReciprocalSqrt  */
        if (FP0 == 0) {
            return LIBRARY_FUNCTION_ERROR;
        }
        initialize = 0;
    }
    return 0;
}

DLLEXPORT void Uninitialize_grad1(WolframLibraryData libData) {
    if (!initialize) {
        initialize = 1;
    }
}

DLLEXPORT int
grad1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R0_0;
    mreal R0_1;
    mreal R0_2;
    mreal R0_3;
    mreal R0_4;
    mreal R0_5;
    mreal R0_6;
    mreal R0_7;
    mreal R0_8;
    mreal R0_9;
    mreal R0_10;
    mreal R0_11;
    mreal R0_12;
    mreal R0_13;
    mreal R0_14;
    mreal R0_15;
    mreal R0_16;
    mreal R0_18;
    mreal R0_19;
    mreal R0_20;
    mreal R0_21;
    mreal R0_23;
    mreal R0_24;
    mreal R0_25;
    mreal R0_26;
    int err = 0;
    R0_0 = A1;
    R0_1 = A2;
    R0_2 = A3;
    R0_3 = A4;
    R0_4 = A5;
    R0_5 = A6;
    R0_6 = 1 / R0_2;
    {
        mint S0 = FP0((void *) (&R0_7), (void *) (&R0_1), 1, UnitIncrements, 4);/*  Internal`ReciprocalSqrt  */
        err = S0 == 0 ? 0 : LIBRARY_NUMERICAL_ERROR;
        if (err) {
            goto error_label;
        }
    }
    R0_8 = sqrt(R0_0);
    R0_9 = sqrt(R0_1);
    R0_10 = -R0_9;
    R0_11 = R0_8 + R0_10;
    R0_12 = (mreal) I0_0;
    R0_12 = R0_12 * R0_11;
    R0_13 = -R0_1;
    R0_14 = R0_13 + R0_3;
    R0_15 = R0_14 * R0_4;
    R0_16 = R0_2 * R0_2;
    R0_18 = R0_17 * R0_16;
    R0_19 = R0_15 + R0_18;
    R0_20 = R0_7 * R0_19 * R0_5;
    R0_21 = -R0_20;
    R0_20 = R0_12 + R0_21;
    R0_23 = R0_22 * R0_7 * R0_6 * R0_20;
    if (I0_1 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_24 = 1;
        }
    } else {
        mint S0 = I0_1;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_24 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_24 = S1 * R0_24;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_24 = 1 / R0_24;
        }
    }
    R0_25 = 1 / R0_24;
    R0_24 = 1 / R0_5;
    R0_26 = R0_20 * R0_20;
    R0_25 = R0_25 * R0_24 * R0_26;
    R0_24 = -R0_25;
    R0_25 = R0_6 + R0_23 + R0_24;
    *Res = R0_25;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
grad2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R1_0;
    mreal R1_1;
    mreal R1_2;
    mreal R1_3;
    mreal R1_4;
    mreal R1_5;
    mreal R1_6;
    mreal R1_7;
    mreal R1_8;
    mreal R1_9;
    mreal R1_10;
    mreal R1_12;
    int err = 0;
    R1_0 = A1;
    R1_1 = A2;
    R1_2 = A3;
    R1_3 = A4;
    R1_4 = A5;
    R1_5 = A6;
    {
        mint S0 = FP0((void *) (&R1_6), (void *) (&R1_1), 1, UnitIncrements, 4);/*  Internal`ReciprocalSqrt  */
        err = S0 == 0 ? 0 : LIBRARY_NUMERICAL_ERROR;
        if (err) {
            goto error_label;
        }
    }
    R1_7 = R1_2 * R1_2;
    R1_8 = 1 / R1_7;
    R1_7 = sqrt(R1_0);
    R1_9 = sqrt(R1_1);
    R1_10 = -R1_9;
    R1_7 = R1_7 + R1_10;
    R1_10 = (mreal) I1_0;
    R1_10 = R1_10 * R1_7;
    R1_7 = -R1_1;
    R1_7 = R1_7 + R1_3;
    R1_7 = R1_7 * R1_4;
    R1_9 = R1_2 * R1_2;
    R1_12 = R1_11 * R1_9;
    R1_7 = R1_7 + R1_12;
    R1_12 = R1_6 * R1_7 * R1_5;
    R1_7 = -R1_12;
    R1_10 = R1_10 + R1_7;
    R1_7 = R1_6 * R1_4 * R1_8 * R1_10;
    R1_8 = -R1_7;
    *Res = R1_8;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
grad3(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R2_0;
    mreal R2_1;
    mreal R2_2;
    mreal R2_3;
    mreal R2_4;
    mreal R2_5;
    mreal R2_6;
    mreal R2_7;
    mreal R2_8;
    mreal R2_9;
    mreal R2_10;
    mreal R2_11;
    mreal R2_12;
    mreal R2_14;
    int err = 0;
    R2_0 = A1;
    R2_1 = A2;
    R2_2 = A3;
    R2_3 = A4;
    R2_4 = A5;
    R2_5 = A6;
    {
        mint S0 = FP0((void *) (&R2_6), (void *) (&R2_1), 1, UnitIncrements, 4);/*  Internal`ReciprocalSqrt  */
        err = S0 == 0 ? 0 : LIBRARY_NUMERICAL_ERROR;
        if (err) {
            goto error_label;
        }
    }
    R2_7 = -R2_1;
    R2_8 = R2_7 + R2_3;
    R2_9 = R2_2 * R2_2;
    R2_10 = 1 / R2_9;
    R2_9 = sqrt(R2_0);
    R2_11 = sqrt(R2_1);
    R2_12 = -R2_11;
    R2_9 = R2_9 + R2_12;
    R2_12 = (mreal) I2_0;
    R2_12 = R2_12 * R2_9;
    R2_9 = R2_8 * R2_4;
    R2_11 = R2_2 * R2_2;
    R2_14 = R2_13 * R2_11;
    R2_9 = R2_9 + R2_14;
    R2_14 = R2_6 * R2_9 * R2_5;
    R2_9 = -R2_14;
    R2_12 = R2_12 + R2_9;
    R2_9 = R2_6 * R2_8 * R2_10 * R2_12;
    R2_10 = -R2_9;
    *Res = R2_10;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

