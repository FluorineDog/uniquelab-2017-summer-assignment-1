#include <queue>
#include "include/gtest/gtest.h"

#include "set.h"
#include "priority_queue.h"

namespace {
  TEST(priority_queue, example)
  {
    std::priority_queue<int> prio_q;

    prio_q.push(1);

    EXPECT_EQ(1, prio_q.top());
  }
}