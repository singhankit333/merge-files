#include <gtest/gtest.h>
#include "Utils.h"

TEST(UtilsTest, GetCurrentTimestamp) {
    std::string timestamp = Utils::getCurrentTimestamp();
    ASSERT_FALSE(timestamp.empty());
}