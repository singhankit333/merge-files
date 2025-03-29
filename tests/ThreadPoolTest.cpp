#include <gtest/gtest.h>
#include "ThreadPool.h"

TEST(ThreadPoolTest, EnqueueTask) {
    ThreadPool pool(4);
    ASSERT_NO_THROW(pool.enqueueTask([]() { /* Task logic */ }));
}