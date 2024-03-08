#ifndef TST_ROOT_H
#define TST_ROOT_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "root.h"
}
double array[2];
TEST(testroot, right_answer) {
    root(array, 1, -3, 2);
    ASSERT_EQ(array[0], 2);
    ASSERT_EQ(array[1], 1);
}
TEST(testroot, double_answer) {
    root(array, 1, -4, 3.75);
    ASSERT_EQ(array[0], 2.5);
    ASSERT_EQ(array[1], 1.5);
}
TEST(testroot, zerod_answer) {
    root(array, 1, -2, 1);
    ASSERT_EQ(array[0], 1);
    ASSERT_EQ(array[1], 1);
}
TEST(testroot, minusd_answer) {
    root(array, 1, -2, 2);
    ASSERT_EQ(array[0], 5051);
    ASSERT_EQ(array[1], 5051);
}
TEST(testroot, zeroa_answer) {
    root(array, 0, -2, 1);
    ASSERT_EQ(array[0], 5051);
    ASSERT_EQ(array[1], 5051);
}
#endif // TST_ROOT_H
