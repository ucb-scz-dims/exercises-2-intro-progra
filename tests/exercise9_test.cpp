#include <excercises.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  exercise_9("comfort");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "-1\n");
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  exercise_9("coffe");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "3\n");
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  exercise_9("car");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "-2\n");
}

TEST(Test4, TestExample4) {
  testing::internal::CaptureStdout();

  exercise_9("");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "-2\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}