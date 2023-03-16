#ifndef SRC_TESTS_CALC_TESTS_H_
#define SRC_TESTS_CALC_TESTS_H_

#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "../project/s21_calculation.h"

Suite *suite_s21_calc_notation(void);

void run_tests(void);
void run_testcase(Suite *testcase);

#endif  // SRC_TESTS_CALC_TESTS_H_
