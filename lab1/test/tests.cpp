#include <gtest/gtest.h>
#include "../include/Solution.hpp"

TEST(test_monday, basic_test_set) {
    Solution s;
    ASSERT_TRUE(s.solve("Понедельник", 12));
    ASSERT_FALSE(s.solve("Понедельник", 13));
    ASSERT_FALSE(s.solve("Понедельник", -146));
}

TEST(test_tuesday, basic_test_set) {
    Solution s;
    ASSERT_TRUE(s.solve("Вторник", 96));
    ASSERT_FALSE(s.solve("Вторник", 95));
    ASSERT_FALSE(s.solve("Вторник", -96));
}

TEST(test_wednesday, basic_test_set) {
    Solution s;
    ASSERT_TRUE(s.solve("Среда", 34));
    ASSERT_FALSE(s.solve("Среда", 35));
    ASSERT_FALSE(s.solve("Среда", -36));
}

TEST(test_thursday, basic_test_set) {
    Solution s;
    ASSERT_TRUE(s.solve("Четверг", 0));
    ASSERT_FALSE(s.solve("Четверг", 353));
    ASSERT_FALSE(s.solve("Четверг", -273));
}

TEST(test_friday, basic_test_set) {
    Solution s;
    ASSERT_TRUE(s.solve("Пятница", 18));
    ASSERT_TRUE(s.solve("Пятница", -36));
    ASSERT_FALSE(s.solve("Пятница", 359));
    ASSERT_FALSE(s.solve("Пятница", -359));
}

TEST(test_saturday, basic_test_set) {
    Solution s;
    ASSERT_TRUE(s.solve("Суббота", 56));
    ASSERT_FALSE(s.solve("Суббота", 1234818));
    ASSERT_FALSE(s.solve("Суббота", -158382));
}

TEST(test_sunday, basic_test_set) {
    Solution s;
    ASSERT_TRUE(s.solve("Воскресенье", 666));
    ASSERT_TRUE(s.solve("Воскресенье", -666));
    ASSERT_FALSE(s.solve("Воскресенье", 94234));
    ASSERT_FALSE(s.solve("Воскресенье", -6782));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}