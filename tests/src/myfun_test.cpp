#include <numeric>

#include <gtest/gtest.h>

#include "src/myfun.h"

TEST(myfun_test, myadd) {
    //test if myadd(1,1) == 2
    EXPECT_EQ(myadd(1, 1), 2);

    //test if myadd(5, 3) == 8
    EXPECT_EQ(myadd(5, 3), 8);

    //test if myadd(0, 0) == 0
    EXPECT_EQ(myadd(0, 0), 0);

    //test if myadd(10, 10) == 0
    EXPECT_EQ(myadd(-10, 10), 0);


    //test overflow

    int max_int = std::numeric_limits<int>::max();

    long tmp = 2 * static_cast<long>(max_int);

    //test if myadd(max_int, max_int) == 2*max_int
    //it wont be equal, since we triggered an overflow
    EXPECT_NE(myadd(max_int, max_int), tmp);

    //max_int + max_int == -1
    EXPECT_EQ(myadd(max_int, max_int), -2);
}

TEST(myfun_test, mymult) {
    //test if mymult(1,1) == 2
    EXPECT_EQ(mymult(1, 1), 1);

    //test if mymult(5, 3) == 15
    EXPECT_EQ(mymult(5, 3), 15);

    //test if mymult(4, 7) == mymult(4, 7)
    EXPECT_EQ(mymult(4, 7), mymult(4, 7));

    //test if mymult(0, 0) == 0
    EXPECT_EQ(mymult(0, 0), 0);

    //test if mymult(5, 0) == 0
    EXPECT_EQ(mymult(5, 0), 0);

    //test if mymult(0, 8) == 0
    EXPECT_EQ(mymult(0, 8), 0);

    //test if mymult(-10, 10) == -100
    EXPECT_EQ(mymult(-10, 10), -100);


    //test overflow

    int max_int = std::numeric_limits<int>::max();

    long tmp = static_cast<long>(max_int) * static_cast<long>(max_int);

    //test if mymult(max_int, max_int) == max_int*max_int
    //it wont be equal, since we triggered an overflow
    EXPECT_NE(mymult(max_int, max_int), tmp);

    EXPECT_EQ(mymult(max_int, max_int), 1);

}