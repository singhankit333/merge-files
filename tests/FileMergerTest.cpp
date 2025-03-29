#include <gtest/gtest.h>
#include "FileMerger.h"

TEST(FileMergerTest, MergeFiles) {
    FileMerger merger;
    ASSERT_NO_THROW(merger.mergeFiles("test_input", "test_output.txt"));
}