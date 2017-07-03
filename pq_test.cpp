#include <queue>
#include <random>
#include "include/gtest/gtest.h"

#include "priority_queue.h"

namespace {
  TEST(push, random_large)
  {
    std::random_device rand_dev;

    std::default_random_engine e(rand_dev());
    std::uniform_real_distribution<double> dis(0, 100);

    std::priority_queue<double> std_pq;
    Priority_queue pq;

    for (unsigned i = 0; i != 10000; ++i)
    {
      double num = dis(e);
      std_pq.push(num);
      pq.push(num);
    }

    EXPECT_EQ(std_pq.top(), pq.top());
    EXPECT_EQ(std_pq.size(), pq.size());
  }
}