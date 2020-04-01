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

static mreal R0_31;

static mreal R0_40;

static mreal R0_43;

static mint I1_0;

static mint I1_1;

static mint I1_2;

static mint I1_3;

static mint I1_4;

static mint I1_5;

static mint I1_6;

static mint I1_7;

static mint I1_8;

static mreal R1_12;

static mreal R1_18;

static mint I2_0;

static mint I3_0;

static mint I3_1;

static mint I3_2;

static mint I3_3;

static mint I3_4;

static mint I3_5;

static mint I3_6;

static mint I3_7;

static mint I3_8;

static mint I3_9;

static mreal R3_18;

static mreal R3_25;

static mreal R3_26;

static mint I4_0;

static mint I4_1;

static mint I4_2;

static mint I4_3;

static mint I4_4;

static mint I4_5;

static mint I4_6;

static mreal R4_11;

static mreal R4_16;

static mint I5_0;

static mint I5_1;

static mint I5_2;

static mreal R5_7;

static mint I6_0;

static mint I6_1;

static mint I6_2;

static mint I6_3;

static mint I6_4;

static mint I6_5;

static mint I6_6;

static mint I6_7;

static mint I6_8;

static mint I6_9;

static mint I6_10;

static mreal R6_49;

static mreal R6_56;

static mreal R6_66;

static mint I7_0;

static mint I7_1;

static mint I7_2;

static mint I7_3;

static mint I7_4;

static mint I7_5;

static mint I7_6;

static mreal R7_25;

static mreal R7_29;

static mreal R7_33;

static mint I8_0;

static mint I8_1;

static mint I8_2;

static mint I8_3;

static mint I8_4;

static mint I8_5;

static mint I8_6;

static mint I8_7;

static mint I8_8;

static mreal R8_28;

static mreal R8_32;

static mreal R8_38;

static mint I9_0;

static mint I9_1;

static mint I9_2;

static mint I9_3;

static mint I9_4;

static mint I9_5;

static mint I9_6;

static mint I9_7;

static mint I9_8;

static mint I9_9;

static mint I9_10;

static mreal R9_53;

static mreal R9_75;

static mbool initialize = 1;

#include "hess.h"

DLLEXPORT int Initialize_hess1_1(WolframLibraryData libData) {
    if (initialize) {
        funStructCompile = libData->compileLibraryFunctions;
        R0_43 = (mreal) 1.5;
        I0_8 = (mint) -8;
        I0_6 = (mint) -6;
        I0_3 = (mint) 4;
        I0_7 = (mint) 8;
        I0_11 = (mint) -4;
        I0_5 = (mint) 6;
        R0_40 = (mreal) 0.25;
        I0_0 = (mint) -2;
        I0_1 = (mint) 2;
        I0_4 = (mint) -1;
        I0_9 = (mint) 12;
        I0_2 = (mint) 1;
        I0_10 = (mint) 3;
        R0_31 = (mreal) 0.5;
        I1_4 = (mint) -8;
        I1_2 = (mint) 4;
        I1_5 = (mint) 8;
        I1_6 = (mint) -4;
        R1_18 = (mreal) -0.5;
        I1_3 = (mint) -2;
        I1_8 = (mint) 2;
        I1_7 = (mint) -1;
        I1_0 = (mint) 1;
        I1_1 = (mint) 3;
        R1_12 = (mreal) 0.5;
        I2_0 = (mint) -2;
        I3_6 = (mint) -8;
        I3_8 = (mint) 4;
        I3_5 = (mint) 8;
        I3_9 = (mint) -4;
        I3_7 = (mint) -16;
        R3_25 = (mreal) 0.25;
        R3_26 = (mreal) -0.5;
        I3_2 = (mint) -2;
        I3_1 = (mint) 2;
        I3_4 = (mint) -1;
        I3_0 = (mint) 1;
        I3_3 = (mint) 3;
        R3_18 = (mreal) 0.5;
        I4_4 = (mint) -4;
        I4_2 = (mint) -16;
        R4_16 = (mreal) 0.25;
        I4_1 = (mint) -2;
        I4_3 = (mint) 16;
        I4_6 = (mint) 2;
        I4_5 = (mint) -1;
        I4_0 = (mint) 1;
        R4_11 = (mreal) 0.5;
        I5_1 = (mint) 8;
        I5_2 = (mint) -16;
        I5_0 = (mint) -2;
        R5_7 = (mreal) 0.125;
        I6_7 = (mint) -8;
        I6_5 = (mint) 4;
        I6_6 = (mint) 8;
        I6_8 = (mint) -4;
        I6_10 = (mint) -16;
        R6_56 = (mreal) -0.5;
        R6_66 = (mreal) 0.25;
        I6_0 = (mint) -2;
        I6_9 = (mint) 16;
        I6_1 = (mint) 2;
        I6_4 = (mint) -1;
        I6_2 = (mint) 1;
        I6_3 = (mint) 3;
        R6_49 = (mreal) 0.5;
        I7_4 = (mint) -8;
        I7_5 = (mint) 8;
        I7_6 = (mint) -4;
        R7_29 = (mreal) -0.5;
        R7_33 = (mreal) 0.25;
        I7_1 = (mint) -2;
        I7_2 = (mint) 2;
        I7_3 = (mint) -1;
        I7_0 = (mint) 1;
        R7_25 = (mreal) 0.5;
        I8_8 = (mint) -8;
        I8_6 = (mint) 4;
        I8_4 = (mint) 8;
        I8_7 = (mint) -4;
        I8_5 = (mint) -16;
        R8_32 = (mreal) -0.5;
        R8_38 = (mreal) 0.25;
        I8_1 = (mint) -2;
        I8_2 = (mint) 2;
        I8_3 = (mint) -1;
        I8_0 = (mint) 1;
        R8_28 = (mreal) 0.5;
        I9_6 = (mint) -8;
        I9_4 = (mint) 4;
        I9_8 = (mint) 8;
        I9_7 = (mint) -4;
        I9_10 = (mint) -16;
        R9_75 = (mreal) 0.25;
        I9_0 = (mint) -2;
        I9_9 = (mint) 16;
        I9_1 = (mint) 2;
        I9_3 = (mint) -1;
        I9_2 = (mint) 1;
        I9_5 = (mint) 3;
        R9_53 = (mreal) 0.5;
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
hess1_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
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
    mreal R0_17;
    mreal R0_18;
    mreal R0_19;
    mreal R0_20;
    mreal R0_21;
    mreal R0_22;
    mreal R0_23;
    mreal R0_24;
    mreal R0_25;
    mreal R0_26;
    mreal R0_27;
    mreal R0_28;
    mreal R0_29;
    mreal R0_30;
    mreal R0_32;
    mreal R0_33;
    mreal R0_34;
    mreal R0_35;
    mreal R0_36;
    mreal R0_37;
    mreal R0_38;
    mreal R0_39;
    mreal R0_41;
    mreal R0_42;
    mreal R0_44;
    mreal R0_45;
    mreal R0_46;
    int err = 0;
    R0_0 = A1;
    R0_1 = A2;
    R0_2 = A3;
    R0_3 = A4;
    R0_4 = A5;
    R0_5 = A6;
    R0_6 = A7;
    R0_7 = (mreal) I0_0;
    R0_7 = R0_7 * R0_5;
    R0_8 = (mreal) I0_1;
    R0_8 = R0_8 + R0_7;
    R0_9 = -R0_5;
    R0_10 = (mreal) I0_2;
    R0_10 = R0_10 + R0_9;
    R0_11 = pow(R0_0, R0_10);
    R0_12 = pow(R0_1, R0_10);
    R0_13 = R0_2 * R0_2;
    R0_14 = 1 / R0_13;
    R0_13 = -R0_12;
    R0_15 = R0_11 + R0_13;
    R0_16 = 1 / R0_10;
    if (I0_3 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_17 = 1;
        }
    } else {
        mint S0 = I0_3;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_17 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_17 = S1 * R0_17;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_17 = 1 / R0_17;
        }
    }
    R0_18 = 1 / R0_17;
    R0_17 = (mreal) I0_1;
    R0_17 = R0_17 * R0_5;
    R0_19 = (mreal) I0_4;
    R0_19 = R0_19 + R0_17;
    R0_20 = pow(R0_1, R0_19);
    R0_21 = R0_5 * R0_5;
    R0_22 = R0_2 * R0_2;
    R0_23 = pow(R0_1, R0_7);
    R0_24 = pow(R0_1, R0_17);
    R0_25 = (mreal) I0_3;
    R0_25 = R0_25 * R0_5;
    R0_26 = (mreal) I0_0;
    R0_26 = R0_26 + R0_25;
    R0_27 = pow(R0_1, R0_26);
    R0_28 = R0_6 * R0_6;
    R0_29 = R0_4 * R0_4;
    R0_30 = -R0_14;
    R0_32 = 1 / R0_6;
    R0_33 = pow(R0_0, R0_8);
    R0_34 = pow(R0_1, R0_8);
    R0_35 = (mreal) I0_0;
    R0_35 = R0_35 * R0_11 * R0_12;
    R0_33 = R0_33 + R0_34 + R0_35;
    R0_34 = (mreal) I0_2;
    R0_34 = R0_34 + R0_7 + R0_21;
    R0_35 = 1 / R0_34;
    R0_34 = (mreal) I0_5;
    R0_34 = R0_34 * R0_33 * R0_35 * R0_18;
    R0_33 = (mreal) I0_4;
    R0_33 = R0_33 + R0_5;
    R0_35 = pow(R0_1, R0_33);
    R0_33 = (mreal) I0_6;
    R0_33 = R0_33 * R0_35 * R0_15 * R0_16 * R0_5 * R0_14 * R0_6;
    R0_35 = pow(R0_1, R0_9);
    R0_36 = (mreal) I0_0;
    R0_36 = R0_36 * R0_1 * R0_4;
    R0_37 = (mreal) I0_1;
    R0_37 = R0_37 * R0_3 * R0_4;
    R0_38 = R0_20 * R0_5 * R0_22;
    R0_39 = -R0_38;
    R0_36 = R0_36 + R0_37 + R0_39;
    R0_37 = (mreal) I0_6;
    R0_37 = R0_37 * R0_35 * R0_15 * R0_16 * R0_18 * R0_36 * R0_6;
    R0_36 = (mreal) I0_7;
    R0_36 = R0_36 * R0_24 * R0_5 * R0_4;
    R0_39 = (mreal) I0_8;
    R0_39 = R0_39 * R0_20 * R0_5 * R0_3 * R0_4;
    R0_38 = (mreal) I0_9;
    R0_38 = R0_38 * R0_27 * R0_21 * R0_22;
    R0_36 = R0_36 + R0_39 + R0_38;
    R0_39 = R0_40 * R0_23 * R0_14 * R0_36 * R0_28;
    if (I0_10 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_36 = 1;
        }
    } else {
        mint S0 = I0_10;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_36 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_36 = S1 * R0_36;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_36 = 1 / R0_36;
        }
    }
    R0_38 = 1 / R0_36;
    R0_36 = (mreal) I0_7;
    R0_36 = R0_36 * R0_24 * R0_5 * R0_4 * R0_2;
    R0_35 = (mreal) I0_8;
    R0_35 = R0_35 * R0_20 * R0_5 * R0_3 * R0_4 * R0_2;
    if (I0_10 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_41 = 1;
        }
    } else {
        mint S0 = I0_10;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_41 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_41 = S1 * R0_41;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_41 = 1 / R0_41;
        }
    }
    R0_42 = (mreal) I0_3;
    R0_42 = R0_42 * R0_27 * R0_21 * R0_41;
    R0_36 = R0_36 + R0_35 + R0_42;
    R0_35 = R0_23 * R0_38 * R0_36 * R0_28;
    R0_38 = -R0_35;
    R0_36 = R0_1 * R0_1;
    R0_42 = (mreal) I0_3;
    R0_42 = R0_42 * R0_36 * R0_29;
    R0_36 = (mreal) I0_8;
    R0_36 = R0_36 * R0_1 * R0_3 * R0_29;
    R0_41 = R0_3 * R0_3;
    R0_35 = (mreal) I0_3;
    R0_35 = R0_35 * R0_41 * R0_29;
    R0_41 = (mreal) I0_3;
    R0_41 = R0_41 * R0_24 * R0_5 * R0_4 * R0_22;
    R0_44 = (mreal) I0_11;
    R0_44 = R0_44 * R0_20 * R0_5 * R0_3 * R0_4 * R0_22;
    if (I0_3 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_45 = 1;
        }
    } else {
        mint S0 = I0_3;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_45 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_45 = S1 * R0_45;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_45 = 1 / R0_45;
        }
    }
    R0_46 = R0_27 * R0_21 * R0_45;
    R0_42 = R0_42 + R0_36 + R0_35 + R0_41 + R0_44 + R0_46;
    R0_36 = R0_43 * R0_23 * R0_18 * R0_42 * R0_28;
    R0_34 = R0_34 + R0_33 + R0_37 + R0_39 + R0_38 + R0_36;
    R0_33 = R0_31 * R0_32 * R0_34;
    R0_30 = R0_30 + R0_33;
    *Res = R0_30;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
hess2_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
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
    mreal R1_11;
    mreal R1_13;
    mreal R1_14;
    mreal R1_15;
    mreal R1_16;
    mreal R1_17;
    mreal R1_19;
    mreal R1_20;
    mreal R1_21;
    mreal R1_22;
    int err = 0;
    R1_0 = A1;
    R1_1 = A2;
    R1_2 = A3;
    R1_3 = A4;
    R1_4 = A5;
    R1_5 = A6;
    R1_6 = A7;
    R1_7 = -R1_5;
    R1_8 = (mreal) I1_0;
    R1_8 = R1_8 + R1_7;
    if (I1_1 == 0) {
        if (R1_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R1_9 = 1;
        }
    } else {
        mint S0 = I1_1;
        mreal S1 = R1_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R1_9 = 1;
        while (S0) {
            if (S0 & 1) {
                R1_9 = S1 * R1_9;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R1_9 = 1 / R1_9;
        }
    }
    R1_10 = 1 / R1_9;
    R1_9 = R1_4 * R1_4;
    R1_11 = R1_6 * R1_6;
    R1_13 = 1 / R1_6;
    R1_14 = pow(R1_1, R1_7);
    R1_15 = pow(R1_0, R1_8);
    R1_16 = pow(R1_1, R1_8);
    R1_17 = -R1_16;
    R1_15 = R1_15 + R1_17;
    R1_17 = 1 / R1_8;
    R1_16 = (mreal) I1_2;
    R1_16 = R1_16 * R1_14 * R1_15 * R1_17 * R1_4 * R1_10 * R1_6;
    R1_14 = 1 / R1_1;
    R1_15 = 1 / R1_2;
    R1_17 = (mreal) I1_3;
    R1_17 = R1_17 * R1_14 * R1_5 * R1_4 * R1_15 * R1_11;
    R1_15 = (mreal) I1_3;
    R1_15 = R1_15 * R1_5;
    R1_14 = pow(R1_1, R1_15);
    R1_15 = (mreal) I1_4;
    R1_15 = R1_15 * R1_1 * R1_9;
    R1_19 = (mreal) I1_5;
    R1_19 = R1_19 * R1_3 * R1_9;
    R1_20 = (mreal) I1_8;
    R1_20 = R1_20 * R1_5;
    R1_21 = (mreal) I1_7;
    R1_21 = R1_21 + R1_20;
    R1_20 = pow(R1_1, R1_21);
    R1_21 = R1_2 * R1_2;
    R1_22 = (mreal) I1_6;
    R1_22 = R1_22 * R1_20 * R1_5 * R1_4 * R1_21;
    R1_15 = R1_15 + R1_19 + R1_22;
    R1_19 = R1_18 * R1_14 * R1_10 * R1_15 * R1_11;
    R1_16 = R1_16 + R1_17 + R1_19;
    R1_17 = R1_12 * R1_13 * R1_16;
    *Res = R1_17;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
hess2_2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
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
    R2_0 = A1;
    R2_1 = A2;
    R2_2 = A3;
    R2_3 = A4;
    R2_4 = A5;
    R2_5 = A6;
    R2_6 = A7;
    R2_7 = (mreal) I2_0;
    R2_7 = R2_7 * R2_5;
    R2_8 = pow(R2_1, R2_7);
    R2_7 = R2_4 * R2_4;
    R2_9 = R2_2 * R2_2;
    R2_10 = 1 / R2_9;
    R2_8 = R2_8 * R2_7 * R2_10 * R2_6;
    *Res = R2_8;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
hess3_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
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
    mreal R3_11;
    mreal R3_12;
    mreal R3_13;
    mreal R3_14;
    mreal R3_15;
    mreal R3_16;
    mreal R3_17;
    mreal R3_19;
    mreal R3_20;
    mreal R3_21;
    mreal R3_22;
    mreal R3_23;
    mreal R3_24;
    mreal R3_27;
    mreal R3_28;
    int err = 0;
    R3_0 = A1;
    R3_1 = A2;
    R3_2 = A3;
    R3_3 = A4;
    R3_4 = A5;
    R3_5 = A6;
    R3_6 = A7;
    R3_7 = -R3_5;
    R3_8 = (mreal) I3_0;
    R3_8 = R3_8 + R3_7;
    R3_9 = (mreal) I3_1;
    R3_9 = R3_9 * R3_5;
    R3_10 = (mreal) I3_2;
    R3_10 = R3_10 * R3_5;
    R3_11 = pow(R3_1, R3_10);
    if (I3_3 == 0) {
        if (R3_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R3_12 = 1;
        }
    } else {
        mint S0 = I3_3;
        mreal S1 = R3_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R3_12 = 1;
        while (S0) {
            if (S0 & 1) {
                R3_12 = S1 * R3_12;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R3_12 = 1 / R3_12;
        }
    }
    R3_13 = 1 / R3_12;
    R3_12 = pow(R3_1, R3_9);
    R3_14 = (mreal) I3_4;
    R3_14 = R3_14 + R3_9;
    R3_15 = pow(R3_1, R3_14);
    R3_16 = R3_2 * R3_2;
    R3_17 = R3_6 * R3_6;
    R3_19 = 1 / R3_6;
    R3_20 = pow(R3_1, R3_7);
    R3_21 = pow(R3_0, R3_8);
    R3_22 = pow(R3_1, R3_8);
    R3_23 = -R3_22;
    R3_21 = R3_21 + R3_23;
    R3_23 = 1 / R3_8;
    R3_22 = (mreal) I3_2;
    R3_22 = R3_22 * R3_1;
    R3_24 = (mreal) I3_1;
    R3_24 = R3_24 * R3_3;
    R3_22 = R3_22 + R3_24;
    R3_24 = (mreal) I3_1;
    R3_24 = R3_24 * R3_20 * R3_21 * R3_23 * R3_22 * R3_13 * R3_6;
    R3_21 = R3_2 * R3_2;
    R3_23 = 1 / R3_21;
    R3_21 = (mreal) I3_5;
    R3_21 = R3_21 * R3_12 * R3_5 * R3_2;
    R3_22 = (mreal) I3_6;
    R3_22 = R3_22 * R3_15 * R3_5 * R3_3 * R3_2;
    R3_21 = R3_21 + R3_22;
    R3_22 = R3_25 * R3_11 * R3_23 * R3_21 * R3_17;
    R3_21 = R3_1 * R3_1;
    R3_20 = (mreal) I3_5;
    R3_20 = R3_20 * R3_21 * R3_4;
    R3_21 = (mreal) I3_7;
    R3_21 = R3_21 * R3_1 * R3_3 * R3_4;
    R3_23 = R3_3 * R3_3;
    R3_27 = (mreal) I3_5;
    R3_27 = R3_27 * R3_23 * R3_4;
    R3_23 = (mreal) I3_8;
    R3_23 = R3_23 * R3_12 * R3_5 * R3_16;
    R3_28 = (mreal) I3_9;
    R3_28 = R3_28 * R3_15 * R3_5 * R3_3 * R3_16;
    R3_20 = R3_20 + R3_21 + R3_27 + R3_23 + R3_28;
    R3_21 = R3_26 * R3_11 * R3_13 * R3_20 * R3_17;
    R3_24 = R3_24 + R3_22 + R3_21;
    R3_22 = R3_18 * R3_19 * R3_24;
    *Res = R3_22;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
hess3_2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
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
    mreal R4_12;
    mreal R4_13;
    mreal R4_14;
    mreal R4_15;
    mreal R4_17;
    mreal R4_18;
    mreal R4_19;
    R4_0 = A1;
    R4_1 = A2;
    R4_2 = A3;
    R4_3 = A4;
    R4_4 = A5;
    R4_5 = A6;
    R4_6 = A7;
    R4_7 = -R4_5;
    R4_8 = (mreal) I4_0;
    R4_8 = R4_8 + R4_7;
    R4_9 = R4_2 * R4_2;
    R4_10 = 1 / R4_9;
    R4_9 = 1 / R4_6;
    R4_12 = pow(R4_1, R4_7);
    R4_13 = pow(R4_0, R4_8);
    R4_14 = pow(R4_1, R4_8);
    R4_15 = -R4_14;
    R4_13 = R4_13 + R4_15;
    R4_15 = 1 / R4_8;
    R4_14 = (mreal) I4_1;
    R4_14 = R4_14 * R4_12 * R4_13 * R4_15 * R4_10 * R4_6;
    R4_13 = (mreal) I4_1;
    R4_13 = R4_13 * R4_5;
    R4_15 = pow(R4_1, R4_13);
    R4_13 = (mreal) I4_2;
    R4_13 = R4_13 * R4_1 * R4_4;
    R4_12 = (mreal) I4_3;
    R4_12 = R4_12 * R4_3 * R4_4;
    R4_17 = (mreal) I4_6;
    R4_17 = R4_17 * R4_5;
    R4_18 = (mreal) I4_5;
    R4_18 = R4_18 + R4_17;
    R4_17 = pow(R4_1, R4_18);
    R4_18 = R4_2 * R4_2;
    R4_19 = (mreal) I4_4;
    R4_19 = R4_19 * R4_17 * R4_5 * R4_18;
    R4_13 = R4_13 + R4_12 + R4_19;
    R4_12 = R4_6 * R4_6;
    R4_19 = R4_16 * R4_15 * R4_10 * R4_13 * R4_12;
    R4_14 = R4_14 + R4_19;
    R4_19 = R4_11 * R4_9 * R4_14;
    *Res = R4_19;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
hess3_3(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
    mreal R5_0;
    mreal R5_1;
    mreal R5_2;
    mreal R5_3;
    mreal R5_4;
    mreal R5_5;
    mreal R5_6;
    mreal R5_8;
    mreal R5_9;
    mreal R5_10;
    mreal R5_11;
    mreal R5_12;
    R5_0 = A1;
    R5_1 = A2;
    R5_2 = A3;
    R5_3 = A4;
    R5_4 = A5;
    R5_5 = A6;
    R5_6 = A7;
    R5_8 = (mreal) I5_0;
    R5_8 = R5_8 * R5_5;
    R5_9 = pow(R5_1, R5_8);
    R5_8 = R5_1 * R5_1;
    R5_10 = (mreal) I5_1;
    R5_10 = R5_10 * R5_8;
    R5_8 = (mreal) I5_2;
    R5_8 = R5_8 * R5_1 * R5_3;
    R5_11 = R5_3 * R5_3;
    R5_12 = (mreal) I5_1;
    R5_12 = R5_12 * R5_11;
    R5_10 = R5_10 + R5_8 + R5_12;
    R5_8 = R5_2 * R5_2;
    R5_12 = 1 / R5_8;
    R5_8 = R5_7 * R5_9 * R5_10 * R5_12 * R5_6;
    *Res = R5_8;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
hess4_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
    mreal R6_0;
    mreal R6_1;
    mreal R6_2;
    mreal R6_3;
    mreal R6_4;
    mreal R6_5;
    mreal R6_6;
    mreal R6_7;
    mreal R6_8;
    mreal R6_9;
    mreal R6_10;
    mreal R6_11;
    mreal R6_12;
    mreal R6_13;
    mreal R6_14;
    mreal R6_15;
    mreal R6_16;
    mreal R6_17;
    mreal R6_18;
    mreal R6_19;
    mreal R6_20;
    mreal R6_21;
    mreal R6_22;
    mreal R6_23;
    mreal R6_24;
    mreal R6_25;
    mreal R6_26;
    mreal R6_27;
    mreal R6_28;
    mreal R6_29;
    mreal R6_30;
    mreal R6_31;
    mreal R6_32;
    mreal R6_33;
    mreal R6_34;
    mreal R6_35;
    mreal R6_36;
    mreal R6_37;
    mreal R6_38;
    mreal R6_39;
    mreal R6_40;
    mreal R6_41;
    mreal R6_42;
    mreal R6_43;
    mreal R6_44;
    mreal R6_45;
    mreal R6_46;
    mreal R6_47;
    mreal R6_48;
    mreal R6_50;
    mreal R6_51;
    mreal R6_52;
    mreal R6_53;
    mreal R6_54;
    mreal R6_55;
    mreal R6_57;
    mreal R6_58;
    mreal R6_59;
    mreal R6_60;
    mreal R6_61;
    mreal R6_62;
    mreal R6_63;
    mreal R6_64;
    mreal R6_65;
    mreal R6_67;
    mreal R6_68;
    mreal R6_69;
    mreal R6_70;
    mreal R6_71;
    int err = 0;
    R6_0 = A1;
    R6_1 = A2;
    R6_2 = A3;
    R6_3 = A4;
    R6_4 = A5;
    R6_5 = A6;
    R6_6 = A7;
    R6_7 = (mreal) I6_0;
    R6_7 = R6_7 * R6_5;
    R6_8 = (mreal) I6_1;
    R6_8 = R6_8 + R6_7;
    R6_9 = -R6_5;
    R6_10 = (mreal) I6_2;
    R6_10 = R6_10 + R6_9;
    R6_11 = pow(R6_0, R6_10);
    R6_12 = pow(R6_1, R6_10);
    R6_13 = -R6_12;
    R6_14 = R6_11 + R6_13;
    R6_15 = R6_10 * R6_10;
    R6_16 = 1 / R6_15;
    if (I6_3 == 0) {
        if (R6_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R6_15 = 1;
        }
    } else {
        mint S0 = I6_3;
        mreal S1 = R6_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R6_15 = 1;
        while (S0) {
            if (S0 & 1) {
                R6_15 = S1 * R6_15;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R6_15 = 1 / R6_15;
        }
    }
    R6_17 = 1 / R6_15;
    R6_15 = (mreal) I6_1;
    R6_15 = R6_15 * R6_5;
    R6_18 = (mreal) I6_4;
    R6_18 = R6_18 + R6_5;
    R6_19 = pow(R6_1, R6_18);
    R6_20 = 1 / R6_2;
    R6_21 = pow(R6_1, R6_9);
    R6_22 = 1 / R6_10;
    R6_23 = (mreal) I6_0;
    R6_23 = R6_23 * R6_1 * R6_4;
    R6_24 = (mreal) I6_1;
    R6_24 = R6_24 * R6_3 * R6_4;
    R6_25 = (mreal) I6_4;
    R6_25 = R6_25 + R6_15;
    R6_26 = pow(R6_1, R6_25);
    R6_27 = R6_2 * R6_2;
    R6_28 = R6_26 * R6_5 * R6_27;
    R6_29 = -R6_28;
    R6_28 = R6_23 + R6_24 + R6_29;
    R6_30 = log(R6_1);
    R6_31 = R6_5 * R6_5;
    R6_32 = pow(R6_1, R6_7);
    R6_33 = R6_4 * R6_4;
    R6_34 = pow(R6_1, R6_15);
    R6_35 = (mreal) I6_5;
    R6_35 = R6_35 * R6_5;
    R6_36 = (mreal) I6_0;
    R6_36 = R6_36 + R6_35;
    R6_37 = pow(R6_1, R6_36);
    R6_38 = R6_6 * R6_6;
    R6_39 = log(R6_0);
    R6_40 = R6_11 * R6_39;
    R6_41 = -R6_40;
    R6_40 = R6_12 * R6_30;
    R6_42 = R6_41 + R6_40;
    R6_43 = (mreal) I6_2;
    R6_43 = R6_43 + R6_7 + R6_31;
    R6_44 = pow(R6_0, R6_8);
    R6_45 = pow(R6_1, R6_8);
    R6_46 = R6_2 * R6_2;
    R6_47 = 1 / R6_46;
    if (I6_3 == 0) {
        if (R6_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R6_46 = 1;
        }
    } else {
        mint S0 = I6_3;
        mreal S1 = R6_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R6_46 = 1;
        while (S0) {
            if (S0 & 1) {
                R6_46 = S1 * R6_46;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R6_46 = 1 / R6_46;
        }
    }
    if (I6_5 == 0) {
        if (R6_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R6_48 = 1;
        }
    } else {
        mint S0 = I6_5;
        mreal S1 = R6_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R6_48 = 1;
        while (S0) {
            if (S0 & 1) {
                R6_48 = S1 * R6_48;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R6_48 = 1 / R6_48;
        }
    }
    R6_50 = 1 / R6_6;
    R6_51 = (mreal) I6_0;
    R6_51 = R6_51 * R6_11 * R6_12;
    R6_52 = R6_44 + R6_45 + R6_51;
    R6_51 = (mreal) I6_0;
    R6_51 = R6_51 + R6_15;
    R6_53 = R6_43 * R6_43;
    R6_54 = 1 / R6_53;
    R6_53 = (mreal) I6_1;
    R6_53 = R6_53 * R6_52 * R6_51 * R6_54 * R6_17;
    R6_52 = (mreal) I6_1;
    R6_52 = R6_52 * R6_19 * R6_14 * R6_16 * R6_5 * R6_20 * R6_6;
    R6_51 = (mreal) I6_1;
    R6_51 = R6_51 * R6_21 * R6_14 * R6_16 * R6_17 * R6_28 * R6_6;
    R6_54 = (mreal) I6_0;
    R6_54 = R6_54 * R6_19 * R6_14 * R6_22 * R6_5 * R6_20 * R6_6 * R6_30;
    R6_55 = (mreal) I6_0;
    R6_55 = R6_55 * R6_21 * R6_14 * R6_22 * R6_17 * R6_28 * R6_6 * R6_30;
    R6_57 = (mreal) I6_6;
    R6_57 = R6_57 * R6_34 * R6_5 * R6_4 * R6_2;
    R6_58 = (mreal) I6_7;
    R6_58 = R6_58 * R6_26 * R6_5 * R6_3 * R6_4 * R6_2;
    R6_59 = (mreal) I6_5;
    R6_59 = R6_59 * R6_37 * R6_31 * R6_46;
    R6_57 = R6_57 + R6_58 + R6_59;
    R6_58 = R6_56 * R6_32 * R6_47 * R6_57 * R6_38 * R6_30;
    R6_57 = R6_1 * R6_1;
    R6_59 = (mreal) I6_5;
    R6_59 = R6_59 * R6_57 * R6_33;
    R6_57 = (mreal) I6_7;
    R6_57 = R6_57 * R6_1 * R6_3 * R6_33;
    R6_60 = R6_3 * R6_3;
    R6_61 = (mreal) I6_5;
    R6_61 = R6_61 * R6_60 * R6_33;
    R6_60 = (mreal) I6_5;
    R6_60 = R6_60 * R6_34 * R6_5 * R6_4 * R6_27;
    R6_62 = (mreal) I6_8;
    R6_62 = R6_62 * R6_26 * R6_5 * R6_3 * R6_4 * R6_27;
    R6_63 = R6_37 * R6_31 * R6_48;
    R6_59 = R6_59 + R6_57 + R6_61 + R6_60 + R6_62 + R6_63;
    R6_57 = R6_32 * R6_17 * R6_59 * R6_38 * R6_30;
    R6_59 = (mreal) I6_1;
    R6_59 = R6_59 * R6_19 * R6_22 * R6_5 * R6_20 * R6_6 * R6_42;
    R6_61 = (mreal) I6_1;
    R6_61 = R6_61 * R6_21 * R6_22 * R6_17 * R6_28 * R6_6 * R6_42;
    R6_60 = 1 / R6_43;
    R6_62 = (mreal) I6_0;
    R6_62 = R6_62 * R6_44 * R6_39;
    R6_63 = (mreal) I6_1;
    R6_63 = R6_63 * R6_11 * R6_12 * R6_39;
    R6_64 = (mreal) I6_0;
    R6_64 = R6_64 * R6_45 * R6_30;
    R6_65 = (mreal) I6_1;
    R6_65 = R6_65 * R6_11 * R6_12 * R6_30;
    R6_62 = R6_62 + R6_63 + R6_64 + R6_65;
    R6_63 = (mreal) I6_0;
    R6_63 = R6_63 * R6_60 * R6_17 * R6_62;
    R6_60 = (mreal) I6_0;
    R6_60 = R6_60 * R6_26 * R6_2;
    R6_62 = (mreal) I6_8;
    R6_62 = R6_62 * R6_26 * R6_5 * R6_2 * R6_30;
    R6_60 = R6_60 + R6_62;
    R6_62 = R6_21 * R6_14 * R6_22 * R6_47 * R6_6 * R6_60;
    R6_60 = -R6_62;
    R6_62 = R6_26 * R6_27;
    R6_64 = -R6_62;
    R6_62 = (mreal) I6_0;
    R6_62 = R6_62 * R6_26 * R6_5 * R6_27 * R6_30;
    R6_64 = R6_64 + R6_62;
    R6_62 = (mreal) I6_1;
    R6_62 = R6_62 * R6_21 * R6_14 * R6_22 * R6_17 * R6_6 * R6_64;
    R6_65 = (mreal) I6_6;
    R6_65 = R6_65 * R6_34 * R6_4 * R6_2;
    R6_64 = (mreal) I6_7;
    R6_64 = R6_64 * R6_26 * R6_3 * R6_4 * R6_2;
    R6_67 = (mreal) I6_6;
    R6_67 = R6_67 * R6_37 * R6_5 * R6_46;
    R6_68 = (mreal) I6_9;
    R6_68 = R6_68 * R6_34 * R6_5 * R6_4 * R6_2 * R6_30;
    R6_69 = (mreal) I6_10;
    R6_69 = R6_69 * R6_26 * R6_5 * R6_3 * R6_4 * R6_2 * R6_30;
    R6_70 = (mreal) I6_9;
    R6_70 = R6_70 * R6_37 * R6_31 * R6_46 * R6_30;
    R6_65 = R6_65 + R6_64 + R6_67 + R6_68 + R6_69 + R6_70;
    R6_64 = R6_66 * R6_32 * R6_47 * R6_38 * R6_65;
    R6_65 = (mreal) I6_5;
    R6_65 = R6_65 * R6_34 * R6_4 * R6_27;
    R6_67 = (mreal) I6_8;
    R6_67 = R6_67 * R6_26 * R6_3 * R6_4 * R6_27;
    R6_68 = (mreal) I6_1;
    R6_68 = R6_68 * R6_37 * R6_5 * R6_48;
    R6_69 = (mreal) I6_6;
    R6_69 = R6_69 * R6_34 * R6_5 * R6_4 * R6_27 * R6_30;
    R6_70 = (mreal) I6_7;
    R6_70 = R6_70 * R6_26 * R6_5 * R6_3 * R6_4 * R6_27 * R6_30;
    R6_71 = (mreal) I6_5;
    R6_71 = R6_71 * R6_37 * R6_31 * R6_48 * R6_30;
    R6_65 = R6_65 + R6_67 + R6_68 + R6_69 + R6_70 + R6_71;
    R6_67 = R6_56 * R6_32 * R6_17 * R6_38 * R6_65;
    R6_53 = R6_53 + R6_52 + R6_51 + R6_54 + R6_55 + R6_58 + R6_57 + R6_59 + R6_61 + R6_63 + R6_60 + R6_62 + R6_64 +
            R6_67;
    R6_52 = R6_49 * R6_50 * R6_53;
    *Res = R6_52;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
hess4_2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
    mreal R7_0;
    mreal R7_1;
    mreal R7_2;
    mreal R7_3;
    mreal R7_4;
    mreal R7_5;
    mreal R7_6;
    mreal R7_7;
    mreal R7_8;
    mreal R7_9;
    mreal R7_10;
    mreal R7_11;
    mreal R7_12;
    mreal R7_13;
    mreal R7_14;
    mreal R7_15;
    mreal R7_16;
    mreal R7_17;
    mreal R7_18;
    mreal R7_19;
    mreal R7_20;
    mreal R7_21;
    mreal R7_22;
    mreal R7_23;
    mreal R7_24;
    mreal R7_26;
    mreal R7_27;
    mreal R7_28;
    mreal R7_30;
    mreal R7_31;
    mreal R7_32;
    mreal R7_34;
    R7_0 = A1;
    R7_1 = A2;
    R7_2 = A3;
    R7_3 = A4;
    R7_4 = A5;
    R7_5 = A6;
    R7_6 = A7;
    R7_7 = -R7_5;
    R7_8 = (mreal) I7_0;
    R7_8 = R7_8 + R7_7;
    R7_9 = pow(R7_1, R7_7);
    R7_10 = pow(R7_0, R7_8);
    R7_11 = pow(R7_1, R7_8);
    R7_12 = -R7_11;
    R7_13 = R7_10 + R7_12;
    R7_14 = R7_2 * R7_2;
    R7_15 = 1 / R7_14;
    R7_14 = R7_4 * R7_4;
    R7_16 = log(R7_1);
    R7_17 = 1 / R7_8;
    R7_18 = (mreal) I7_1;
    R7_18 = R7_18 * R7_5;
    R7_19 = pow(R7_1, R7_18);
    R7_20 = R7_6 * R7_6;
    R7_21 = (mreal) I7_2;
    R7_21 = R7_21 * R7_5;
    R7_22 = (mreal) I7_3;
    R7_22 = R7_22 + R7_21;
    R7_23 = pow(R7_1, R7_22);
    R7_24 = R7_2 * R7_2;
    R7_26 = 1 / R7_6;
    R7_27 = R7_8 * R7_8;
    R7_28 = 1 / R7_27;
    R7_27 = (mreal) I7_1;
    R7_27 = R7_27 * R7_9 * R7_13 * R7_28 * R7_4 * R7_15 * R7_6;
    R7_28 = (mreal) I7_2;
    R7_28 = R7_28 * R7_9 * R7_13 * R7_17 * R7_4 * R7_15 * R7_6 * R7_16;
    R7_30 = (mreal) I7_4;
    R7_30 = R7_30 * R7_1 * R7_14;
    R7_31 = (mreal) I7_5;
    R7_31 = R7_31 * R7_3 * R7_14;
    R7_32 = (mreal) I7_6;
    R7_32 = R7_32 * R7_23 * R7_5 * R7_4 * R7_24;
    R7_30 = R7_30 + R7_31 + R7_32;
    R7_31 = R7_29 * R7_19 * R7_15 * R7_30 * R7_20 * R7_16;
    R7_30 = log(R7_0);
    R7_32 = R7_10 * R7_30;
    R7_30 = -R7_32;
    R7_32 = R7_11 * R7_16;
    R7_30 = R7_30 + R7_32;
    R7_32 = (mreal) I7_1;
    R7_32 = R7_32 * R7_9 * R7_17 * R7_4 * R7_15 * R7_6 * R7_30;
    R7_30 = (mreal) I7_6;
    R7_30 = R7_30 * R7_23 * R7_4 * R7_24;
    R7_34 = (mreal) I7_4;
    R7_34 = R7_34 * R7_23 * R7_5 * R7_4 * R7_24 * R7_16;
    R7_30 = R7_30 + R7_34;
    R7_34 = R7_33 * R7_19 * R7_15 * R7_20 * R7_30;
    R7_27 = R7_27 + R7_28 + R7_31 + R7_32 + R7_34;
    R7_28 = R7_25 * R7_26 * R7_27;
    *Res = R7_28;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
hess4_3(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
    mreal R8_0;
    mreal R8_1;
    mreal R8_2;
    mreal R8_3;
    mreal R8_4;
    mreal R8_5;
    mreal R8_6;
    mreal R8_7;
    mreal R8_8;
    mreal R8_9;
    mreal R8_10;
    mreal R8_11;
    mreal R8_12;
    mreal R8_13;
    mreal R8_14;
    mreal R8_15;
    mreal R8_16;
    mreal R8_17;
    mreal R8_18;
    mreal R8_19;
    mreal R8_20;
    mreal R8_21;
    mreal R8_22;
    mreal R8_23;
    mreal R8_24;
    mreal R8_25;
    mreal R8_26;
    mreal R8_27;
    mreal R8_29;
    mreal R8_30;
    mreal R8_31;
    mreal R8_33;
    mreal R8_34;
    mreal R8_35;
    mreal R8_36;
    mreal R8_37;
    mreal R8_39;
    R8_0 = A1;
    R8_1 = A2;
    R8_2 = A3;
    R8_3 = A4;
    R8_4 = A5;
    R8_5 = A6;
    R8_6 = A7;
    R8_7 = -R8_5;
    R8_8 = (mreal) I8_0;
    R8_8 = R8_8 + R8_7;
    R8_9 = pow(R8_1, R8_7);
    R8_10 = pow(R8_0, R8_8);
    R8_11 = pow(R8_1, R8_8);
    R8_12 = -R8_11;
    R8_13 = R8_10 + R8_12;
    R8_14 = (mreal) I8_1;
    R8_14 = R8_14 * R8_1;
    R8_15 = (mreal) I8_2;
    R8_15 = R8_15 * R8_3;
    R8_16 = R8_14 + R8_15;
    R8_17 = R8_2 * R8_2;
    R8_18 = 1 / R8_17;
    R8_17 = (mreal) I8_2;
    R8_17 = R8_17 * R8_5;
    R8_19 = R8_2 * R8_2;
    R8_20 = log(R8_1);
    R8_21 = 1 / R8_8;
    R8_22 = (mreal) I8_1;
    R8_22 = R8_22 * R8_5;
    R8_23 = pow(R8_1, R8_22);
    R8_24 = R8_6 * R8_6;
    R8_25 = pow(R8_1, R8_17);
    R8_26 = (mreal) I8_3;
    R8_26 = R8_26 + R8_17;
    R8_27 = pow(R8_1, R8_26);
    R8_29 = 1 / R8_6;
    R8_30 = R8_8 * R8_8;
    R8_31 = 1 / R8_30;
    R8_30 = R8_9 * R8_13 * R8_31 * R8_16 * R8_18 * R8_6;
    R8_31 = -R8_30;
    R8_30 = R8_9 * R8_13 * R8_21 * R8_16 * R8_18 * R8_6 * R8_20;
    R8_33 = R8_1 * R8_1;
    R8_34 = (mreal) I8_4;
    R8_34 = R8_34 * R8_33 * R8_4;
    R8_33 = (mreal) I8_5;
    R8_33 = R8_33 * R8_1 * R8_3 * R8_4;
    R8_35 = R8_3 * R8_3;
    R8_36 = (mreal) I8_4;
    R8_36 = R8_36 * R8_35 * R8_4;
    R8_35 = (mreal) I8_6;
    R8_35 = R8_35 * R8_25 * R8_5 * R8_19;
    R8_37 = (mreal) I8_7;
    R8_37 = R8_37 * R8_27 * R8_5 * R8_3 * R8_19;
    R8_34 = R8_34 + R8_33 + R8_36 + R8_35 + R8_37;
    R8_33 = R8_32 * R8_23 * R8_18 * R8_34 * R8_24 * R8_20;
    R8_34 = log(R8_0);
    R8_36 = R8_10 * R8_34;
    R8_34 = -R8_36;
    R8_36 = R8_11 * R8_20;
    R8_34 = R8_34 + R8_36;
    R8_36 = R8_9 * R8_21 * R8_16 * R8_18 * R8_6 * R8_34;
    R8_34 = -R8_36;
    R8_35 = (mreal) I8_6;
    R8_35 = R8_35 * R8_25 * R8_19;
    R8_37 = (mreal) I8_7;
    R8_37 = R8_37 * R8_27 * R8_3 * R8_19;
    R8_36 = (mreal) I8_4;
    R8_36 = R8_36 * R8_25 * R8_5 * R8_19 * R8_20;
    R8_39 = (mreal) I8_8;
    R8_39 = R8_39 * R8_27 * R8_5 * R8_3 * R8_19 * R8_20;
    R8_35 = R8_35 + R8_37 + R8_36 + R8_39;
    R8_37 = R8_38 * R8_23 * R8_18 * R8_24 * R8_35;
    R8_31 = R8_31 + R8_30 + R8_33 + R8_34 + R8_37;
    R8_30 = R8_28 * R8_29 * R8_31;
    *Res = R8_30;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
hess4_4(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
    mreal R9_0;
    mreal R9_1;
    mreal R9_2;
    mreal R9_3;
    mreal R9_4;
    mreal R9_5;
    mreal R9_6;
    mreal R9_7;
    mreal R9_8;
    mreal R9_9;
    mreal R9_10;
    mreal R9_11;
    mreal R9_12;
    mreal R9_13;
    mreal R9_14;
    mreal R9_15;
    mreal R9_16;
    mreal R9_17;
    mreal R9_18;
    mreal R9_19;
    mreal R9_20;
    mreal R9_21;
    mreal R9_22;
    mreal R9_23;
    mreal R9_24;
    mreal R9_25;
    mreal R9_26;
    mreal R9_27;
    mreal R9_28;
    mreal R9_29;
    mreal R9_30;
    mreal R9_31;
    mreal R9_32;
    mreal R9_33;
    mreal R9_34;
    mreal R9_35;
    mreal R9_36;
    mreal R9_37;
    mreal R9_38;
    mreal R9_39;
    mreal R9_40;
    mreal R9_41;
    mreal R9_42;
    mreal R9_43;
    mreal R9_44;
    mreal R9_45;
    mreal R9_46;
    mreal R9_47;
    mreal R9_48;
    mreal R9_49;
    mreal R9_50;
    mreal R9_51;
    mreal R9_52;
    mreal R9_54;
    mreal R9_55;
    mreal R9_56;
    mreal R9_57;
    mreal R9_58;
    mreal R9_59;
    mreal R9_60;
    mreal R9_61;
    mreal R9_62;
    mreal R9_63;
    mreal R9_64;
    mreal R9_65;
    mreal R9_66;
    mreal R9_67;
    mreal R9_68;
    mreal R9_69;
    mreal R9_70;
    mreal R9_71;
    mreal R9_72;
    mreal R9_73;
    mreal R9_74;
    mreal R9_76;
    mreal R9_77;
    mreal R9_78;
    int err = 0;
    R9_0 = A1;
    R9_1 = A2;
    R9_2 = A3;
    R9_3 = A4;
    R9_4 = A5;
    R9_5 = A6;
    R9_6 = A7;
    R9_7 = (mreal) I9_0;
    R9_7 = R9_7 * R9_5;
    R9_8 = (mreal) I9_1;
    R9_8 = R9_8 + R9_7;
    R9_9 = -R9_5;
    R9_10 = (mreal) I9_2;
    R9_10 = R9_10 + R9_9;
    R9_11 = pow(R9_0, R9_8);
    R9_12 = pow(R9_1, R9_8);
    R9_13 = pow(R9_0, R9_10);
    R9_14 = pow(R9_1, R9_10);
    R9_15 = (mreal) I9_0;
    R9_15 = R9_15 * R9_13 * R9_14;
    R9_16 = R9_11 + R9_12 + R9_15;
    R9_17 = R9_5 * R9_5;
    R9_18 = (mreal) I9_2;
    R9_18 = R9_18 + R9_7 + R9_17;
    R9_19 = R9_2 * R9_2;
    R9_20 = 1 / R9_19;
    R9_19 = (mreal) I9_1;
    R9_19 = R9_19 * R9_5;
    R9_21 = pow(R9_1, R9_9);
    R9_22 = -R9_14;
    R9_23 = R9_13 + R9_22;
    R9_24 = (mreal) I9_0;
    R9_24 = R9_24 * R9_1 * R9_4;
    R9_25 = (mreal) I9_1;
    R9_25 = R9_25 * R9_3 * R9_4;
    R9_26 = (mreal) I9_3;
    R9_26 = R9_26 + R9_19;
    R9_27 = pow(R9_1, R9_26);
    R9_28 = R9_2 * R9_2;
    R9_29 = R9_27 * R9_5 * R9_28;
    R9_30 = -R9_29;
    R9_29 = R9_24 + R9_25 + R9_30;
    R9_31 = log(R9_1);
    R9_32 = R9_4 * R9_4;
    R9_33 = R9_31 * R9_31;
    R9_34 = R9_10 * R9_10;
    R9_35 = 1 / R9_34;
    R9_34 = 1 / R9_10;
    R9_36 = log(R9_0);
    R9_37 = R9_13 * R9_36;
    R9_38 = -R9_37;
    R9_37 = R9_14 * R9_31;
    R9_39 = R9_38 + R9_37;
    R9_40 = (mreal) I9_0;
    R9_40 = R9_40 + R9_19;
    R9_41 = R9_18 * R9_18;
    R9_42 = 1 / R9_41;
    R9_41 = R9_27 * R9_28;
    R9_43 = -R9_41;
    R9_41 = (mreal) I9_0;
    R9_41 = R9_41 * R9_27 * R9_5 * R9_28 * R9_31;
    R9_44 = R9_43 + R9_41;
    R9_45 = pow(R9_1, R9_7);
    R9_46 = R9_6 * R9_6;
    R9_47 = pow(R9_1, R9_19);
    R9_48 = (mreal) I9_4;
    R9_48 = R9_48 * R9_5;
    R9_49 = (mreal) I9_0;
    R9_49 = R9_49 + R9_48;
    R9_50 = pow(R9_1, R9_49);
    if (I9_4 == 0) {
        if (R9_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R9_51 = 1;
        }
    } else {
        mint S0 = I9_4;
        mreal S1 = R9_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R9_51 = 1;
        while (S0) {
            if (S0 & 1) {
                R9_51 = S1 * R9_51;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R9_51 = 1 / R9_51;
        }
    }
    R9_52 = R9_36 * R9_36;
    R9_54 = 1 / R9_6;
    R9_55 = R9_40 * R9_40;
    if (I9_5 == 0) {
        if (R9_18 == 0) {
            err = 1;
            goto error_label;
        } else {
            R9_56 = 1;
        }
    } else {
        mint S0 = I9_5;
        mreal S1 = R9_18;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R9_56 = 1;
        while (S0) {
            if (S0 & 1) {
                R9_56 = S1 * R9_56;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R9_56 = 1 / R9_56;
        }
    }
    R9_57 = 1 / R9_56;
    R9_56 = (mreal) I9_1;
    R9_56 = R9_56 * R9_16 * R9_55 * R9_57 * R9_20;
    R9_55 = (mreal) I9_0;
    R9_55 = R9_55 * R9_16 * R9_42 * R9_20;
    if (I9_5 == 0) {
        if (R9_10 == 0) {
            err = 1;
            goto error_label;
        } else {
            R9_57 = 1;
        }
    } else {
        mint S0 = I9_5;
        mreal S1 = R9_10;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R9_57 = 1;
        while (S0) {
            if (S0 & 1) {
                R9_57 = S1 * R9_57;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R9_57 = 1 / R9_57;
        }
    }
    R9_58 = 1 / R9_57;
    R9_57 = (mreal) I9_0;
    R9_57 = R9_57 * R9_21 * R9_23 * R9_58 * R9_20 * R9_29 * R9_6;
    R9_58 = (mreal) I9_1;
    R9_58 = R9_58 * R9_21 * R9_23 * R9_35 * R9_20 * R9_29 * R9_6 * R9_31;
    R9_59 = R9_21 * R9_23 * R9_34 * R9_20 * R9_29 * R9_6 * R9_33;
    R9_60 = -R9_59;
    R9_59 = R9_1 * R9_1;
    R9_61 = (mreal) I9_4;
    R9_61 = R9_61 * R9_59 * R9_32;
    R9_59 = (mreal) I9_6;
    R9_59 = R9_59 * R9_1 * R9_3 * R9_32;
    R9_62 = R9_3 * R9_3;
    R9_63 = (mreal) I9_4;
    R9_63 = R9_63 * R9_62 * R9_32;
    R9_62 = (mreal) I9_4;
    R9_62 = R9_62 * R9_47 * R9_5 * R9_4 * R9_28;
    R9_64 = (mreal) I9_7;
    R9_64 = R9_64 * R9_27 * R9_5 * R9_3 * R9_4 * R9_28;
    R9_65 = R9_50 * R9_17 * R9_51;
    R9_61 = R9_61 + R9_59 + R9_63 + R9_62 + R9_64 + R9_65;
    R9_59 = R9_45 * R9_20 * R9_61 * R9_46 * R9_33;
    R9_61 = (mreal) I9_0;
    R9_61 = R9_61 * R9_21 * R9_35 * R9_20 * R9_29 * R9_6 * R9_39;
    R9_63 = (mreal) I9_1;
    R9_63 = R9_63 * R9_21 * R9_34 * R9_20 * R9_29 * R9_6 * R9_31 * R9_39;
    R9_62 = (mreal) I9_0;
    R9_62 = R9_62 * R9_11 * R9_36;
    R9_64 = (mreal) I9_1;
    R9_64 = R9_64 * R9_13 * R9_14 * R9_36;
    R9_65 = (mreal) I9_0;
    R9_65 = R9_65 * R9_12 * R9_31;
    R9_66 = (mreal) I9_1;
    R9_66 = R9_66 * R9_13 * R9_14 * R9_31;
    R9_62 = R9_62 + R9_64 + R9_65 + R9_66;
    R9_64 = (mreal) I9_0;
    R9_64 = R9_64 * R9_40 * R9_42 * R9_20 * R9_62;
    R9_62 = (mreal) I9_0;
    R9_62 = R9_62 * R9_21 * R9_23 * R9_35 * R9_20 * R9_6 * R9_44;
    R9_65 = (mreal) I9_1;
    R9_65 = R9_65 * R9_21 * R9_23 * R9_34 * R9_20 * R9_6 * R9_31 * R9_44;
    R9_66 = (mreal) I9_0;
    R9_66 = R9_66 * R9_21 * R9_34 * R9_20 * R9_6 * R9_39 * R9_44;
    R9_67 = (mreal) I9_4;
    R9_67 = R9_67 * R9_47 * R9_4 * R9_28;
    R9_68 = (mreal) I9_7;
    R9_68 = R9_68 * R9_27 * R9_3 * R9_4 * R9_28;
    R9_69 = (mreal) I9_1;
    R9_69 = R9_69 * R9_50 * R9_5 * R9_51;
    R9_70 = (mreal) I9_8;
    R9_70 = R9_70 * R9_47 * R9_5 * R9_4 * R9_28 * R9_31;
    R9_71 = (mreal) I9_6;
    R9_71 = R9_71 * R9_27 * R9_5 * R9_3 * R9_4 * R9_28 * R9_31;
    R9_72 = (mreal) I9_4;
    R9_72 = R9_72 * R9_50 * R9_17 * R9_51 * R9_31;
    R9_67 = R9_67 + R9_68 + R9_69 + R9_70 + R9_71 + R9_72;
    R9_68 = R9_45 * R9_20 * R9_46 * R9_31 * R9_67;
    R9_67 = -R9_68;
    R9_68 = R9_13 * R9_52;
    R9_69 = R9_14 * R9_33;
    R9_70 = -R9_69;
    R9_68 = R9_68 + R9_70;
    R9_70 = R9_21 * R9_34 * R9_20 * R9_29 * R9_6 * R9_68;
    R9_68 = -R9_70;
    R9_70 = 1 / R9_18;
    R9_69 = (mreal) I9_4;
    R9_69 = R9_69 * R9_11 * R9_52;
    R9_71 = (mreal) I9_0;
    R9_71 = R9_71 * R9_13 * R9_14 * R9_52;
    R9_72 = (mreal) I9_7;
    R9_72 = R9_72 * R9_13 * R9_14 * R9_36 * R9_31;
    R9_73 = (mreal) I9_4;
    R9_73 = R9_73 * R9_12 * R9_33;
    R9_74 = (mreal) I9_0;
    R9_74 = R9_74 * R9_13 * R9_14 * R9_33;
    R9_69 = R9_69 + R9_71 + R9_72 + R9_73 + R9_74;
    R9_70 = R9_70 * R9_20 * R9_69;
    R9_69 = (mreal) I9_7;
    R9_69 = R9_69 * R9_27 * R9_28 * R9_31;
    R9_71 = (mreal) I9_7;
    R9_71 = R9_71 * R9_27 * R9_5 * R9_28 * R9_33;
    R9_69 = R9_69 + R9_71;
    R9_71 = R9_21 * R9_23 * R9_34 * R9_20 * R9_6 * R9_69;
    R9_69 = -R9_71;
    R9_72 = (mreal) I9_1;
    R9_72 = R9_72 * R9_50 * R9_51;
    R9_73 = (mreal) I9_9;
    R9_73 = R9_73 * R9_47 * R9_4 * R9_28 * R9_31;
    R9_74 = (mreal) I9_10;
    R9_74 = R9_74 * R9_27 * R9_3 * R9_4 * R9_28 * R9_31;
    R9_71 = (mreal) I9_9;
    R9_71 = R9_71 * R9_50 * R9_5 * R9_51 * R9_31;
    R9_76 = (mreal) I9_9;
    R9_76 = R9_76 * R9_47 * R9_5 * R9_4 * R9_28 * R9_33;
    R9_77 = (mreal) I9_10;
    R9_77 = R9_77 * R9_27 * R9_5 * R9_3 * R9_4 * R9_28 * R9_33;
    R9_78 = (mreal) I9_9;
    R9_78 = R9_78 * R9_50 * R9_17 * R9_51 * R9_33;
    R9_72 = R9_72 + R9_73 + R9_74 + R9_71 + R9_76 + R9_77 + R9_78;
    R9_73 = R9_75 * R9_45 * R9_20 * R9_46 * R9_72;
    R9_56 = R9_56 + R9_55 + R9_57 + R9_58 + R9_60 + R9_59 + R9_61 + R9_63 + R9_64 + R9_62 + R9_65 + R9_66 + R9_67 +
            R9_68 + R9_70 + R9_69 + R9_73;
    R9_55 = R9_53 * R9_54 * R9_56;
    *Res = R9_55;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

