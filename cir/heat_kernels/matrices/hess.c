#include "math.h"

#include "WolframRTL.h"

static WolframCompileLibrary_Functions funStructCompile;

static mint I0_0;

static mint I0_1;

static mint I0_2;

static mint I0_3;

static mint I0_4;

static mint I0_5;

static mint I0_6;

static mint I0_7;

static mint I0_8;

static mint I0_9;

static mint I0_10;

static mint I0_11;

static mreal R0_17;

static mreal R0_27;

static mreal R0_28;

static mint I1_0;

static mint I1_1;

static mint I1_2;

static mint I1_3;

static mreal R1_9;

static mreal R1_12;

static mint I3_0;

static mint I3_1;

static mint I3_2;

static mint I3_3;

static mint I3_4;

static mint I3_5;

static mreal R3_11;

static mreal R3_14;

static mint I4_0;

static mint I4_1;

static mreal R4_11;

static mreal R4_12;

static mreal R4_16;

static mbool initialize = 1;

#include "hess.h"

DLLEXPORT int Initialize_hess1_1(WolframLibraryData libData) {
    if (initialize) {
        funStructCompile = libData->compileLibraryFunctions;
        I0_8 = (mint) -24;
        I0_1 = (mint) 4;
        R0_17 = (mreal) -0.25;
        I0_7 = (mint) -20;
        R0_28 = (mreal) 0.75;
        I0_4 = (mint) -4;
        I0_5 = (mint) 6;
        I0_9 = (mint) -12;
        I0_3 = (mint) -2;
        I0_11 = (mint) 24;
        I0_2 = (mint) 2;
        I0_6 = (mint) 12;
        I0_0 = (mint) 3;
        R0_27 = (mreal) 0.5;
        I0_10 = (mint) 20;
        I1_2 = (mint) 4;
        R1_12 = (mreal) -0.25;
        I1_1 = (mint) -4;
        I1_3 = (mint) 2;
        I1_0 = (mint) 3;
        R1_9 = (mreal) 0.5;
        I3_5 = (mint) -8;
        I3_2 = (mint) 4;
        I3_3 = (mint) 8;
        R3_14 = (mreal) -0.25;
        I3_1 = (mint) -4;
        I3_4 = (mint) 2;
        I3_0 = (mint) 3;
        R3_11 = (mreal) 0.5;
        R4_16 = (mreal) -0.25;
        R4_12 = (mreal) -0.5;
        I4_1 = (mint) -2;
        I4_0 = (mint) 2;
        R4_11 = (mreal) 0.5;
        initialize = 0;
    }
    return 0;
}

DLLEXPORT void Uninitialize_hess1_1(WolframLibraryData libData) {
    if (!initialize) {
        initialize = 1;
    }
}

DLLEXPORT int
hess1_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
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
    mreal R0_22;
    mreal R0_23;
    mreal R0_24;
    mreal R0_25;
    mreal R0_26;
    mreal R0_29;
    mreal R0_30;
    mreal R0_31;
    mreal R0_32;
    int err = 0;
    R0_0 = A1;
    R0_1 = A2;
    R0_2 = A3;
    R0_3 = A4;
    R0_4 = A5;
    R0_5 = A6;
    R0_6 = R0_2 * R0_2;
    R0_7 = 1 / R0_6;
    R0_6 = sqrt(R0_0);
    R0_8 = sqrt(R0_1);
    if (I0_0 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_9 = 1;
        }
    } else {
        mint S0 = I0_0;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_9 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_9 = S1 * R0_9;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_9 = 1 / R0_9;
        }
    }
    R0_10 = 1 / R0_9;
    R0_9 = 1 / R0_2;
    R0_11 = 1 / R0_5;
    R0_12 = 1 / R0_1;
    R0_13 = -R0_1;
    R0_14 = R0_13 + R0_3;
    R0_15 = R0_14 * R0_4;
    R0_16 = R0_2 * R0_2;
    R0_18 = R0_17 * R0_16;
    R0_19 = R0_15 + R0_18;
    if (I0_1 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_20 = 1;
        }
    } else {
        mint S0 = I0_1;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_20 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_20 = S1 * R0_20;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_20 = 1 / R0_20;
        }
    }
    R0_21 = 1 / R0_20;
    R0_20 = (mreal) I0_2;
    R0_20 = R0_20 * R0_6 * R0_9;
    R0_22 = -R0_7;
    R0_23 = (mreal) I0_3;
    R0_23 = R0_23 * R0_6 * R0_7;
    R0_24 = (mreal) I0_2;
    R0_24 = R0_24 * R0_8 * R0_7;
    R0_23 = R0_23 + R0_24;
    R0_24 = R0_23 * R0_23;
    R0_24 = R0_24 * R0_11;
    R0_23 = (mreal) I0_1;
    R0_23 = R0_23 * R0_6 * R0_10;
    R0_25 = (mreal) I0_4;
    R0_25 = R0_25 * R0_8 * R0_10;
    R0_23 = R0_23 + R0_25;
    R0_25 = (mreal) I0_3;
    R0_25 = R0_25 * R0_8 * R0_9;
    R0_26 = R0_20 + R0_25;
    R0_23 = R0_23 * R0_26 * R0_11;
    R0_26 = R0_28 * R0_12;
    R0_25 = (mreal) I0_0;
    R0_25 = R0_25 * R0_12 * R0_7 * R0_19;
    R0_29 = R0_19 * R0_19;
    R0_30 = (mreal) I0_5;
    R0_30 = R0_30 * R0_12 * R0_21 * R0_29;
    R0_26 = R0_26 + R0_25 + R0_30;
    R0_25 = R0_27 * R0_26 * R0_5;
    R0_26 = (mreal) I0_6;
    R0_26 = R0_26 * R0_0 * R0_4 * R0_21;
    R0_30 = (mreal) I0_7;
    R0_30 = R0_30 * R0_3 * R0_4 * R0_21;
    R0_29 = log(R0_20);
    R0_31 = (mreal) I0_8;
    R0_31 = R0_31 * R0_3 * R0_4 * R0_21 * R0_29;
    R0_26 = R0_26 + R0_30 + R0_7 + R0_31;
    R0_30 = R0_27 * R0_26;
    R0_26 = (mreal) I0_9;
    R0_26 = R0_26 * R0_1 * R0_4 * R0_21;
    R0_31 = (mreal) I0_10;
    R0_31 = R0_31 * R0_3 * R0_4 * R0_21;
    R0_29 = (mreal) I0_2;
    R0_29 = R0_29 * R0_8 * R0_9;
    R0_32 = log(R0_29);
    R0_29 = (mreal) I0_11;
    R0_29 = R0_29 * R0_3 * R0_4 * R0_21 * R0_32;
    R0_26 = R0_26 + R0_31 + R0_22 + R0_29;
    R0_31 = R0_27 * R0_26;
    R0_26 = R0_22 + R0_24 + R0_23 + R0_25 + R0_30 + R0_31;
    *Res = R0_26;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
hess2_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R1_0;
    mreal R1_1;
    mreal R1_2;
    mreal R1_3;
    mreal R1_4;
    mreal R1_5;
    mreal R1_6;
    mreal R1_7;
    mreal R1_8;
    mreal R1_10;
    mreal R1_11;
    mreal R1_13;
    mreal R1_14;
    int err = 0;
    R1_0 = A1;
    R1_1 = A2;
    R1_2 = A3;
    R1_3 = A4;
    R1_4 = A5;
    R1_5 = A6;
    R1_6 = 1 / R1_1;
    if (I1_0 == 0) {
        if (R1_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R1_7 = 1;
        }
    } else {
        mint S0 = I1_0;
        mreal S1 = R1_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R1_7 = 1;
        while (S0) {
            if (S0 & 1) {
                R1_7 = S1 * R1_7;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R1_7 = 1 / R1_7;
        }
    }
    R1_8 = 1 / R1_7;
    R1_7 = 1 / R1_2;
    R1_10 = R1_6 * R1_4 * R1_7;
    R1_11 = -R1_10;
    R1_10 = -R1_1;
    R1_10 = R1_10 + R1_3;
    R1_10 = R1_10 * R1_4;
    R1_13 = R1_2 * R1_2;
    R1_14 = R1_12 * R1_13;
    R1_10 = R1_10 + R1_14;
    R1_14 = (mreal) I1_1;
    R1_14 = R1_14 * R1_6 * R1_4 * R1_8 * R1_10;
    R1_11 = R1_11 + R1_14;
    R1_14 = R1_9 * R1_11 * R1_5;
    R1_11 = sqrt(R1_0);
    R1_10 = (mreal) I1_3;
    R1_10 = R1_10 * R1_11 * R1_7;
    R1_11 = log(R1_10);
    R1_10 = (mreal) I1_2;
    R1_10 = R1_10 * R1_4 * R1_8 * R1_11;
    R1_11 = sqrt(R1_1);
    R1_13 = (mreal) I1_3;
    R1_13 = R1_13 * R1_11 * R1_7;
    R1_11 = log(R1_13);
    R1_13 = (mreal) I1_1;
    R1_13 = R1_13 * R1_4 * R1_8 * R1_11;
    R1_14 = R1_14 + R1_10 + R1_13;
    *Res = R1_14;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
hess2_2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
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
    R2_0 = A1;
    R2_1 = A2;
    R2_2 = A3;
    R2_3 = A4;
    R2_4 = A5;
    R2_5 = A6;
    R2_6 = 1 / R2_1;
    R2_7 = R2_4 * R2_4;
    R2_8 = R2_2 * R2_2;
    R2_9 = 1 / R2_8;
    R2_6 = R2_6 * R2_7 * R2_9 * R2_5;
    *Res = R2_6;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
hess3_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R3_0;
    mreal R3_1;
    mreal R3_2;
    mreal R3_3;
    mreal R3_4;
    mreal R3_5;
    mreal R3_6;
    mreal R3_7;
    mreal R3_8;
    mreal R3_9;
    mreal R3_10;
    mreal R3_12;
    mreal R3_13;
    mreal R3_15;
    mreal R3_16;
    mreal R3_17;
    mreal R3_18;
    int err = 0;
    R3_0 = A1;
    R3_1 = A2;
    R3_2 = A3;
    R3_3 = A4;
    R3_4 = A5;
    R3_5 = A6;
    R3_6 = 1 / R3_1;
    R3_7 = -R3_1;
    R3_8 = R3_7 + R3_3;
    if (I3_0 == 0) {
        if (R3_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R3_9 = 1;
        }
    } else {
        mint S0 = I3_0;
        mreal S1 = R3_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R3_9 = 1;
        while (S0) {
            if (S0 & 1) {
                R3_9 = S1 * R3_9;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R3_9 = 1 / R3_9;
        }
    }
    R3_10 = 1 / R3_9;
    R3_9 = 1 / R3_2;
    R3_12 = R3_6 * R3_8 * R3_9;
    R3_13 = -R3_12;
    R3_12 = R3_8 * R3_4;
    R3_15 = R3_2 * R3_2;
    R3_16 = R3_14 * R3_15;
    R3_12 = R3_12 + R3_16;
    R3_16 = (mreal) I3_1;
    R3_16 = R3_16 * R3_6 * R3_8 * R3_10 * R3_12;
    R3_13 = R3_13 + R3_16;
    R3_16 = R3_11 * R3_13 * R3_5;
    R3_13 = (mreal) I3_1;
    R3_13 = R3_13 * R3_0 * R3_10;
    R3_12 = (mreal) I3_2;
    R3_12 = R3_12 * R3_3 * R3_10;
    R3_15 = sqrt(R3_0);
    R3_17 = (mreal) I3_4;
    R3_17 = R3_17 * R3_15 * R3_9;
    R3_15 = log(R3_17);
    R3_17 = (mreal) I3_3;
    R3_17 = R3_17 * R3_3 * R3_10 * R3_15;
    R3_13 = R3_13 + R3_12 + R3_17;
    R3_12 = R3_11 * R3_13;
    R3_13 = (mreal) I3_2;
    R3_13 = R3_13 * R3_1 * R3_10;
    R3_17 = (mreal) I3_1;
    R3_17 = R3_17 * R3_3 * R3_10;
    R3_15 = sqrt(R3_1);
    R3_18 = (mreal) I3_4;
    R3_18 = R3_18 * R3_15 * R3_9;
    R3_15 = log(R3_18);
    R3_18 = (mreal) I3_5;
    R3_18 = R3_18 * R3_3 * R3_10 * R3_15;
    R3_13 = R3_13 + R3_17 + R3_18;
    R3_17 = R3_11 * R3_13;
    R3_16 = R3_16 + R3_12 + R3_17;
    *Res = R3_16;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
hess3_2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R4_0;
    mreal R4_1;
    mreal R4_2;
    mreal R4_3;
    mreal R4_4;
    mreal R4_5;
    mreal R4_6;
    mreal R4_7;
    mreal R4_8;
    mreal R4_9;
    mreal R4_10;
    mreal R4_13;
    mreal R4_14;
    mreal R4_15;
    mreal R4_17;
    mreal R4_18;
    R4_0 = A1;
    R4_1 = A2;
    R4_2 = A3;
    R4_3 = A4;
    R4_4 = A5;
    R4_5 = A6;
    R4_6 = 1 / R4_1;
    R4_7 = R4_2 * R4_2;
    R4_8 = 1 / R4_7;
    R4_7 = -R4_1;
    R4_9 = R4_7 + R4_3;
    R4_10 = 1 / R4_2;
    R4_13 = R4_12 * R4_6;
    R4_14 = (mreal) I4_0;
    R4_14 = R4_14 * R4_6 * R4_9 * R4_4 * R4_8;
    R4_15 = R4_9 * R4_4;
    R4_17 = R4_2 * R4_2;
    R4_18 = R4_16 * R4_17;
    R4_15 = R4_15 + R4_18;
    R4_18 = (mreal) I4_0;
    R4_18 = R4_18 * R4_6 * R4_8 * R4_15;
    R4_13 = R4_13 + R4_14 + R4_18;
    R4_14 = R4_11 * R4_13 * R4_5;
    R4_13 = sqrt(R4_0);
    R4_18 = (mreal) I4_0;
    R4_18 = R4_18 * R4_13 * R4_10;
    R4_13 = log(R4_18);
    R4_18 = (mreal) I4_1;
    R4_18 = R4_18 * R4_8 * R4_13;
    R4_13 = sqrt(R4_1);
    R4_15 = (mreal) I4_0;
    R4_15 = R4_15 * R4_13 * R4_10;
    R4_13 = log(R4_15);
    R4_15 = (mreal) I4_0;
    R4_15 = R4_15 * R4_8 * R4_13;
    R4_14 = R4_14 + R4_18 + R4_15;
    *Res = R4_14;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
hess3_3(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R5_0;
    mreal R5_1;
    mreal R5_2;
    mreal R5_3;
    mreal R5_4;
    mreal R5_5;
    mreal R5_6;
    mreal R5_7;
    mreal R5_8;
    mreal R5_9;
    R5_0 = A1;
    R5_1 = A2;
    R5_2 = A3;
    R5_3 = A4;
    R5_4 = A5;
    R5_5 = A6;
    R5_6 = 1 / R5_1;
    R5_7 = -R5_1;
    R5_7 = R5_7 + R5_3;
    R5_8 = R5_7 * R5_7;
    R5_7 = R5_2 * R5_2;
    R5_9 = 1 / R5_7;
    R5_6 = R5_6 * R5_8 * R5_9 * R5_5;
    *Res = R5_6;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

