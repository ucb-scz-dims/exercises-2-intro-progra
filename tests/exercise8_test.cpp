#include <excercises.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  exercise_8("hello world");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "NO\n");
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  exercise_8("never odd or even");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "YES\n");
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  exercise_8("Never odd or even");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "NO\n");
}

TEST(Test4, TestExample4) {
  testing::internal::CaptureStdout();

  exercise_8("");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "YES\n");
}

TEST(Test5, TestExample5) {
  testing::internal::CaptureStdout();

  exercise_8("aa");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "YES\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}