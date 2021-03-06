
#ifndef TIME_TABLE_H
#define TIME_TABLE_H

/*
 * TODO: This whole file is poorly named. Good luck!
 */

/*
 * Use the table below to set the PER register for a desired sample rate.
 * Assuming F_CPU is fixed at 32MHz.
 * Base 2 @DIV1
 *            PER       Hz   PER      Real Hz  error
 * 09 62500.00000      512 62500      512.000  0.000
 * 10 31250.00000     1024 31250     1024.000  0.000
 * 11 15625.00000     2048 15625     2048.000  0.000
 * 12  7812.50000     4096  7813     4095.738 -0.006
 * 13  3906.25000     8192  3906     8192.524  0.006
 * 14  1953.12500    16384  1953    16385.049  0.006
 * 15   976.56250    32768   977    32753.327 -0.045
 * 16   488.28125    65536   488    65573.770  0.058
 * 17   244.14062   131072   244   131147.541  0.058
 * 18   122.07031   262144   122   262295.082  0.058
 * 19    61.03516   524288    61   524590.164  0.058
 * 20    30.51758  1048576    31  1032258.065 -1.556 (1M)
 * 21    15.25879  2097152    15  2133333.333  1.725
 * 22     7.62939  4194304     8  4000000.000 -4.633
 * 23     3.81470  8388608     4  8000000.000 -4.633
 * 24     1.90735 16777216     2 16000000.000 -4.633
 * 25     0.95367 33554432     1 32000000.000 -4.633
 * 
 * Base 10 @DIV1
 *            PER       Hz   PER      Real Hz  error
 * 03 32000.00000     1000 32000     1000.000  0.000 
 * 04  3200.00000    10000  3200    10000.000  0.000
 * 05   320.00000   100000   320   100000.000  0.000
 * 06    32.00000  1000000    32  1000000.000  0.000 (1M)
 * 07     3.20000 10000000     3 10666666.667  6.667
 */

/*
 * PER_BB_XX
 * BB is the base. 
 * XX is the exponent.
 * 
 * e.g. 
 * PER_02_20 means 2^20 = 1048576Hz.
 * PER_10_06 means 10^6 = 1000000Hz.
 */


#define PER_02_09 (62500)
#define PER_02_10 (31250)
#define PER_02_11 (15625)
#define PER_02_12  (7813)
#define PER_02_13  (3906)
#define PER_02_14  (1953)
#define PER_02_15   (977)
#define PER_02_16   (488)
#define PER_02_17   (244)
#define PER_02_18   (122)
#define PER_02_19    (61)
#define PER_02_20    (31)
#define PER_02_21    (15)
#define PER_02_22     (8)
#define PER_02_23     (4)
#define PER_02_24     (2)
#define PER_02_25     (1)

#define PER_10_03 (32000)
#define PER_10_04  (3200)
#define PER_10_05   (320)
#define PER_10_06    (32)
#define PER_10_07     (3)


#endif /* TIME_TABLE_H */
