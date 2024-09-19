#include "my_project/hello.h"

#include <gtest/gtest.h>
#include <spdlog/spdlog.h>

TEST(MyProjectTest, Hello) {
  SPDLOG_INFO("prepare to say Hello");
  Hello();
}
